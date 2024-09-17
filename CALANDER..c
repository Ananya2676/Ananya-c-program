#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct calander
{
char*day;
int date;
char*event;
};
void create(struct calander list[],int index)
{
  char temp[50];
  printf("Enter the day:\n");
  scanf("%s",temp);
  list[index].day=(char*)malloc(strlen(temp)+1);
  strcpy(list[index].day,temp);
  printf("Enter the date:\n");
  scanf("%d",&list[index].date);
  printf("Enter the event:\n");
  scanf("%s",temp);
  list[index].event=(char*)malloc(strlen(temp)+1);
  strcpy(list[index].event,temp);
}
void read(struct calander list[])
{
  int i;
  for(i=0;i<7;i++)
    {
      printf("enter the details of day %d\n",i);
      create(list,i);
    }
}
void display(struct calander list[])
{
  int i;
  printf("\nday\tdate\tevent\n");
  for(i=0;i<7;i++)
    {
      printf("%s\t%d\t%s\n",list[i].day,list[i].date,list[i].event);
     
    }
}
int main()
{
  struct calander list[7];
  int i;
  read(list);
  display(list);
  for(i=0;i<7;i++)
    {
      free(list[i].day);
      free(list[i].event);
    }
  return 0;
}
