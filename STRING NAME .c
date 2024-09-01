#include<stdio.h>
void main()
{
  int n,i;
  char str[50];
  printf("enter n:");
  scanf("%d",&n);
  printf("enter string:");
  scanf("%s",str);
  printf("%s\n",str);
  for(i=1;i<=n;i++)
    {
      printf("%c\n",str[i]);
    }
}

           #include<stdio.h>
          void main()
          {
          char str[9];
          printf("enter the name:")
          scanf("%s",str);
          printf("HELLO %s,WELCOME TO C PROGRAMMING",str);
          }
