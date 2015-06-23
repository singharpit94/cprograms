#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int coef=1,sieve[6]={0},p;
	for(p=2;p<=5;p++)
	{
		if(sieve[p]!=0)
		{
			for(int i=p*p;i<=5;i=i+p)
			sieve[i]=1;
		}
	
	for (int pow=p;pow<=5;pow*=p){
		int cnt=5/pow-2/pow-(3)/pow;
		for(int j=0;j<cnt;j++)
		{
			coef*=p;
			coef%=1000000000;
		}
	}

}
cout<<coef;
return 0;
}

	

