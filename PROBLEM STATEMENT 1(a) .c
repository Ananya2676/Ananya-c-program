#include<stdio.h>
void name(int n,char str[])
{
  printf("%s\n",str);
  for(int i=0;i<n;i++)
    {
      printf("%c\n",str[i]);
    }
}
int main()
{
  char str[51];
  int n;
  printf("enter the n:");
  scanf("%d",&n);
  printf("enter the string:");
  scanf("%s",str);
  name(n,str);
}
