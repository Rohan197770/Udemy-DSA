#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}
void insertAttail(node* &head,int val)
{
   node* n=new node(val);

   if(head==NULL)
   {
      head=n;
      return;
   }

   node* temp=head;
   while(temp->next!=NULL)
   {
      temp=temp->next;
   }
  temp->next=n;
}
void insert_at_middle(node* &head,int pos,int val)
{
    node* n= new node(val);
   if(pos==1)
   {
       insertAthead(head,val);
       return;
   }
   int x=1;
   node* temp=head;
   while(x!=pos && temp!=NULL)
   {
      temp=temp->next;
      x++;
   }
   n->next=temp->next;
   temp->next=n;
}



void display(node* head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    display(head);
    // insertAthead(head,6);
    // display(head);
    insert_at_middle(head,2,7);
    display(head);

    return 0;
}

