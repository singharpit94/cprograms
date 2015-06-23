#include<bits/stdc++.h>
using namespace std;
int main()
{
   double t,T1,T2,t1,t2,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10,x11,y11,x,y;
	double area,a1,a2,ans,area1,area2,area3,area4,area5,area6,area7,area8;
	cin>>t;
	while(t--)
	{    a1=0;a2=0;ans=0;
		scanf("%lf %lf %lf %lf",&T1,&T2,&t1,&t2);
		if(t1==0&&t2==0)
		ans=0;
		
		else
		{
			area=T1*T2;
			 x1=T2-t1;
		      y1=T1+t1;
			  if((x1<=T1)&&(x1>=0))
			  {
			  	y2=T1-t2;
			  	x2=t2+T2;
			  	 if((x2<=T1)&&(x2>=0))
				  {
				  	area2;
				  	a1=(x1*x1)/2;
				  	a2=((x2+t2)*T2)/2;
                    ans=(a2-a1)/area;
				  	
				  }
			  	else if((y2<=T2)&&(y2>=0))
			  	{
			  		area1;
			  		a1=(x1*x1)/2;
			  		a2=(y2*y2)/2;
			  		ans=(area-(a1+a2))/area;
			  		
				}
				  
				  else{
				  	area3;
				  	a1=(x1*x1)/2;
				  	a2=0;
				  		ans=(area-(a1))/area;
				      }
			 }
			else if((y1<=T2)&&(y1>=0))
			 {
			 	y3=T1-t2;
			 	if((y3<=T2)&&(y3>=0))
			 	{
			 		area4;
			 		a2=(y3*y3)/2;
			 		a1=((y1+t1)*T1)/2;
			 		ans=(a1-a2)/area;
				 }
				 else
				 {
				 	area5;
				    a1=((y1+t1)*T1)/2;
				  	a2=0.0;
                    ans=(a1)/area;
				 
				 	
				 	
				 }
			 }
			 else
			 {
			 	y4=T1-t2;
			 	x4=t2+T2;
			 	  if((x4<=T1)&&(x4>=0))
				 {
				 	area7;
				 	a1=0.0;
				 	a2=((T1-t2+T1-x4)*T2)/2;
				 	ans=(area-(a2))/area;
				 }
			 	else if((y4<=T2)&&(y4>=0))
			 	{
			 		area6;
			 		a1=0;
			 		a2=(y4*y4)/2;
			 		ans=(area-(a2))/area;
				 }
				
				 else
				 {
				 	ans=1.0;
				 }
			 }
			  
			 
			}
			printf("%.6lf\n",ans);	
		
}
	return 0;
}
