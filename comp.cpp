#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,t,a[100100],ctr,n,min;
	   
	min=0;
		cin>>n;
		for(i=1;i<=n;i++)
		cin>>a[i];
		sort(a+1,a+n+1);
		for(i=1;i<=n;i++)
		{
			if(a[i]!=i)
			min+=i-a[i];
		}
		cout<<min<<"\n";
	
	return 0;
}
