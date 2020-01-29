#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*p;
void print()
{
   p=head;
       while(p->next != NULL)
       {
           printf("%d",p->data);
           p=p->next;
       }
    printf("%d",p->data);


}
void append(){
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter node data\n");
   scanf("%d",&temp->data);
   temp->next = NULL;
   if(head==NULL)
   {
       head=temp;
   }
   else
   {
       p=head;
       while(p->next != NULL)
       {
           p=p->next;
       }
       p->next=temp;
   }
}
void main()
{
    int i,n;
    printf("Enter the no. of nodes you want to append\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        append();
    }
    print();


}
