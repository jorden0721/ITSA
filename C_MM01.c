#include <stdio.h>

int main()
{
    int a, b, c;
    double ans=0;

    scanf("%d %d %d", &a, &b, &c);

    ans = (a+b)*c;
    ans /= 2;

    printf("Trapezoid area:%.1f\n", ans);

    return 0;
}
