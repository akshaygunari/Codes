//Question Link: https://www.geeksforgeeks.org/longest-span-sum-two-binary-arrays/
#include <stdio.h>

int findMaxLen(int a[], int b[], int n)
{
    int i,j,sum1,sum2,maxlen=0,len;
    for(i = 0; i < n; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for(j = i; j < n; j++)
        {
            sum1 = sum1 + a[j];
            sum2 = sum2 + b[j];
            if(sum1 == sum2)
            {
                maxlen = j - i + 1>maxlen?j - i + 1:maxlen;
            }
        }
    }
    return maxlen;
}

int main() {
    int t;
    int i,j,N, maxlen = 0;
    scanf("%d",&t);
    for(i = 0; i<t; i++)
    {
        scanf("%d", &N);
        int a1[N],a2[N];
        for(j = 0; j < N; j++)
        {
            scanf("%d",&a1[j]);
        }
        for(j = 0; j <N; j++)
        {
            scanf("%d",&a2[j]);
        }
        maxlen = findMaxLen(a1,a2,N);
        printf("%d\n",maxlen);
    }
	return 0;
}
