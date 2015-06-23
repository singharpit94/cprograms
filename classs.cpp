#include<bits/stdc++.h>
using namespace std;
class a{
	int x;
	public:
	 a()
	 {
	 	cout<<"Arpit\n";
	 	x=0;
	 }
	 int fun(int y)const;
};
int a::fun(int y)const
{
	y++;
	
}
int main()
{
	a t;
	t.fun(5);

	return 0;
}
