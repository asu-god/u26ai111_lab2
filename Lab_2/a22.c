#include <stdio.h>
int main()
{
    int a, b, factorial;
    printf("Enter The Number You Want To Calculate Factorial Of ");
    scanf("%d", &a);

    b = a;

    




    
    if(a == 0)
    {
    printf("0! = 1");
    }

    else if(a > 0)
    {
      factorial = 1;

      while(a > 0)
      {
        factorial = factorial*a;
        a = a - 1;

      }

      printf("%d", b);
      printf("!");
      printf(" = %d", factorial);

    }


    else
    printf("Invalid Number Entred");

    return 0;
    


}