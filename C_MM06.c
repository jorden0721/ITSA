#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    double ans;
    ans = a*1.6;
    ans = (int)(ans*10+0.5)/10.0;
    printf("%.1lf\n", ans);

    return 0;
}
