#include<stdio.h>


int summm(int i,int n)
{
    if(i>n) return 0;
    int s=summm(i+1,n);
    return s+i;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum=summm(1,n);
    printf("%d\n",sum);
    return 0;
}