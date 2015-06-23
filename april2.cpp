#include<stdio.h>
int main()
{
    long long int t,sum,n,i,j;
    scanf("%lld",&t);
    while(t--)
    {
          scanf("%lld",&n);
          if(n==1)
          printf("1\n");
          else
          {
		  
          sum=0;
          i=2;
          while((i*i)<=n)
          {
             if(n%i==0)
             {
                  if(i*i==n)
                  sum+=i;
                  else
                  sum+=i+n/i;

             }


             i++;

          }
          printf("%lld\n",sum+1+n);
      }

    }
    return 0;
}
