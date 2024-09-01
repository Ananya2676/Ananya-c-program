#include<stdio.h>
int sub(int a,int b)
{
  return a-b;
}
int main()
{
  int a,b,c;
  printf("enter the number\n");
  scanf("%d%d",&a,&b);
  c=sub(a,b);
  printf("difference = %d\n",c);
}
