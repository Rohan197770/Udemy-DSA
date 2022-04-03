#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[1000];

    cin.getline(str,1000);
    int n = strlen(str);
    int check=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]!= str[n-i-1])
        {
           check=1;
           break;
        }
    }
    if(check==0)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    return 0;

}