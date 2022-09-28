#include<iostream>
#include<stack>
using namespace std;
//delete middle element of stack

void solve(stack<int> &input,int count,int size)
{
    if(count==size/2)
    {
        input.pop();
        return;
    }

    int temp=input.top();
    input.pop();
    solve(input,count+1,size);
    input.push(temp);
}
void delete_middle(stack<int> &input)
{
    int count=0;
    int size=input.size();

    solve(input,count,size);

}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    delete_middle(st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
    

}