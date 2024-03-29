#include<iostream>
using namespace std;

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };


// void InsertAttail(node* &head ,int val)
// {
//       node* n= new node(val);

//     if(head==NULL)
//     {
//         head=n;
//         return;
//     }

//      node* temp=head;
//      while(temp->next!=NULL)
//      {
//          temp=temp->next;
//      }
//      temp->next=n;
// }
// void insertAthead(node* &head,int val)
// {
//     node* n= new node(val);

//     n->next=head;
//     head=n;
// }

// void display(node* head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";

//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// bool search(node* head,int key)
// {
//     node* temp=head;

//     while(temp!=NULL)
//     {
//         if(temp->data==key)
//         {
//             return true;
//         }
//        temp= temp->next;
//     }

//     return false;
// }

// int main()
// {
//     node* head=NULL;
//     InsertAttail(head,1);
//     InsertAttail(head,2);
//     InsertAttail(head,3);

//     display(head);
//     insertAthead(head,5);
//     display(head);

//     search(head,6);

//     return 0;
// }
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

void insertAtTail(node* &head,int val)
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
void insertAthead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}

bool search(node* head,int key)
{
    node* temp=head;

    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }

    return false;
}
int recursiveSearh(int key,node*head)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==key)
    {
        return 1;
    }
    int subindex=recursiveSearh(key,head->next);

    if(subindex==-1)
    {
        return -1;
    }
    return subindex+1;
}

int main()
{
    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,3);


//     display(head);
    insertAthead(head,6);
//     display(head);
//    cout<< search(head,5);
cout<<recursiveSearh(3,head);

    return 0;

}
    
    