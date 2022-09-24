#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> books;
    books.push("Rohan");
    books.push("Giri");
    books.push("Amrendra");
    books.push("ABHI");

    while(!books.empty())
    {
        cout<<books.top()<<endl;
        books.pop();
    }

    return 0;
}