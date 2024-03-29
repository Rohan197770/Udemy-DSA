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
        head->next=NULL;
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
node* merge(node* &head1,node* &head2)
{
     node* p1=head1;
     node* p2=head2;
     node* dummy=new node(-1);
     node* p3=dummy;
     int count=1;
    
    while(p1!=NULL && p2!=NULL)
    {
        if(count%2!=0)
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
        count++;
    }
    p3->next=p2;

    return dummy->next;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
   int arr1[]={5,7,17,13,11};
   int arr2[]={12,10,2,4,6};

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
   node* newhead=merge(head1,head2);
   display(newhead);

    return 0;

}