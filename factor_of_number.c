#include<stdio.h>
int main()
{
  int number,i;
  printf("enter the number");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    if(number%i==0)
    {
      printf("%d ",i);
    }
  }
  return 0;
}
