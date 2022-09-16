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
   node* n= new node(val);
   if(head==NULL)
   {
       n->next=head;
       head=n;
       return;
   }

   node* temp= head;

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
void odd_even(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;

    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
         odd=odd->next;
        even->next=odd->next;
        even=even->next;
       
    }
    odd->next=evenStart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}

int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAttail(head,arr[i]);
    }
    display(head);
   odd_even(head);
   display(head);
    return 0;
    
}