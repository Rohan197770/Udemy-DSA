#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

    int n= s.length();

    string output;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]=='u')
        {
            output = output + s[i];
        }
        
    }
    cout<<output;

    return 0;
}
