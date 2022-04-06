#include<iostream>
#include<string>
using namespace std;




int main()
{
     string  s[10]={"0100"};
     int sum=0; 
     int base=1;

    for(int i=3;i>=0;i--)
    {
       
        sum == sum+s[i]*base;
        base=base*2;
       // cout<<s[i];
    }
    cout<<sum;
    return 0;
}

    