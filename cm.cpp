#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long int a[100100],d[100100],i,j,k,n,q,t,sum;

	
		
	scanf("%lld ",&n);
	for(i=1;i<=100000;i++)
	{
		a[i]=0;
		d[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%lld %lld",&j,&k);
		a[j]++;
		d[k]++;
	}
	for(i=2;i<=n;i++)
	{
		a[i]+=a[i-1];
		d[i]+=d[i-1];
	}
	scanf("%lld",&q);
	while(q--)
	{    
	    sum=0;
	    scanf("%lld",&k);
	    for(i=0;i<k;i++)
	{
			scanf("%lld",&j);
		sum+=a[j]-d[j-1];
		
	}
	printf("%lld\n",sum);
	}
	return 0;
}
