#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,long long int> mymap;
	long long int t,i,j,k;
	string x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		 pair<map<string ,long long int>, bool> ret;
  ret = mymap.insert ( pair<string ,long long int> (x,1) );
  if (ret.second==false) {
    
    i=ret.second;
    mymap.insert ( pair<string ,int>(x,i+1) );
    
  }
  
  
  std::map<string ,long long int>::iterator it = mymap.begin();
   for (it=mymap.begin(); it!=mymap.end(); ++it)
    cout << it->first <<" " << it->second << '\n';
	}
	return 0;
	
}
