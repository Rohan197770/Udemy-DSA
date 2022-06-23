#include<iostream>
using namespace std;


int friend_party(int n)
{
    //base case
    if(n==0 || n==1)
    {
        return 1;
    }

    return friend_party(n-1) +(n-1)*friend_party(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<friend_party(n);

    return 0;
}