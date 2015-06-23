#include<bits/stdc++.h>
using namespace std ;
int main()
{    
	long long int t,i,j,k,n,m,o,p,sum,ctr,a[105],b[105],flag,c[105],flag1,flag2;
	cin>>t;
	while(t--)
	{     	cin>>n;
	     for(i=1;i<=n;i++)
	    {
		  b[i]=0;
		  c[i]=0;
		  cin>>a[i];
    	}
	     flag=0;
	     flag1=0;
	     flag2=0;
	     sum=0;
	
		for(i=1;i<=n;i++)
		{   
		
				sum+=a[i];
				j=a[i];
			if(j>n-1)
			{
				flag=1;
			    break;
			}
			
		
		}
		if((flag==1)||sum!=n)
		cout<<-1<<"\n";
		
		else
		{
			for(i=1;i<=n;i++)
			{
				if(a[i]>0)
				{
					j=a[i];
					for(k=n;k>=1&&j>0;k--)
					{
						if(k!=i&&b[k]==0)
						{
							b[k]=i;
							j--;
							
						}
					}
				}
			}
			for(i=1;i<=n;i++)
			{
				if(a[i]>0)
				{
					j=a[i];
					for(k=1;k<=n&&j>0;k++)
					{
						if(k!=i&&c[k]==0)
						{
							c[k]=i;
							j--;
							
						}
					}
				}
			}
		/*	for(i=1;i<=n;i++)
			cout<<b[i]<<" ";
			cout<<"\n";
			for(i=1;i<=n;i++)
			cout<<c[i]<<" ";
			cout<<"\n";*/
			for(i=1;i<=n;i++)
			{
				if(b[i]==0||b[i]==i)
				{
					flag1=1;
					break;
				}
			}
			for(i=1;i<=n;i++)
			{
				if(c[i]==0||c[i]==i)
				{
				flag2=1;
				break;
			}
			}
			if(flag1==0)
			{
				for(i=1;i<n;i++)
				cout<<b[i]<<" ";
				cout<<b[n]<<"\n";
			}
			else if(flag2==0)
			{
				for(i=1;i<n;i++)
				cout<<c[i]<<" ";
				cout<<c[n]<<"\n";
			}
			else
			{
				cout<<-1<<"\n";
			}
		}
	}
	return 0;
}
