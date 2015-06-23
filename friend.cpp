#include<bits/stdc++.h>

using namespace std;
class arpit{
	char *str;
	public:
		arpit(char *s)
		{
			str=s;
			cout<<str;
		}
		~arpit()
		{
			//delete str;
		}
};
int main()
{
	arpit a("abs");
	return 0;
}
