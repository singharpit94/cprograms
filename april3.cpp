#include<bits/stdc++.h>
#define M 1000003
using namespace std;
long long int a[1000000009]={1};
int main()
{
	long long int t,n,i,j,k,l,r,m,o,p,sum;
	cin>>t;
	while(t--)
	{   sum=0;
		cin>>n>>l>>r;
		j=r-l+1;
		for(i=1;i<=n;i++)
		{   for(k=1;k<=j;k++)
			a[k]=(a[k]+a[k-1])%M;
			sum=(sum+a[j])%M;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
