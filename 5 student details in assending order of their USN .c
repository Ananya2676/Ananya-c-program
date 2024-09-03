#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct student 
{
  char NAME[50];
  char BRANCH[50];
  char USN[20];
  char CITY[50];
};
int main()
{
  struct student students[MAX];
  struct student temp;
  for(int i=0;i<MAX;i++)
    {
      printf("ENTER THE DETAILS OF STUDENT %d:\n ",i+1);
      printf("NAME :");
      scanf("%s",students[i].NAME);
      printf("BRANCH :");
      scanf("%s",students[i].BRANCH);
      printf("USN :");
      scanf("%s",students[i].USN);
      printf("CITY :");
      scanf("%s",students[i].CITY);
      printf("\n");
    }
  for(int i=0;i<MAX-1;i++)
    {
      for(int j=i+1;j<MAX;j++)
        {
          if(strcmp(students[i].USN,students[j].USN)>0)
          {
            temp=students[i];
            students[i]=students[j];
            students[j]=temp;
          }
        }
    }
  printf("STUDENT DETAILS SORTED BY USN:\n");
  for(int i=0;i<MAX;i++)
    {
      printf("NAME :%s\n",students[i].NAME);
      printf("BRANCH :%s\n",students[i].BRANCH);
      printf("USN :%s\n",students[i].USN);
      printf("CITY :%s\n",students[i].CITY);
      printf("\n");
    }
  return 0;
}
