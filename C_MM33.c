#include <stdio.h>

int main()
{
    int n, i, j, sum;
    scanf("%d", &n);

    for(i = 6;i <= n;i+=2)
    {
        sum = 0;
        for(j = 1;j < i;j++)
        {
            if(i%j==0)
                sum += j;
        }
        if(sum == i)
        {
            if(i == 6)
                printf("%d", i);
            else
                printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
