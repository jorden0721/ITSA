#include <stdio.h>

int main()
{
    double c, ans;
    scanf("%lf", &c);

    ans = c*9/5+32;
    ans = (int)(ans*10+0.5)/10.0;
    printf("%.1lf\n", ans);

    return 0;
}
