//Question Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0/
#include <stdio.h>


void printUnion(int A[], int B[], int N, int M)
{
    int i = 0,j = 0,count=0;
    while(i < N && j < M)
    {
        if(A[i] < B[j])
        {
            count++;
            i++;
        }
        else if(A[i] > B[j])
        {
            count++;
            j++;
        }
        else
        {
            count++;
            j++;
            i++;
        }
    }
    while(i<N)
    {
        count++;
        i++;
    }
    while(j<M)
    {
        count++;
        j++;
    }
    printf("%d\n",count);
}


int main() {
    int T,N,M,i,j;
    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
        scanf("%d %d",&N,&M);
        int A[N],B[M];
        for(j = 0; j < N; j++)
        {
            scanf("%d",&A[j]);
        }
        for(j = 0; j < M; j++)
        {
            scanf("%d",&B[j]);
        }
        printUnion(A,B,N,M);
    }
	return 0;
}
