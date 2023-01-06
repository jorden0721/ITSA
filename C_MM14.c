#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int day, hour, minute, second;
    day = a/86400;
    a %= 86400;
    hour = a/3600;
    a %= 3600;
    minute = a/60;
    second = a%60;
    printf("%d days\n", day);
    printf("%d hours\n", hour);
    printf("%d minutes\n", minute);
    printf("%d seconds\n", second);

    return 0;

}
