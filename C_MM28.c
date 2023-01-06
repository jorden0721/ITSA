#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n<35)
    {
        printf("\n");
        return 0;
    }
    printf("35");
    for(int i = 70;i <= n;i+=35)
        printf(" %d", i);
    printf("\n");

    return 0;
}
