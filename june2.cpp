#include<bits/stdc++.h>
using namespace std;
struct poly{
   long long int area;
   long long int index;
   long long int value;
};
bool compare(poly a,poly b)
{
  if(a.area>b.area)
  return true;
  else
  return false;
}
bool compare1(poly a,poly b)
{
    if(a.index<b.index)
    return true;
    else
    false;
}
long long int xi[100100],yi[100100];
int main()
{
     long long int t,i,j,k,n,m,l,x1,y1,x2,y2,x3,y3,area1,area2,x,y,x0,y0,ctr;
     struct poly a[100100];
     cin>>t;
     while(t--)
     {    for(i=0;i<100100;i++)
     {
          a[i].area=0;
          a[i].index=i;
          a[i].value=0;
     }
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>m;

            for(j=0;j<m;j++)
            {
                      cin>>x>>y;
                      xi[j]=x;
                      yi[j]=y;

               }
               area1 = 0;
                j = m-1;
  for (k=0; k<m; k++)
    { area1= area1 +  (xi[j]+xi[k]) * (yi[j]-yi[k]);
      j = k;
    }
    a[i].area=abs(area1/2);

        }
        sort(a,a+n,compare);
        ctr=n-1;
        for(i=0;i<n;i++)
        {
           a[i].value=ctr;
           ctr--;
        }
        sort(a,a+n,compare1);
        for(i=0;i<n-1;i++)
        cout<<a[i].value<<" ";
        cout<<a[n-1].value<<"\n";

      }

      return 0;

}
