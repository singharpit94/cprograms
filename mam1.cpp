#include <iostream>
#include <cstdio>
#include <limits.h>
using namespace std;
void putInFile(int **a,int n)
{
    FILE *fp;
    fp=fopen("mam2.txt","w");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==INT_MAX)
            fprintf(fp,"%s ","-");
            else
            fprintf(fp,"%d ",a[i][j]);

        }
        fprintf(fp,"%s\n","");
    }
    fprintf(fp,"------------------------------------------\n");
    fclose(fp);

}
void display(int **a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==INT_MAX)
            cout<<"- ";
            else
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
}
void getPath(int **next,int n,int u,int v)
{
    if(next[u][v]==-1)
    return ;
    int *path =new int[n];
    int k=0;
    int u2=u;
    path[k]=u;
    while(u!=v)
    {
        u=next[u][v];
        path[++k]=u;
    }
    FILE *fp=fopen("mam2.txt","a");
    fprintf(fp,"the path from vertex %d to vertex %d is\n",u2,v);
    for(int i=0;i<=k;i++)
    fprintf(fp,"%d ",path[i]);
    fprintf(fp,"\n");
    fclose(fp);
}
void floydWarshall(int **graph,int n,int callTime)
{
    int i,j,k;
    int **dist =new int*[n];
    for(i=0;i<n;i++)
    dist[i]=new int[n];


    for(i=0;i<n;i++)//initialise dist matrix same as the graph matrix
    for(j=0;j<n;j++)
    dist[i][j]=graph[i][j];

    int **next=new int*[n];
    for(i=0;i<n;i++)
    next[i]=new int[n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    next[i][j]=-1;


    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(dist[i][j]!=INT_MAX)
    next[i][j]=j;


    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX && (dist[i][k] + dist[k][j] <dist[i][j]))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    next[i][j]=next[i][k];
                }
            }
        }
    }


    if(callTime==1)
    {
        display(dist,n);
        putInFile(dist,n);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            getPath(next,n,i,j);
        }
    }
}

int main()
{
    int n,i,j;
    FILE *fp=fopen("mam.txt","r");
    fscanf(fp,"%d\n",&n);
    int **graph=new int*[n];
    for(i=0;i<n;i++)
    graph[i]=new int[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                fscanf(fp,"%d",&graph[i][j]);
                if(graph[i][j]==-99)
                graph[i][j]=INT_MAX;
        }

    }
    fclose(fp);
    floydWarshall(graph,n,1);


    fp=fopen("mam2.txt","a");
    fprintf(fp,"----------------------------------------------------\n");
    fclose(fp);
    int **graph2=new int*[n];
    for(i=0;i<n;i++)
    graph2[i]=new int[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            graph2[i][j]=graph[j][i];
        }
    }
    floydWarshall(graph2,n,2);

    return 0;
}
