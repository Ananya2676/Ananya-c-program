#include <stdio.h>
void main()
{
  int num,fact=1,i;
  float res;
  printf("Enter a number\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
      fact=fact*i;
    }
  res=fact%10;
  printf("Factorial of %d is %d\n",num,fact);
  printf("reminder is %0.2f",res);
}
