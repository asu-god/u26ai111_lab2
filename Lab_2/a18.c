#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter Your Numbers\n");
    scanf("%d%d%d", &a,&b,&c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("The Maximum Number Is %d", max);



    return 0;

}