#include <stdio.h>
int main()
{
    int a, i;
    int es = 0, os = 0;

    printf("Enter The Number Till You Want Sum Of ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
            es = es + i;
        else
            os = os + i;
    }

    printf("Sum of even numbers = %d\n", os);
    printf("Sum of odd numbers = %d\n", os);

    return 0;
}