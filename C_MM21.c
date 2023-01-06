#include <stdio.h>

int main()
{
    long long int n, ans = 1;
    scanf("%d", &n);

    for(int i = n;i>0;i--)
    {
        ans *= i;
    }

    printf("%lld\n", ans);
    return 0;
}
