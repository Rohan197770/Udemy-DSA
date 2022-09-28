#include<iostream>
#include<stack>
using namespace std;

void Insertsorted(stack<int> &st,int data)
{
    if(st.empty()|| st.top()<data)
    {
        st.push(data);
        return;
    }

    int temp=st.top();
    st.pop();
    Insertsorted(st,data);
    st.push(temp);
}
void sort(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int temp=st.top();
    st.pop();
    sort(st);
    Insertsorted(st,temp);
}
int main()
{
    stack<int> st;
    st.push(4);
    st.push(16);
    st.push(10);
    st.push(5);
    st.push(1);
    sort(st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}