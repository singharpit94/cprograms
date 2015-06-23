#include<bits/stdc++.h>
using namespace std;

struct c{
	char t;
	int f;
};
bool compare( c i, c j)
{
	return j.f<i.f;
}
int main()
{
	long long int t,i,j,k,n,m,a[30],ctr,z,flag;
	char x[100100],g[100100];
	c s[27];
	cin>>t;
	while(t--)
	{  
	   flag=0;
	   
	  for(i=1;i<27;i++)
	{
	    s[i].f=0;
	    s[i].t=96+i;
     }   
	   memset(x,0,sizeof(x)) ;
	   
	   scanf(" %s",g) ;
	    k=strlen(g);
	    
		for(i=0;i<k;i++)
		{
		s[g[i]-96].f++;	
		  } 
		 sort(s+1,s+27,compare);
	//	for(i=1;i<27;i++)
	//	 cout<<s[i].f<<" "<<s[i].t<<" ";
		ctr=0;
		n=1;
		m=2;
		z=0;
		while(z!=k)
		{
			
			if(s[n].f>0&&n<27)
			{
				   if(x[ctr-1]==s[n].t&&ctr>0)
				   {
				   	flag=1;
				   	break;
				   }
				   else
				   {
				   	  x[ctr]=s[n].t;
				   	  ctr++;
				   	  z++;
				   	  s[n].f--;
				   }
				   if(s[m].f<0&&m<27)
				   m++;
				   else
				   
			{
				if(x[ctr-1]==s[m].t&&ctr>0)
				   {
				   	flag=1;
				   	break;
				   }
				   else
				   {
				   	  x[ctr]=s[m].t;
				   	  ctr++;
				   	  z++;
				   	  s[m].f--;
				   }
			}
		
			
			}
			else
			{
				n++;
			}
			
		}
		if(flag==1)
		printf("-1\n");
		else
		
		printf("%s\n",x);
	
	
	}
	return 0;
}
