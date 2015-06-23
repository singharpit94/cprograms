#include<bits/stdc++.h>

using namespace std;
long long int x[1000100];
int main()
{
	long long int t,n,i,j,k,min,max;
	scanf("%lld",&t);
	while(t--)
	{   max=0;
	min=0;
	
		
		scanf("%lld",&n);
	
			for(i=0;i<1000001;i++)
		x[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&k);
			x[k]=1;
		}
		for(i=0;i<1000001;i++)
		{
			if(x[i]==1)
			{
				max++;
				i++;
			}
		}
		for(i=0;i<1000001;i++)
		{
			if( i!=999998 && x[i] && x[i+1] && x[i+2])
			{
				min++;
				i=i+2;
			}
			else if(x[i])
			{
			min++;
			i++;
		    }
		}
		printf("%lld %lld\n",min,max);
	}
	return  0;
}

