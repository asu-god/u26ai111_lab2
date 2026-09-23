#include <Stdio.h>
int main()
{
    char ch;
    printf("Enter Your Character ");
    scanf("%c", &ch);



    (ch >= 'a' && ch <= 'z') ? (printf("The Character Is A Small Case Letter")) : (printf("The Character Is Not A Small Case Letter"));

    return 0;



}