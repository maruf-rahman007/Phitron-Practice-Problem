#include <stdio.h>
int main()
{
    int a, b, c;
    int *p, *q, *r;
    scanf("%d %d %d", &a, &b, &c);
    p = &a;
    q = &b;
    r = &c;
    printf("%d\n", *p + *q + *r);
}
