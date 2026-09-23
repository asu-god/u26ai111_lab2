#include <stdio.h>
int main()
{
    int a, b;
    char ch;

    printf("Enter The Numbers\n");
    scanf("%d%d", &a,&b);


    printf("Enter THe Operator ");
    scanf(" %c", &ch);

    switch(ch)
    {
        
        case '+' :
        printf("%d", a);
        printf("%c", ch);
        printf("%d", b);
        printf(" = %d", a + b);
        break;



        case '-' :
        printf("%d", a);
        printf("%c", ch);
        printf("%d", b);
        printf(" = %d", a - b);
        break;



        case '*' :
        printf("%d", a);
        printf("%c", ch);
        printf("%d", b);
        printf(" = %d", a * b);
        break;



        case '/' :
        if(b != 0)
        {
        printf("%d", a);
        printf("%c", ch);
        printf("%d", b);
        printf(" = %d", a / b);
        }
        else
        printf("Divide By 0 IS Not Allowed");
        break;



        case '%' :
        if(b != 0)
        {
        printf("%d", a);
        printf("%c", ch);
        printf("%d", b);
        printf(" = %d", a % b);
        }
        else
        printf("Divide By 0 IS Not Allowed");
        break;



        default :
        printf("Invalid Operator Selected");


    }


    return 0;

}