#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define BLANK ' '
#define TAB '\t'
#define MAX 50

void infix_to_postfix();
long int eval_post();
char infix[MAX], postfix[MAX];
long int stack[MAX];
long int stack1[MAX];
int top,top1;
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int isEmpty1()
{
	if(top1==-1)
		return 1;
	else
		return 0;
}

int priority(char symbol)
{
	switch(symbol)
	{
	case '(':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
	case '%':
		return 2;
	case '^':
		return 3;
	default :
		return 0;
	}
}

void push(long int symbol)
{
	if(top>MAX)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	stack[++top]=symbol;
}
void push1(long int symbol)
{
	if(top1>MAX)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	stack1[++top1]=symbol;
}
long int pop()
{
	if( isEmpty() )
	{
		printf("Stack underflow\n");
		exit(1);
	}
	return (stack[top--]);
}
long int pop1()
{
	if( isEmpty1() )
	{
		printf("Stack underflow\n");
		exit(1);
	}
	return (stack1[top1--]);
}

int white_space(char symbol)
{
	if( symbol == BLANK || symbol == TAB )
		return 1;
	else
		return 0;
}


main()
{
	long int value;
	top=-1;
	top1=-1;
	printf("Enter infix : ");
	gets(infix);
	infix_to_postfix();
	printf("Postfix : %s\n",postfix);
	value=eval_post();
	printf("Value of expression : %ld\n",value);
}

void infix_to_postfix()
{
	unsigned int i,p=0;
	char next;
	char symbol;
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		if(!white_space(symbol))
		{
			switch(symbol)
			{
			case '(':
				push(symbol);
				break;
			case ')':
				while((next=pop())!='(')
					postfix[p++] = next;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':
			case '^':
				while( !isEmpty( ) &&  priority(stack[top])>= priority(symbol) )
					postfix[p++]=pop();
				push(symbol);
				break;
			default:
			     postfix[p++]=symbol;
			}
		}
	}
	while(!isEmpty( ))
		postfix[p++]=pop();
	postfix[p]='\0'; 
}

long int eval_post()
{
	long int a,b,temp,result,tr;
	unsigned int i;

	for(i=0;i<strlen(postfix);i++)
	{
		if(postfix[i]<=122 && postfix[i]>=97)
		{
		   printf("Enter the value of %c\n",postfix[i]);
		   scanf("%ld",&tr);

		 push1(tr);
		}

		else
		{
			a=pop1();
			b=pop1();
			switch(postfix[i])
			{
			case '+':
				temp=b+a; break;
			case '-':
				temp=b-a;break;
			case '*':
				temp=b*a;break;
			case '/':
				temp=b/a;break;
			case '%':
				temp=b%a;break;
			case '^':
				temp=pow(b,a);
			}
			push1(temp);
		}
	}
	result=pop1();
	return result;
}

