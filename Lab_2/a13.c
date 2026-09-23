#include<stdio.h>
int main()
{
    int a;


    printf("Enter Any Number ");
    scanf("%d", &a);

    if (a%2 == 0)
    printf("Number Is Even");

    if (a%2 != 0)
    printf("Number Is Odd");

   

    return 0;


}