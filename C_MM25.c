#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = n;i > 0;i--)
    {
        if(i%3 == 0)
            sum += i;
    }
    printf("%d\n", sum);

    return 0;
}
