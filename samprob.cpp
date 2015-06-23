#include<bits/stdc++.h>
using namespace std;

int main()
{
    double T1,T2,t1,t2,x1,x2,y1,y2,x3,x4,y3,y4,tot_area,a1,a2,prob;
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&T1,&T2,&t1,&t2);
        if(t1==0 && t2==0)
            prob=0.0;

        else
        {
            tot_area=T1*T2;
            x1=T2-t1;
            y1=T1+t1;
            if(x1>=0 && x1<=T1)
            {
                x3=T2+t2;
                y3=T1-t2;
                if(x3>=0 && x3<=T1)
                {
                    a1=(x1*x1)/2;
                    a2=((x3+t2)*T2)/2;
                    prob=(a2-a1)/tot_area;
                }
                else if(y3>=0 && y3<=T2)
                {
                    a1=(x1*x1)/2;
                    a2=(y3*y3)/2;
                    prob=(tot_area-(a1+a2))/tot_area;
                }
                else
                {
                    a1=(x1*x1)/2;
                    prob=(tot_area-(a1))/tot_area;
                }
            }
            else if(y1>=0 && y1<=T2)
            {
                 y3=T1-t2;
                 if(y3>=0 && y3<=T2)
                 {
                    a1=((y1+t1)*T1)/2;
                    a2=(y3*y3)/2;
                    prob=(a1-a2)/tot_area;
                 }
                 else
                 {
                    a1=((y1+t1)*T1)/2;
                    prob=(a1)/tot_area;
                 }
            }
            else
            {
                x3=T2+t2;
                y3=T1-t2;
                if(x3>=0 && x3<=T1)
                {
                   a2=((T1-x3+T1-t2)*T2)/2;
                   prob=(tot_area-a2)/tot_area;
                }
                else if(y3>=0 && y3<=T2)
                {
                    a2=(y3*y3)/2;
                    prob=(tot_area-a2)/tot_area;
                }
                else
                {
                    prob=1.0;
                }
            }

        }

         printf("%.6lf\n",prob);
    }
    return 0;
}
