#include<iostream>
#include"stack_vector.h"

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty())
    {
       cout<<s.top()<<endl;
       s.pop();
    }
return 0;
}