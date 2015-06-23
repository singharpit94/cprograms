#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a[100100],i,j,k,l,m,n,sum;
	cin>>t;
	while(t--)
    {   sum=0;
    	cin>>n;
    	for(i=1;i<=n;i++)
        {
				cin>>a[i];
				sum=sum+a[i];
				
    	
	}
	sum=sum/(n-1);
	for(i=1;i<=n-1;i++)
	{
		cout<<sum-a[i]<<" ";
	}
	cout<<sum-a[n]<<"\n";
}
return 0;
}
