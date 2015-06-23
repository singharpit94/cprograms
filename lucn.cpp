#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,k,flag;
	char s[200],a,b;
	cin>>t;
	while(t--)
	{   flag=0;
		scanf(" %s",s);
		a=s[0];
		b=s[1];
		if(a==b)
		{
			printf("NO\n");
			
		}
		else
		{
		
		k=strlen(s);
	
		if(k==2)
		{
			if(a==b)
			printf("NO\n");
			else
			printf("YES\n");
		}
		else if(k%2==0)
		{
			for(i=2;i<k;i=i+2)
			{
				if((s[i]==a)&&(s[i+1]==b))
				continue;
				else
				{
					flag=1;
					break;
					
				}
			}
			if(flag)
			printf("NO\n");
			else
			printf("YES\n");
		}
		else
		{
		     	for(i=2;i<(k-1);i=i+2)
			{
				if((s[i]==a)&&(s[i+1]==b))
				continue;
				else
				{
					flag=1;
					break;
					
				}
			}
			if(flag==0)
			{
				if(s[k-1]==a)
				{
					printf("YES\n");
				}
				else 
				printf("NO\n");
				
				}
				else
				printf("NO\n");
				
				
					
		}
	}
	}
	return 0;
}
