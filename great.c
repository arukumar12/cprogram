#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("enter the three numbers");
    scanf("%d%d%d",&number1,&number2,&number3);
    if((number1>number2)&&(number1>number3))
    {
        printf("the largest number is %d",number1);
    }
    else if((number2>number3)&&(number2>number1))
    {
        printf("the largest number is %d",number2);
    }
    else
    {
        printf("th largest number is %d",number3);
        
    }
    return 0;
}
