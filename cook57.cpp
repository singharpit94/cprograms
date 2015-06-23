#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,a[105],ig[105],tr[105],i,j,k,m,n,sum1,sum2;
	cin>>t;
	while(t--)
	{   sum1=0;sum2=0;
		cin>>n>>m>>k;
		for(i=1;i<=100;i++)
		{
			
			a[i]=0;
			ig[i]=0;
			tr[i]=0;
		}
		for(i=1;i<=m;i++)
		{
			cin>>j;
			ig[j]=1;
		}
		for(i=1;i<=k;i++)
		{
			cin>>j;
			tr[j]=1;
		}
		for(i=1;i<=n;i++)
		{
			if((ig[i]==1)&&(tr[i]==1))
			sum1++;
			if((ig[i]==0)&&tr[i]==0)
			sum2++;
		}
		cout<<sum1<<" "<<sum2<<"\n";
	}
	return 0;
	
}
