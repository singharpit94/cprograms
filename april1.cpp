#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t,n,i,j,k,m,a[100100],ctr ;
	cin>>t;
	while(t--)
	{   ctr=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				if(a[i]!=a[i+1])
				ctr++;
			}
			else if(i==n-1)
			{
				if(a[i]!=a[i-1])
				ctr++;
				
			}
			else
			{
				if((a[i]!=a[i-1])||a[i]!=a[i+1])
				ctr++;
			}
		}
		cout<<ctr<<"\n";
	}
	return 0;
	
}
