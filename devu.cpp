#include<bits/stdc++.h>
using namespace std;


     long long int t,ty,i,j,k,l,m,n,o,p,s1,s2,min1,min2,sum,a[100100],b[100100],ctrb,ctrg;
     char c[100010],x,y,z,c1[100010];






int main()
{





    cin>>t;

    while(t--)
    {
       cin>>ty;
        m=0;
        n=0;
        s1=0;
        s2=0;
        sum=0;
       scanf(" %s",c);
       l=strlen(c);
       strcpy(c1,c);
       for(i=0;i<l;i++)
       {
          if(c[i]=='B')
          {
              a[m]=i;
              m++;
          }
          else
          {
            b[n]=i;
            n++;
          }
       }

     if((m-n)>1)
     cout<<"-1\n";
     else
     {
         if(m>n)
         {       ctrg=0;
                  ctrb=0;
                for(i=0;i<l;i++)
                {
                	if(i%2==0)
                	{
                		if(c[i]!='B')
                		{
                			for(j=ctrb;j<l;j++)
                			{
                				if(c[j]=='B')
                				{
                					c[j]='G';
                					c[i]='B';
                					sum=sum+abs(j-i);
                					ctrb=j+1;
                					break;
								}
							}
						}
						
					}
					else
					{
						if(c[i]!='G')
						{
							for(j=ctrg;j<l;j++)
							{
								if(c[j]=='G')
								{
									c[j]='B';
									c[i]='G';
									sum+=abs(j-i);
									ctrg=j+1;
									break;
								}
							}
						}
					}
				}
				cout<<sum<<"\n";
         }
         else if(n>m)
         {   ctrg=0;
             ctrb=0;
               for(i=0;i<l;i++)
           {
			            if(i%2==0)
            {
            	if(c[i]!='G')
						{
							for(j=ctrg;j<l;j++)
							{
								if(c[j]=='G')
								{
									c[j]='B';
									c[i]='G';
									sum+=abs(j-i);
									ctrg=j+1;
									break;
								}
							}
						}
			}
			else
			{
				if(c[i]!='B')
				{
						for(j=ctrb;j<l;j++)
                			{
                				if(c[j]=='B')
                				{
                					c[j]='G';
                					c[i]='B';
                					sum=sum+abs(j-i);
                					ctrb=j+1;
                					break;
								}
							}
				}
			}
		}
		   cout<<sum<<"\n";
         }
         else
         {
               //case 1
              {
              	 ctrg=0;
                  ctrb=0;
                for(i=0;i<l;i++)
                {
                	if(i%2==0)
                	{
                		if(c[i]!='B')
                		{
                			for(j=ctrb;j<l;j++)
                			{
                				if(c[j]=='B')
                				{
                					c[j]='G';
                					c[i]='B';
                					s1=1+abs(j-i);
                					ctrb=j+1;
                					break;
								}
							}
						}
						
					}
					else
					{
						if(c[i]!='G')
						{
							for(j=ctrg;j<l;j++)
							{
								if(c[j]=='G')
								{
									c[j]='B';
									c[i]='G';
									s1+=abs(j-i);
									ctrg=j+1;
									break;
								}
							}
						}
					}
				}
			  }
			  //case 2
			  {
			               ctrg=0;
             ctrb=0;
               for(i=0;i<l;i++)
               {
			   
            if(i%2==0)
            {
            	if(c1[i]!='G')
						{
							for(j=ctrg;j<l;j++)
							{
								if(c1[j]=='G')
								{
									c1[j]='B';
									c1[i]='G';
									s2+=abs(j-i);
									ctrg=j+1;
									break;
								}
							}
						}
			}
			else
			{
				if(c1[i]!='B')
				{
						for(j=ctrb;j<l;j++)
                			{
                				if(c1[j]=='B')
                				{
                					c1[j]='G';
                					c1[i]='B';
                					s2=s2+abs(j-i);
                					ctrb=j+1;
                					break;
								}
							}
				}
			}	
			  
			  }
		}
			  if(s1<s2)
			  cout<<s1<<"\n";
			  else
			  cout<<s2<<"\n";


         }

     }

     }
     return 0;
}
