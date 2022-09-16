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
node* merge(node* &head1,node* &head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummy= new node(-1);
    node* p3=dummy;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummy->next;
}

node* recursivemerge(node* &head1,node* &head2)
{
    node* result;
    if(head1==NULL)//base case
    {
        return head2;
    }
    if(head2==NULL)//base case
    {
        return head1;
    }
    if(head1->data<head2->data)
    {
        result=head1;
        result->next=recursivemerge(head1->next,head2);
    }
    else{
        result=head2;
        result->next=recursivemerge(head1,head2->next);
    }

    return result;
}

void display(node* head)
{
    node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
   int arr1[]={1,4,5,7,11};
    int  arr2[]={2,3,6,16,90};
    // int n1;
    // int n2;
    // cout<<"Enter the size of first array"<<endl;
    // cin>>n1;
    // int arr1[n1];
    // for(int i=0;i<n1;i++)
    // {
    //     cin>>arr1[i];
    // }
    // cout<<"Enter the size of second array"<<endl;
    // cin>>n2;
    // int arr2[n2];
    // for(int i=0;i<n2;i++)
    // {
    //     cin>>arr2[i];
    // }


    for(int i=0;i<5;i++)
    {
        insertAttail(head1,arr1[i]);
    }
    for(int i=0;i<5;i++)
    {
        insertAttail(head2,arr2[i]);
    }

    display(head1);
    display(head2);
    node* newhead=recursivemerge(head1,head2);
    display(newhead);

    return 0;
}