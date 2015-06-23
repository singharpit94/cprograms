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
 ll pw(ll a, ll b,ll m){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%m;
  if(b%2) r = (r*a)%m;
  return r;
}
int main()
{
	
}
