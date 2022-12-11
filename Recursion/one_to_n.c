#include<stdio.h>

void print(int i,int n)
{
    if(i > n) return;
    print(i+1, n);
    printf("%d ",i);
}
void rev(int n)
{
    if(n<1) return;
    rev(n-1);
    printf("%d ",n);
    
}
int summm(int i,int n)
{
    if(i>n) return 0;
    int s=summm(i+1,n);
    return s+i;
}
int array_sum(int arr[],int i, int n)
{
    if(i==n) return 0;
    int s=array_sum(arr ,i+1,n);
    return s+arr[i];
}
int main()
{

    int n;
    scanf("%d",&n);
    print(1,n);
    printf("\n");
    rev(n);
    int sum=summm(1,n);
    printf("\n%d\n",sum);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=array_sum(arr,0,n);
    printf("%d\n",ans);
    return 0;
}