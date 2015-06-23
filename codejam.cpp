#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	long long int t,i,j,k,s,l,ctr,sum;
	char a[1005];
	ifstream fi;
	ofstream fo;
	fi.open("ar.in",ios::in);
	fi>>t;
	for(i=1;i<=t;i++)
	{   ctr=0;
	sum=0;
	
	
		fi>>s;
		fi.getline(a);
		//cout<<a;
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			k=a[j]-'0';
		     if((ctr>=j))
		     {
		     	ctr+=k;
			 }
			 else
			 {
			 	sum+=j-ctr;
			 	ctr+=sum+k;
			 }
			 
		}
		cout<<"Case #:"<<i<<" "<<sum<<"\n";
	}
	return 0;
}
