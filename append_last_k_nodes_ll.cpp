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

void insertAttail(node* &head,int val)
{
    node* n= new node(val);

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
int length(node* head)
{
    int count=0;
    node* temp=head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

node* Append_last_k_nodes(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail=head;
  
    int l=length(head);
    int count=1;
     k=k%l;
    while(tail->next!=NULL)
    {
       if(count==(l-k))
       {
           newtail=tail;
       }
       if(count==(l-k+1))
       {
           newhead=tail;
       }
       count++;
       tail=tail->next;
    }

    tail->next=head;
    newtail->next=NULL;

    return newhead;
}
int main()
{
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);
    display(head);
    // cout<<length(head)<<" ";
    node* newhead=Append_last_k_nodes(head,4);
    display(newhead);


    return 0;
}