#include<bits/stdc++.h>

#define ll  long long int
#define mod 1000003
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
 ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%mod;
  if(b%2) r = (r*a)%mod;
  return r;
}

ll a[1000008],ia[1000008];


int main()
{
  ll r,a1,b,n,m,i,j,k,l,t,n1,sum,k1,l1,r1,N,K,flag;
  a[0]=1;
  ia[0]=1;
  for(i=1;i<1000008;i++)
  
  {    
  
        l=i*a[i-1];
     if(l>=mod)
       a[i]=l%mod;
       else
       a[i]=l;
       ia[i]=pw(a[i],mod-2);
  }
  
  t=input();
  while(t--)
  {  sum=1;
  flag=0;
  	n=input();
  	l=input();
  	r=input();
  	n1=n;
  	n=n+r-l+1;
  	//cout<<n<<"\n";
  	k=r-l+1;
  	k1=k;
  	//cout<<k<<"\n";
  	while(n)
  	{    
  		N=n%mod;
  		//cout<<N<<"\n";
  	
  		
  			
  			K=k%mod;
  			
		  if(N<K)
		  {
		  	sum=0;
		  	break;
		  }
		  sum*=(a[N]*ia[N-K]*ia[K])%mod;
	
		  
		  
		  
		  
		  //sum=(sum)%mod;
		  //cout<<sum<<"\n";
		  
		  
		  
		  //cout<<sum<<"\n";
		  n=n/mod;
		  k=k/mod;
	  }
	  
	  if(sum==0)
	  {
	  	k1=mod-1;
		  
		  printf("%lld\n",k1);
		  
	  }
	  
	  else
	  {
	  k1=sum-1;
  	printf("%lld\n",k1);
  }
	   
	  
}
 
  return 0;
}
