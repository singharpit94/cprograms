#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    int w=0;
    char c;
    int flag =0;
    int flag2=0;
    ofstream f;
    ifstream g;
    f.open("text2.txt");
    g.open("text1.txt");
    g>>noskipws>>c;
    while(g)
    {
        if(c=='{')
        {
            f<<setw(w)<<'{';
            w=w+5;
            f<<setw(w);
        }
        else if(c=='}')
        {
            w=w-5;
            f<<setw(w)<<'}';
        }
        else if(c=='(')
        {
            flag=1;
            f<<'(';
        }
        else if(c==';'&&flag==0)
        {
           f<<';';
        }
        else if(c==')')
        {
            flag=0;
            f<<')';
        }
        else if(c=='\n')
        {
           f<<endl;
           f<<setw(w);
        }
        else
        f<<c;
        g>>noskipws>>c;
    }
    g.close();
    f.close();
    return 0;
}
