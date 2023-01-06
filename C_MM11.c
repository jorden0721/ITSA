#include <stdio.h>

int main()
{
    int a, ans;
    scanf("%d", &a);

    ans = a/10;
    a %= 10;
    printf("NT10=%d\n", ans);

    ans = a/5;
    a %= 5;
    printf("NT5=%d\n", ans);

    printf("NT1=%d\n", a);
}
