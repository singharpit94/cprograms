#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
int **mat1,**mat2,**mat3;

int main()
{

   int i,j,k,n,m,p,q,maxi=0;
   cout<<"Enter order of matrix 1\n";
   cin>>m>>n;
    mat1=new int*[m];
     for(i=0;i<m;i++)
     {
     	mat1[i]=new int[n];
     }
     cout<<"Enter elements of matrix 1\n";
     for(i=0;i<m;i++)
     {
           for(j=0;j<n;j++)
           cin>>mat1[i][j];
    }
    for(i=0;i<m;i++)
    {    
        sort(mat1[i],mat1[i]+n);
    	cout<<"The top five of Department "<<i+1<<"\n";
    	{
    		cout<<" Rank 1  "<<mat1[i][n-1]<<"\n";
    		cout<<" Rank 2  "<<mat1[i][n-2]<<"\n";
    		cout<<" Rank 3  "<<mat1[i][n-3]<<"\n";
    		cout<<" Rank 4  "<<mat1[i][n-4]<<"\n";
    		cout<<" Rank 5  "<<mat1[i][n-5]<<"\n";
    	}
    }
    return 0;

}
    
