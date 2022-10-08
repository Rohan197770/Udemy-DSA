#include<iostream>
using namespace std;

class queue
{
    int front;
    int rear;
    int * arr;
    int size;
    public:
    queue()
    {
        front=0;
        rear=0;
        size=10000;
        arr= new int[size];
    }

    void enqueue(int x)
    {
        if(rear==size)
        {
           cout<<"Queue is full"<<endl;
        }
        else
        {
             arr[rear]=x;
             rear++;
         }
    }
    void dequeue()
    {
        if(rear==front)
        {
            cout<<"queue is empty"<<endl;
        }
        arr[front]=-1;
        front++;

        if(front==rear)
        {
            front=0;
            rear=0;
        }
    }
    bool empty()
    {
        return rear==front;
    }
    int qfront()
    {

        if(front==rear)
        {
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    queue st;
    st.enqueue(1);
    st.enqueue(2);
    st.enqueue(3);
    st.dequeue();
    while (!st.empty())
    {
        cout<<st.qfront()<<" ";
        st.dequeue();
    }
    
    return 0;
    
}