#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverses(queue<int> &q)
{
    stack<int> s;

    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        s.push(t);
    }

    while(!s.empty())
    {
        int t=s.top();
        s.pop();
        q.push(t);
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    reverses(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}