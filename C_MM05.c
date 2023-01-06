#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    a *= a;
    a = (int)(a*10+0.5)/10.0;
    printf("%.1lf\n", a);

    return 0;
}
