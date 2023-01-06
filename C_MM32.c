#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int h, t, d, sum = 0;
    h = n/100;
    t = (n%100)/10;
    d = n%10;

    sum = h*h*h+t*t*t+d*d*d;
    if(sum == n)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
