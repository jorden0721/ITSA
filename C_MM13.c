#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, time, ans = 0;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    time = 60*(h2-h1)+(m2-m1);
    if(time<=120 && time>=30)
        ans = (time/30)*30;
    else if(time>120 && time<=240)
        ans = ((time-120)/30)*40+120;
    else if(time>240)
        ans = ((time-240)/30)*60+280;

    printf("%d\n", ans);
    return 0;
}
