#include<stdio.h>
void sort(int x,int *y)
{
    int temp;
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        if (*(y + j) < *(y + i)) {

                temp= *(y + i);
                *(y + i) = *(y + j);
                *(y + j) = temp;
            }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(n,arr);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    int k;
    scanf("%d",&k);
    printf("%dth largest element = %d\n",k,arr[n-k]);
    printf("%dth smallest element = %d\n",k,arr[k-1]);

    return 0;
}
