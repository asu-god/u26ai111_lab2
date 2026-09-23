#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Your NUmbers\n");
    scanf("%d%d%d", &a,&b,&c);

    if(a >= b && a >= c)
    printf("The Biggest Number Is %d", a);

    if(b >= a && b >= c)
    printf("The Biggest Number Is %d", b);

    if(c >= b && c >= a)
    printf("The Biggest Number Is %d", c);


    return 0;
}