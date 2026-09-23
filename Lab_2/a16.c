#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Your Numbers\n");
    scanf("%d%d%d", &a,&b,&c);

    if(a >= b)
{
    if(a >= c)
    printf("The Biggest Number Is %d", a);

    else
    printf("The Biggest Number Is %d", c);


}


else if(c >= a)
{
    if(c >= b)
    printf("The Biggest Number Is %d", c);

    else
    printf("The Biggest Number Is %d", b);




}


if (a >= c)
{
    if(b > a)
    printf("The Biggest Number Is %d", b);


}


return 0;


}