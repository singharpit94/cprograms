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
   return  false;
}
  struct poly a[100100];
int main()
{
     long long int t,i,j,k,n,m,l,x1,y1,x2,y2,x3,y3,area1,area2,x,y,x0,y0,ctr;
   
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
            area1=0;
            for(j=0;j<m;j++)
            {
                      cin>>x>>y;
                      if(j==0)
                      {
                      	x0=x;
                      	y0=y;
                      	x1=x;
                      	y1=y;
					  }
					  else if(j>0)
					  {
					  	area1+=((y*x1)-(x*y1));
					  	x1=x;
					  	y1=y;
					  }
					  

               }
               area1+=((y0*x)-(y*x0));
               
    a[i].area=abs(area1/2);

        }
        /*for(i=0;i<n;i++)
        cout<<a[i].area<<" "<<a[i].index;
        cout<<"\n";*/
        sort(a,a+n,compare);
        
        ctr=n-1;
        for(i=0;i<n;i++)
        {
           a[i].value=ctr;
           ctr--;
        }
        /* for(i=0;i<n;i++)
        cout<<a[i].area<<" "<<a[i].index<<" "<<a[i].value;
        cout<<"\n";*/
        sort(a,a+n,compare1);
        /* for(i=0;i<n;i++)
        cout<<a[i].area<<" "<<a[i].index<<" "<<a[i].value;
        cout<<"\n";*/
        for(i=0;i<n-1;i++)
        cout<<a[i].value<<" ";
        cout<<a[n-1].value<<"\n";

      }

      return 0;

}
