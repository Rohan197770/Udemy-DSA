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
    node *n =new node(val);

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
    node* temp= head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        
    }

    return prevptr;
}
node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}


int main()
{
   node* head=NULL;
   insertAthead(head,1);
   insertAthead(head,2);
   insertAthead(head,3);
   insertAthead(head,4);
   display(head);
   node* newhead=reverse(head);
   display(newhead);
   node* newhead1= reverseRecursive(newhead);
   display(newhead1);

   return 0;

}

