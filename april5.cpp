
#include <stdio.h>
#include <math.h>
#include <limits.h>
long long int maxi(long long int x,long long int y)
{
	
	
	
	
		if(x>y)
		return x;
		else
		return y;
	
}
long long int min(long long int x,long long int y)
{
	if(x<y)
	return x;
	else
	return y;
}

// A utility function to get the middle index from corner indexes.
long long int getMid(long long int s, long long int e) {  return s + (e -s)/2;  }

/*  A recursive function to get the minimum value in a given range of array
    indexes. The following are parameters for this function.

    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
long long int RMQUtil(long long int *st, long long int ss, long long int se, long long int qs,long long  int qe, long long int index)
{
    // If segment of this node is a part of given range, then return the
    // min of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return -100000000000000000;

    // If a part of this segment overlaps with the given range
    long long int mid = getMid(ss, se);
    return maxi(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}

// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
long long int RMQ(long long int *st, long long int n,long long  int qs, long long int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil(st, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
long long int constructSTUtil(long long int arr[], long long int ss, long long int se, long long int *st, long long int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
   long long    int mid = getMid(ss, se);
    st[si] = maxi(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
long long int *constructST(long long int arr[], long long int n)
{
    // Allocate memory for segment tree
    long long int x = (long long int)(ceil(log2(n))); //Height of segment tree
    long long int max_size = 2*(long long int)pow(2, x) - 1; //Maximum size of segment tree
    long long int *st = new long long int[max_size];

    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);

    // Return the constructed segment tree
    return st;
}

// Driver program to test above functions
int main()
{
    
    long long int t ,n,i,j,k,q,arr[100100],l,r,li,ri,lg,rg,val,x1,y1,m,sum;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    
    	
       
       sum=0;

    
    long long int *st = constructST(arr, n);
   
    scanf("%lld %lld %lld",&m,&x1,&y1);
    for(i=0;i<m;i++)
    {
    	lg=min(x1,y1);
    	rg=maxi(x1,y1);
    	sum+=RMQ(st,n,lg,rg);
    	x1=((x1%(n-1))+(7%(n-1)))%(n-1);
    	y1=((y1%n)+(11%n))%n;
    	
	}
	printf("%lld\n",sum);
    return 0;
}
