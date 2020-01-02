#include <stdio.h>
#include <stdlib.h>
struct Node {
    struct Node * next;
    int data;
};
struct Node* NewNode(int t)
{
    struct Node* res;
    res=malloc(1*sizeof(struct Node));
    res->data=t;
    res->next=NULL;
    return res;

}
void insert(struct Node** head,struct Node * newNode)
{
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct Node * curr=*head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=newNode;
}
void printList(struct Node * head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main() {
    struct Node *head;
    insert(&head,NewNode(1));
    insert(&head,NewNode(2));
    insert(&head,NewNode(3));
    printList(head);

    return 0;
}