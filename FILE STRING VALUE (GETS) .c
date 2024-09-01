#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp = fopen("file.txt","r");
  fgets(c,15,fp);
  printf("Character is %s\n",c);
  fclose(fp);
  return 0;
}
