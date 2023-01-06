#include <stdio.h>

int main()
{
    int a, i, j, flag = 1;
    scanf("%d", &a);

    for(i = a-1;i >= 2;i--)
    {
        flag = 1;
        for(j = 2;j < i;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
