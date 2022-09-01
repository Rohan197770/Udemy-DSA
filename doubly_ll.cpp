#include<iostream>
using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;
//     node* prev;insertAttail(head,1);

//     node(int val)
//     {
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };

// void insertAthead(node* &head,int val)
// {
//     node* n= new node(val);

//     n->next=head;
//     if(head!=NULL)
//     {
//     head->prev=n;
//     }
//     head=n;
// }
// void inserAttail(node* &head,int val)
// {

//     if(head==NULL)
//     {
//         insertAthead(head,val);
//         return;
//     }
//     node* n= new node(val);
//     node* temp=head;

//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->prev=temp;


// }
// void display(node* head)
// {
//     node* temp=head;

//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

// }
// int main()
// {
//     node* head=NULL;
//     inserAttail(head,1);
//      inserAttail(head,2);
//       inserAttail(head,3);
//        inserAttail(head,4);
//        display(head);

//        return 0;

// }

class node
{
    public:
    node* next;
    node* prev;
    int data;

    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
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

void insertAttail(node* &head,int val)
{

    if(head==NULL)
    {
        insertAthead(head,val);
        return ;
    }
    node* n=new node(val);
     
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
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
}
void deleteAthead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void deletion(node* &head,int pos)
{
    node* temp=head;

    if(pos==1)
    {
        deleteAthead(head);
        return;
    }
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    // node* todelete=temp;
    
    temp->prev->next=temp->next;
    if(temp->next!=NULL)//because of if we delete last node
    {
    temp->next->prev=temp->prev;
    }

    delete temp;
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
    deletion(head,2);
    display(head);

    return 0;
}
