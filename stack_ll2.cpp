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

class stack
{
    
    node* head;
   public:
   

    void push(int val)
    {
        node* n= new node(val);
        n->next=head;
        head=n;
    }
    void pop()
    {
        if(head!=NULL)
        {
            node* t =head;
            head=head->next;
            delete head;

        }
    }
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }

        return false;
    }

    int top()
    {
        return head->data;
    }

};

int main()
{
    stack st;
    st.push(1);
    st.push(2);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}