#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    double money = 0;
    if(a<=60)
        money = a*b;
    else if(a>60 && a<=120)
        money = 60*b+(a-60)*b*1.33;
    else
        money = 60*b+60*b*1.33+(a-120)*b*1.66;

    money = (int)(money*10+0.5)/10.0;
    printf("%.1lf\n", money);

    return 0;
}
