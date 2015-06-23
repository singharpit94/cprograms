#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j,k,n,o,p,a[100100],sum;
	cin>>t;
	while(t--)
	{   sum=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum%2==0)
		{
			if(k==1)
			printf("odd\n");
			else
			printf("even\n");
		}
		else
		printf("even\n");
	}
	return 0;
	
}
