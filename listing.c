//Singly link list creation , insertion and deletion
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*p,*a;
void append()
{
  temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element you want to add next\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(head == NULL)
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
void front()
{
    printf("\nEnter element you want to add at front\n");
    a=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&a->data);
    a->next = head;
    head = a;
}
void print()
{
    struct node *d;
    d=(struct node*)malloc(sizeof(struct node));
    d=head;
    while(d->next != NULL)
    {
        printf("%d",d->data);
        d=d->next;
    }
    printf("%d",d->data);
}
void mid()
{
    struct node *b;
    b=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element after which you want to insert element\n");
    scanf("%d",&b->data);
    printf("Enter the value of element you want to add\n");
    struct node *z;
    z=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&z->data);
    p=head;
    while(p->data != b->data)
    {
        p=p->next;
    }
    z->next = p->next;
    p->next = z;
}
void del_front()
{
    head=head->next;

}
void del_end()
{
    p=head;
    struct node *z;
    z=(struct node*)malloc(sizeof(struct node));
    z=head->next;
    while(z->next != NULL)
    {
        z=z->next;
        p=p->next;
    }
    p->next=NULL;
    free(z);

}
del_mid()
{
    struct node *b;
    b=(struct node*)malloc(sizeof(struct node));
    struct node *f;
    f=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element you want to delete element\n");
    scanf("%d",&b->data);
    p=head;
    f=head->next;
    while(f->data != b->data)
    {
        f=f->next;
        p=p->next;
    }
    p->next=f->next;
    free(f);
}
void main()
{
    int i;
    for(i=0;i<4;i++)
    {
        append();
    }
    print();
    front();
    print();
    append();
    print();
    mid();
    print();
    del_front();
    printf("\n");
    print();
    del_end();
    printf("\n");
    print();
    del_mid();
    print();



}
