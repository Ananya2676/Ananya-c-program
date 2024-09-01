#include<stdio.h>
int main()
{
  char str[51];
  int n,i;
  printf("enter the n:");
  scanf("%d",&n);
  printf("enter the string:");
  scanf("%s",str);
 printf(str);
  for(int i=0;i<n;i++)
    {
      printf("%c\n",str[i]);
    }
}
