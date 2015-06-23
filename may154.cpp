#include<bits/stdc++.h>
using namespace std;
void fun(char *x,int y,int a,int b);
int main()
{
	  long long int t,n,k,i,j,m,l,ctr,sum,sum1;
	  char a[100100],b[100100],c;
	  cin>>t;
	  while(t--)
	  {  ctr=1;
	     sum=0;
	     sum1=0;
	  	cin>>n>>k;
	  	
	  	scanf(" %s",a);
	  	
	  	strcpy(b,a);
	  	if(k==1)
	  	{
	  	     
		c='1';
		for(i=0;i<n;i++)
		{
			if(b[i]!=c)
			{
			    sum++;
			    if(b[i]=='1')
			    b[i]='0';
			    else
			    b[i]='1';
			 }	 
			 if(c=='1')
			 c='0';
			 else
			 c='1';
	}
	c='0';
	for(i=0;i<n;i++)
		{
			if(a[i]!=c)
			{
			    sum1++;
			    if(a[i]=='1')
			    a[i]='0';
			    else
			    a[i]='1';
			 }	 
			 if(c=='1')
			 c='0';
			 else
			 c='1';
	}
	if(sum<sum1)
	{
		cout<<sum<<"\n";
		cout<<b<<"\n";
	}
	else
	{
		cout<<sum1<<"\n";
		cout<<a<<"\n";
	}
		  }
		  else
		  {
	
	  	for(i=1;i<n;i++)
	  	{
	  		if(a[i]==a[i-1])
	  		{
	  			ctr++;
			  }
			  else
			  {
			  	sum=sum+(ctr/(k+1));
			  	
			  	fun(a,i-1,ctr,k);
			  	ctr=1;
			  }
		  }
		  sum=sum+(ctr/(k+1));
		  fun(a,n-1,ctr,k);
		  cout<<sum<<"\n";
		  cout<<a<<"\n";
	}
	
}
		  
	  return 0;
}
void fun(char *a,int y,int ctr,int k)
{
	int i,j,l,m,n,x,g,h;
	char c=a[y],d;
	j=y-ctr+1;
	l=k-1;
	if(c=='1')
	d='0';
	else
	d='1';
		m=ctr/(k+1);
		if(m>0)
		{
		
		if(ctr==(k+1))
		{
			a[j+1]=d;
		}
		
	else
	{
			
	a[j+k]=d;
	g=j+(2*k);
	g++;
	m--;
	if(m>0)
	{
	a[y-k]=d;
	m--;}
	if(m>0)
	{   i=g;
	    while(m>0)
		{
			a[i]=d;
			i=i+k+1;
			m--;
			 } 	
	}
}
}
}
	
	
	

