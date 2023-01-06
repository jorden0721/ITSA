#include <stdio.h>

int main()
{
    int a, b;
    double ans=0;

    scanf("%d %d", &a, &b);

    ans = a*b;
    ans /= 2;

    printf("%.1f\n", ans);

    return 0;
}
