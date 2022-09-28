#include<iostream>
#include<stack>
using namespace std;

void InsertAtbottom(stack<int> &st,int data)
{
    if(st.empty())
    {
        st.push(data);
        return;
    }


    int temp=st.top();
    st.pop();
    InsertAtbottom(st,data);
    st.push(temp);

}

void reverse(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp=st.top();
    st.pop();
    reverse(st);
    InsertAtbottom(st,temp);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // InsertAtbottom(st,5);
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}