#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
	long long int n,q,x,y,i,j,k,a[100100]={0},c,b,d,sum;
	cin>>n>>q;

	while(q--)
	{
		cin>>c>>x>>y;
		if(c==1)
		{   b=1;d=2;
			for(i=x;i<=y;i++)
			{
				a[i]=(a[i]+(b*d)%mod)%mod;
				b=d;
				d=d+1;
			}
		}
		if(c==2)
		{   
		   sum=0;
		   for(i=x;i<=y;i++)
		   sum=(sum+a[i])%mod;
		   cout<<sum<<"\n";
			
		}
	}
	return 0;
	
}

