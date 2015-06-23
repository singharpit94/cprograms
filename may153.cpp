#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll hcf(ll x,ll y)
{
	if(y==0)
	return x;
	else
	return hcf(y,x%y);
}
int main()
{
	ll t,i,j,k,l,m,n,a,b,sum,ctr;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		k=hcf(a,b);
		while(1)
		{
			b=b/k;
			k=hcf(a,b);
			if(k!=b&&k!=1)
			
			continue;
			else
			break;
		}
		if(k==b)
		cout<<"Yes\n";
		else
		cout<<"No\n";
		
	}
	return 0;
}
