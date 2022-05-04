#include<iostream>
using namespace std;


int decimal_binary(int n)
{
    int base=1;
    int ans =0;
    
    while(n>0)
    {
        int last_bit =n&1;
        ans += base*last_bit;
        base =base*10;
        n=n>>1;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<decimal_binary(n);
    return 0;
}