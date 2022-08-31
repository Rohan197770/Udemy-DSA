#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAthead(node* &head,int val)
{
    node* n= new node(val);

    n->next=head;
    if(head!=NULL)
    {
    head->prev=n;
    }
    head=n;
}
void inserAttail(node* &head,int val)
{

    if(head==NULL)
    {
        insertAthead(head,val);
        return;
    }
    node* n= new node(val);
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;


}
void display(node* head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main()
{
    node* head=NULL;
    inserAttail(head,1);
     inserAttail(head,2);
      inserAttail(head,3);
       inserAttail(head,4);
       display(head);

       return 0;

}
