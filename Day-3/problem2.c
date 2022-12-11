#include<stdio.h>

int summ_of_array(int arr[],int n,int i)
{
    if(i==n) return 0;
    int last_digit=arr[i]%10;
    int sum=summ_of_array(arr,n,i+1);
    return sum+last_digit;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=summ_of_array(arr,n,0);
    printf("%d\n",ans);

    return 0;
}