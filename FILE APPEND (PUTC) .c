#include<stdio.h>
void main()
{
  FILE *fp;
  char c[50];
  fp=fopen("file.txt","a");
  fputc('a',fp);
  fputs("hello",fp);
  }
