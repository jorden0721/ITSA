#include <stdio.h>

int main()
{
    int a, b, tmp;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, (a+b));
    printf("%d*%d=%d\n", a, b, (a*b));
    printf("%d-%d=%d\n", a, b, (a-b));
    tmp = a%b;
    if(a<0)
        printf("%d/%d=%d...%d\n", a, b, a/b-1, tmp+b);
    else
        printf("%d/%d=%d...%d\n", a, b, a/b, tmp);
    return 0;
}
