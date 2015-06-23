#include<bits/stdc++.h>

#define ll  long long int
#define mod 1000000007
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
int main()
{
	long long int t,n,i,j,k,a[100100],sum1,sum2,k1,k2,result;
	cin>>t;
	while(t--)
	{    sum1=0;
	     sum2=0;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		k1=n-1;
		k2=n-1;
		for(i=0;i<n-1;i++)
		{
			j=(pw(2,k1)-1);
			k=((a[i]*j)%mod);
			sum1=((sum1+k)%mod);
			k1--;
		}
		for(i=n-1;i>0;i--)
		{
			j=(pw(2,k2)-1);
			k=((a[i]*j)%mod);
			sum2=((sum2+k)%mod);
			k2--;
		}
		result=((sum2-sum1+mod)%mod);
		cout<<result<<"\n";
	}
	return 0;
}
