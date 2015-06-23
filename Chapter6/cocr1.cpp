#include<bits/stdc++.h>
using namespace std;
long long int a[1000010],n,k,i,j,l,m;
int main()
{
	
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	l=0;
	if(a[0]%2==1&&a[0]<k)
	l++;
	for(i=1;i<n;i++)
{
	if(a[i]!=a[i-1])
	{
		if(a[i]%2==1&&a[i]<k)
		l++;
	}
}
cout<<l<<"\n";
return 0;
}
