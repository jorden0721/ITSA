#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int tmp;
    if(b>a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = b;i >= 1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
