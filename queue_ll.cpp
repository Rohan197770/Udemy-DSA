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

class queue
{
    node* front;
    node* rear;

    public:


    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x)
    {
        node* n= new node(x);
        if(front==NULL && rear==NULL)
        {
            front=n;
            rear=n;
        }
        else
        {
            rear->next=n;
            rear=n;
        }
    }

    void dequeue()
    {
        node* todelete =front;
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            front=front->next;
            delete todelete;
        }
    }

    int qfront()
    {
        if(front==NULL)
        {
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        return front==NULL;
    }

};

int main()
{
    queue st;
    st.enqueue(1);
    st.enqueue(2);
    st.enqueue(3);
    st.enqueue(4);
    while(!st.empty())
    {
        cout<<st.qfront()<<" ";
        st.dequeue();
    }

    return 0;
}