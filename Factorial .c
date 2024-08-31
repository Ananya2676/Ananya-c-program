#include <stdio.h>
void main()
{
  int num,fact=1,i;
  printf("Enter a number\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
      fact=fact*i;
    }
  printf("Factorial of %d is %d\n",num,fact);
}
