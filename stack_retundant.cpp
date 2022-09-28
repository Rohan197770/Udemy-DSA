#include<iostream>
#include<stack>
using namespace std;
bool check_returndant(string x)
{
    stack<int> s;
    for(int i=0;i<x.length();i++)
    {
        char ch=x[i];

        if(ch=='('|| ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            s.push(ch);
        }

        else
        {
            if(ch==')')
            {
               bool retundant=true;
               while(s.top()!='(')
               {
                   char top=s.top();
                   if(top=='+' || top=='*'|| top=='/' || top=='-')
                   {
                       retundant=false;
                   }
                   s.pop();
               }
               if(retundant==true)
               {
                   return true;
               }
               s.pop();
            }
        }
    }

    return false;
}

int main()
{
    string s="((a+b)*(c))";
   cout<<check_returndant(s);

   return 0;
}