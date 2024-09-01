#include<stdio.h>
void main()
{
  int a[10],i;
  a[0]=1;
  a[1]=2;
  a[2]=3;
  for(i=3;i<10;i++)
    {
      printf("enter value for array[%d]: ",i);
      scanf("%d",&a[i]);
    }
  for(i=0;i<10;i++)
    {
      printf("array[%d]=%d\n",i,a[i]);
    }
}
