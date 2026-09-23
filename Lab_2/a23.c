#include <stdio.h>
int main()
{
    int e, b, i, p = 1;
    


    printf("Enter The Base Number ");
    scanf("%d", &b);

    printf("Enter The Exponent Number ");
    scanf("%d", &e);

    for(i = 1; i <= e; i++)
    {
        p = p * b;
    }

    printf("%d^%d = %d", b, e, p);

    return 0;


}
