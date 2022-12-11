#include<stdio.h>

int power(int n,int m)
{
    if(m==0) return 1;
    m--;
    int powww=power(n,m);
    return powww*n;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ans=power(n,m);
    printf("%d\n",ans);
    return 0;
}