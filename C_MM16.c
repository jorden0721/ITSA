#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    double tmp;
    tmp = x*x+y*y;
    if(tmp <= 20000)
        printf("inside\n");
    else
        printf("outside\n");

    return 0;
}
