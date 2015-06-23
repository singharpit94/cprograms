#include<bits/stdc++.h>

#define ll  long long int
#define mod 1000000000

#define gc getchar

using namespace std;


inline ll input() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  ll ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
    
ll hcf(ll x,ll y)
{
	if(y==0)
	return x;
	else
	return hcf(y,x%y);
}
ll ways[2015],dp[2015][2015],a[2015];


int main()
{
  ll t,m,n,i,j,k,sum,l,o,p,w,q;
  t=input();
  while(t--)
  {
  n=input();
  m=input(); 
  ways[0]=1;
  ways[1]=m;
  a[0]=1;
  a[1]=m;
  for(i=2;i<=m;i++)
  a[i]=m+i-1;
  
  for(i=2;i<=m;i++)
  {  k=i;
    ways[i]=1;
  	for(j=1;j<=i;j++)
  	{   if(a[j]==1)
  	    continue;
  	    l=hcf(a[j],k);
  	    a[j]=a[j]/l;
  	    k=k/l;
  	    ways[i]=(ways[i]*a[j])%mod;
  	   
  }
}

  	

	  dp[0][0]=ways[0];     
	  for(i=1;i<=m;i++)
	  	dp[0][i]=(dp[0][i-1]+ways[i])%mod;
	  for(i=0;i<n;i++)
	  dp[i][0]=1;
	  for(i=1;i<n;i++)
	  {
	  	for(j=1;j<=m;j++)
	  	{     
	  		{
	  			p=dp[i-1][j]*ways[j];
	  			if(p>=mod)
	  			p=p%mod;
	  			
			 o=(p +dp[i][j-1]);
			 if(o>=mod)
	  		o=o%mod;
	  		dp[i][j]=o;
	  	}
		  }
	  }
	  
	  printf("%lld\n",dp[n-1][m]);
	  
  }
  return 0;
}

