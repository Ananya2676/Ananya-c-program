#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node{
int data;
struct node *next;
};
struct node *createnode(int data){
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
   if(!newnode){
    printf("memory allocation failed");
    return NULL;
  }
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
}
void push(struct node **top,int data)
{
  struct node *newnode=createnode(data);//create a node funtion are used to create a node 
  if(!newnode){
    return;
  }
  newnode->next=*top;
  *top=newnode;
  printf("%d pushed to stack\n",data);
}
int pop(struct node **top)
{
  if(*top==NULL){
    printf("stack is empty\n");
    return INT_MIN;
  }
  struct node *temp=*top;
  int poppedvalue=temp->data;
  *top=temp->next;
  free(temp);
  return poppedvalue;
  }
int beginning(struct node *top){
  if(top==NULL){
    printf("stack is empty\n");
    return INT_MIN;
  }
  struct node *current = top;
  while(current->next!=NULL){
    current=current->next;
  }
  return current->data;
}
int main()
{
  struct node *top=NULL;
  push(&top,10);
  push(&top,20);
  push(&top,30);
  push(&top,40);
  push(&top,50);
  printf("popped element is %d\n",pop(&top));
  printf("bottom element is %d\n", beginning(top));
  printf("popped element is %d\n",pop(&top));
  printf("popped element is %d\n",pop(&top));

printf("top element is %d\n", beginning(top));
  return 0;
  }
