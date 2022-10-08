#include<iostream>
using namespace std;

class circular_queue
{
    int front;
    int rear;
    int* arr;
    int size;
    public:
    circular_queue()
    {
        front=-1;
        rear=-1;
        size=10000;
        arr= new int[size];

    }

    void enqueue(int x)
    {
        if((front==0 && rear==size-1) || (rear==((front-1)%(size-1))))
        {
            cout<<"queue is full";
            return;
        }
        else if(front==-1)//first element push
        {
            rear=0;
            front=0;
            arr[rear]=x;
        }
        else if(front!=0 && rear==(size-1))
        {
            rear=0;
            arr[rear]=x;//to maintain cyclic
        }
        else
        {
            rear++;
            arr[rear]=x;
        }
    }
    void dequeue()
    {
        if(front==-1)
        {
            cout<<"queue is empty"<<endl;

        }
        arr[front]=-1;
        if(front==rear)//deleting last element
        {
           front=rear=-1;
        }
        else if(front==(size-1))//cyclic nature
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    bool empty()
    {
        return front==-1;
    }
    int cqfront()
    {
        return arr[front];
    }
};

int main()
{
    circular_queue st;
    st.enqueue(1);
    st.enqueue(2);
    st.enqueue(3);
   
    while(!st.empty())
    {
        cout<<st.cqfront()<<" ";
        st.dequeue();

    }

    return 0;
}