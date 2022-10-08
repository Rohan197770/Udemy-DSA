#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack<int> s1;
    stack<int> s2;

    public:

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"Queue is empty"<<endl;;
            return -1;
        }
        else if(s2.empty())
        {
            while(!s1.empty())
            {
                int top=s1.top();
                s2.push(top);
                s1.pop();
            }
        }
        int t=s2.top();
        s2.pop();

        return t;

    }
};

int main()
{
    queue st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

cout<<st.pop()<<endl;
cout<<st.pop()<<endl;


}