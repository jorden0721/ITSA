#include <stdio.h>

int main()
{
    int a=1,i;
    scanf("%d", &i);

    if(i>31)
        printf("Value of more than 31\n");
    else
        printf("%lld\n", a<<i);

    return 0;
}
