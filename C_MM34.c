#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 1;i <= n;i++)
    {
        if(n%i==0)
        {
            if(i==1)
                printf("%d", i);
            else
                printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
