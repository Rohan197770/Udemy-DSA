#include<iostream>
using namespace std;

class node
{
    public:
    node* next;
    int data;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};
void insertAthead(node* &head,int val)
{
    node* n= new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertAttail(node* &head,int val)
{
    node* n= new node(val);

    if(head==NULL)
    {
        insertAthead(head,val);
        return;
    }

    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
}
void display(node* head)
{
    node* temp=head;

    do//because at first temp is equal to head thats why we use do while
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    
}

void deleteAthead(node* &head)
{
    node* todelete=head;
   node* temp=head;
    while(temp->next!=head)
    {
       temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;

    delete  todelete;
}

void deletion(node* &head,int pos)
{

    if(pos==1)
    {
        deleteAthead(head);
        return;
    }

    int count=1;

   node* temp=head;

   while(count!=pos-1)
   {
       temp=temp->next;
       count++;
   }
   node* todelete =temp->next;
   temp->next=temp->next->next;

   delete todelete;


}
int main()
{
    node* head=NULL;

    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    display(head);
    deletion(head,1);
    display(head);

    return 0;
}