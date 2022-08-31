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
//  node* revese(node* &head)
//  {
//      node* prevptr=NULL;
//      node* currptr=head;
//      node* nextptr;

//      while(currptr!=NULL)
//      {
//          nextptr=currptr->next;
//          currptr->next=prevptr;

//          prevptr=currptr;
//          currptr=nextptr;
//      }

//      return prevptr;
//  }
node* revese_k_nodes(node* &head,int k)
{
     node* prevptr=NULL;
     node* currptr=head;
     node* nextptr;
     int count=0;

     while(currptr!=NULL && count<k)
     {
         nextptr=currptr->next;
         currptr->next=prevptr;

         prevptr=currptr;

         currptr=nextptr;
         count++;
     }
    if(nextptr!=NULL)
    {
        head->next=revese_k_nodes(nextptr,k);
    }

    return prevptr;
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
    //  node* newhead= revese(head);
    //  display(newhead);
    node* newhead= revese_k_nodes(head,2);
    display(newhead);

     return 0;
     

 }