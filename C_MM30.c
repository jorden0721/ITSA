#include <stdio.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);

    for(int i = 2;i < n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
