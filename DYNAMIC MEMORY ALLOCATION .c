#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *name;
  name = malloc(5);
  name = realloc(name,25);
  strcpy(name,"BHOOMIKA G");
  printf("%s",name);
  free(name);
}
