#include<stdio.h>
int main()
{
  int array[100],number,i,j;
  printf("enter total number");
  scanf("%d",&number);
  for(i=0;i<number;i++)
  {
    scanf("%d",&array[i]);
    }
    for(i=0;i<number-1;i++)
    {
      for(j=i+1;j<number;j++)
    {
      if(array[i]==array[j])
      {
        printf("%d ",array[i]);
      }}}
    return 0;
}
