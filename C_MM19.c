#include <stdio.h>

int main()
{
    int a;
    double sum = 0;
    scanf("%d", &a);

    if(a<=800)
        sum = a*0.9;
    else if(a>800 && a<1500)
        sum = a*0.9*0.9;
    else
        sum = a*0.9*0.79;

    sum = (int)(sum*10+0.5)/10.0;
    printf("%.1lf\n", sum);

    return 0;
}
