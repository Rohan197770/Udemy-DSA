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
void insertAthead(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;
    head=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAthead(node* &head)
{
    node* todelete =head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head ,int val)
{
    if(head==NULL)
    {
        return;
    }
   
   if(head->next==NULL)
   {
       deleteAthead(head);
   }

    node* temp=head;

    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete= temp->next;

    temp->next=temp->next->next;

    

    delete todelete;
}

void deleteAtpos(node* &head,int pos)
{
    if(pos==1)
    {
        node* todelete=head;
        head=head->next;
      todelete->next=NULL;
        delete todelete;

        return;
    }
    int x=1;
    node* temp=head;
    while(x!=pos-1 && temp!=NULL)
    {
        temp=temp->next;
        x++;
    }
    node* n=temp->next;
    temp->next=n->next;
    // n->next=NULL;

    delete n;
}

int main()
{
   node* head=NULL;

   insertAttail(head,1);
 insertAttail(head,2);
         insertAttail(head,3);
            insertAttail(head,4);
            display(head);
            // deletion(head,3);
            // display(head);
            // deleteAthead(head);
            // display(head);

            deleteAtpos(head,4);
            display(head);
            

            return 0;
}