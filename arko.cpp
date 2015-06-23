#include <bits/stdc++.h>
using namespace std;

struct cvote{
            int index;
            int val;
        };

bool myfunc(struct cvote a, struct cvote b)
        {
            if(a.val>b.val)
                return 1;
            else
                return 0;
        }
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        struct cvote vote[n];
        int total=0,f=0;
        for(i=0;i<n;i++)
            {
                cin>>vote[i].val;
                vote[i].index=i;
                total+=vote[i].val;
                if(vote[i].val==n)
                    f=1;
            }
        if(total!=n||f==1)
            {
                cout<<"-1\n";
                continue;
            }
        sort(vote,vote+n,myfunc);
        int pattern[n];int j;
        for(i=0;i<n;i++)
            pattern[i]=0;

        int p=1,q;
        for(i=0;i<n;i++)
        {
            q=vote[i].val;
            while(q!=0)
            {
                pattern[vote[p].index]=vote[i].index+1;
                p++;
                if(p==n)
                    p=0;
                q--;
            }
        }
        for(i=0;i<n;i++)
            cout<<pattern[i]<<" ";
        cout<<"\n";
    }
}
