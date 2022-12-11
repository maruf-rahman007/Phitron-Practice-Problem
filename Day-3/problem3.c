#include<stdio.h>

void print(int i,int n)
{
    if(i > n) return;
    printf("%d ",i);
    print(i+1, n);
}

int main()
{

    int n;
    scanf("%d",&n);
    print(1,n);
    return 0;
}