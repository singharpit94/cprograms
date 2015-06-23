#include<bits/stdc++.h>
using namespace std;
long long int a[4000],dp[4005][4005]={0};
int main()
{
	long long int n,i,j,k,sum,max;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			dp[i][j]=a[i]*a[j];
		}
	}

	
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			sum=dp[i][j]+dp[i-1][j+1];
			if(sum>dp[i][j])
			dp[i][j]=sum;
		}
	}
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cout<<dp[i][j]<<" ";
		cout<<"\n";
	}*/
	max=dp[1][1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(max<=dp[i][j])
			max=dp[i][j];
		}
	}

	cout<<max;
	return 0;
}
