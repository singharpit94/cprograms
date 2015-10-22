#include<bits/stdc++.h>
using namespace std;
int main()

{
     long long int t,n,i,j,k,a[100100],ctr,sum;
     cin>>t;
     while(t--)
     {
      cin>>n;
      for(i=0;i<n;i++)
      cin>>a[i];
      sum=a[0];
      for(i=1;i<n;i++)
      {
          if(a[i]>a[i-1])

          {
              sum+=a[i]-a[i-1];
          }
      }
      cout<<sum<<"\n";
     }
     return 0;
}
