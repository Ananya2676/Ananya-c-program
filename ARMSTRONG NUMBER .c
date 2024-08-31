#include <stdio.h>
#include<math.h>
void main()
{
  int n,originalNum,reminder,result=0,digits=0;
  printf("Enter a number:");
  scanf("%d",&n);
  originalNum=n;
  while(originalNum!=0)
  {
    originalNum/=10;
    Digits ++;
    printf("iteration: %d,digits counted so far: %d\n",digits,digits);
  }
  originalNum=n;
  while(originalNum!=0)
  {
    reminder=originalNum%10;
    result +=pow(reminder,digits);
    originalNum/=10;
  }
  if(result==n)
    printf("%d is an Armstrong number.\n",n);
  else
    printf("%d is not an Armstrong number.\n",n);
}

