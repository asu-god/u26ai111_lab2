#include <stdio.h>
int main()
{
    int eng, hindi, math, sci, sst;


    printf("Enter Your English Marks ");
    scanf("%d", &eng);
    printf("Enter Your Hindi Marks ");
    scanf("%d", &hindi);
    printf("Enter Your Maths Marks ");
    scanf("%d", &math);
    printf("Enter Your Science Marks ");
    scanf("%d", &sci);
    printf("Enter Your Social Science Marks ");
    scanf("%d", &sst);

    int a;

    a = (eng + hindi + math + sci + sst)*0.2;

    if (eng <= 100 && eng >= 0 && hindi <= 100 && hindi >= 0 && math <= 100 && math >= 0 && sci <= 100 && sci >= 0 && sst <= 100 && sst >= 0)
{

    if(a >= 80)
    printf("A Divison");

    else if(a >= 60)
    printf("B Divison");

    else if(a >= 40)
    printf("C Divison");

    else
    printf("Fail");

    printf("\n");
    printf("Your Total Marks Are %d", eng + hindi + math + sci + sst );



}

else
printf("Invalid Marks Entered");



return 0;


}