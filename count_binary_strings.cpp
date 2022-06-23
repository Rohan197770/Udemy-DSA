#include<iostream>
using namespace std;


int binary_strings(int n)
{
    if(n<=2)
    {
        return n+1;
    }
    return binary_strings(n-1)+binary_strings(n-2);
}

int main()
{
   int n;
   cin>>n;

   cout<<binary_strings(n);
   return 0;
}