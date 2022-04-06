#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string s ="abcd";
    string d="bcda";

    int n= s.length();
   int  count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i]==d[j])
            {
               count++;
               break;
            }
        }

    }
    if(count ==n)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}