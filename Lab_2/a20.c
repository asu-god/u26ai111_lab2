#include <stdio.h>
int main()
{
    float a, b;
    char ch;

    printf("Enter The Numbers\n");
    scanf("%f%f", &a,&b);


    printf("Enter THe Operator ");
    scanf(" %c", &ch);

    switch(ch)
    {
        
        case '+' :
        printf("%.2f", a);
        printf("%c", ch);
        printf("%.2f", b);
        printf(" = %.2f", a + b);
        break;



        case '-' :
        printf("%.2f", a);
        printf("%c", ch);
        printf("%.2f", b);
        printf(" = %.2f", a - b);
        break;



        case '*' :
        printf("%.2f", a);
        printf("%c", ch);
        printf("%.2f", b);
        printf(" = %.2f", a * b);
        break;



        case '/' :
        if(b != 0)
        {
        printf("%.2f", a);
        printf("%c", ch);
        printf("%.2f", b);
        printf(" = %.2f", a / b);
        }
        else
        printf("Divide By 0 IS Not Allowed");
        break;

        default :
        printf("Invalid Operator Selected");


    }


    return 0;

}