#include<iostream>
#include<stack>
using namespace std;

int minimum_cost_make_sting_valid(string s)
{
     if(s.length()%2!=0)
     {
         return -1;
     }

     stack<char> st;

     for(int i=0;i<s.length();i++)
     {
        char ch=s[i];

        if(ch=='{')
        {
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
     }
     if(st.empty())
     {
         return 0;
     }
     int a=0,b=0;
     while(!st.empty())
     {
         char bh=st.top();
         if(bh=='{')
         {
             a++;
         }
         if(bh=='}')
         {
             b++;
         }
         st.pop();
     }

     int res= (a+1)/2 + (b+1)/2;

     return res;
}

int  main()
{
    string s;
    cin>>s;

  cout<< minimum_cost_make_sting_valid(s);
}