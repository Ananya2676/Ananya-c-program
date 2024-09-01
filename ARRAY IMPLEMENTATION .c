#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 50
int arr[MAX_SIZE];
int size=0;
void display()
{
  int i;
  if(size==0)
  {
    printf("Array is empty\n");
  }
  else
  {
    for(i=0;i<size;i++)
      {
      printf("%d",arr[i]);
      }
    printf("\n");
  }
}
void insertAtPosition(int position,int element)
{
  int i;
  for(i=size;i>position;i--)
    {
      arr[i]=arr[i-1];
      
    }
  arr[position]=element;
  size++;
}
void deleteAtPosition(int position)
{
  int i;
  for(i=position;i<size-1;i++)
    {
      arr[i]=arr[i+1];
    }
  size--;
}
int main()
{
while(1)
  {
    printf("1. INSERT END\n");
    printf("2. INSERT SPECIFIC POSITION\n");
    printf("3. DELETE SPECIFIC POSITION\n");
    printf("4. DISPLAY\n");
    printf("5. EXIT\n");
    int ch,position,element;
      printf("enter your choice\n");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1 : 
                  if(size==MAX_SIZE)
                  {
                    printf("array is full\n");
                    break;
                  }
                  printf("enter the element to be inserted\n");
                  scanf("%d",&element);
                  arr[size]=element;
                  size++;
                  break;
          case 2:
                  if(size==MAX_SIZE)
                  {
                      printf("array is full\n");
                      break;
                  }
                  printf("enter the position\n");
                  scanf("%d",&position);
                  if(position < 0)
                  {
                    printf("invalid position\n");
                    break;
                  }
                  printf("enter the elements to be inserted");
                  scanf("%d",&element);
                  insertAtPosition(position,element);
                  break;
          case 3:
                  if(size==MAX_SIZE)
                  {
                    printf("array is empty\n");
                    break;
                  }
                  printf("enter the position\n");
                  scanf("%d",&position);
                  if(position<0)
                  {
                    printf("invalid position\n");
                    break;
                  }
                  deleteAtPosition(position);
                  break;
          case 4:
                  display();
                  break;
          case 5:
                  exit(0);
          default:
                  printf("invalid choice\n");
        }
  }
}  
