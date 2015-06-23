#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,k,m,a[100100],flag,sum;
	cin>>t;
	while(t--)
	{    flag=0;
	     sum=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
		   cin>>a[i];
		
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<2)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"-1\n";
	else
	{
		sort(a,a+n);
	    for(i=1;i<n;i++)
	    {
	    	sum+=a[i];
		}
		sum=sum+2;
		cout<<sum<<"\n";
	}
}
return 0;
}
