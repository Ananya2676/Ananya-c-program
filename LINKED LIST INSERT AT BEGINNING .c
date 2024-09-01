#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* createnode(int data)
{
struct node* newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->next=NULL;
return newnode;
}
void insertAtBeginning(struct node** head, int data)
{
struct node* newnode = createnode(data);
newnode->next = *head;
*head = newnode;
}
void printList(struct node* head)
{
struct node* temp = head;
while(temp != NULL)
    {
    printf("%d ",temp->data);
    temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node* head = NULL;
    insertAt Beginning(&head,40);
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,10);
    printf("Linked List: ");
    printList(head);
    return 0;
}
