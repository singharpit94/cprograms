#include<stdio.h>
#define mod 1000003
long long int power(long long int base,long long  int expo)
{
    if(expo==0)
    return 1;

    if(expo==1)
    return base;

        int t;
        t= power(base,expo/2);
        t= (((t%mod)*(t%mod))%mod);
        t= ((t)*(power(base,expo%2)%mod))%mod;
        return t;
}
/*
int main()
{
    int x = 2;
    int y = 3;

    printf("%d", power(x, y));
    getchar();
    return 0;
}
*/
long long int fact[1000009],factinv[1000009],p=1,q=1,r,l,i;
int main()
{
   p=1000005;
   q=1000006;
   i=1000007;
   r=601080389;
    l=r%7;
    printf("%ld\n",l);
    return 0;
}

