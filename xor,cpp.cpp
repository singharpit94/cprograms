#include<bits/stdc++.h>
using namespace std;
int a[1000000+2];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c=0,d=0,i,v;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<1000001;i++)
		a[i]=0;
		for(i=0;i<n;i++)
		{
		scanf("%d",&v);
		a[v]=1;
	    }
		for(i=0;i<1000001;i++)
		{
		if(a[i]==1)
		{
			c++;
			i++;
		}	
		}
		for(i=0;i<1000001;i++)
		{
			if( i!=999998 && a[i] && a[i+1] && a[i+2])
			{
				d++;
				i+=2;
			}
			else if(a[i])
			{
			d++;
			i++;
		    }
		}
		printf("%d %d\n",d,c);
	}
	return 0;
}
