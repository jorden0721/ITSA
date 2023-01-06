#include <stdio.h>

int main()
{
    int a, b, tmp, sum = 0;
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = a;i <= b;i++)
        sum += i;

    printf("%d\n", sum);

    return 0;
}
