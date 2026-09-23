#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Any Character ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    printf("The Given Character Is A UpperCase Letter");

    else if (ch >= 'a' && ch <= 'z')
    printf("The Given Character Is A LowerCase Letter");

    else if (ch >= '0' && ch <= '9')
    printf("The Given Character Is A Digit");

    else
    printf("The Given Character Is A Special Symbol");
    

    return 0;
}