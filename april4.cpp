#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j,k,l,m,n,a[100100],cap,req,sum;
	char s[1000];
	cin>>t;
	while(t--)
	{   req=0;
	sum=0;
		scanf("%s",s);
		cin>>n;
		cap=12*n;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='S')
			req+=1;
			else
			req+=2;
		}
		if(req>cap)
		{
			cout<<"0\n";
			continue;
		}
		j=1;
		for(j=1;j*req<cap;j++)
		{   
			sum+=(cap-req*j);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
