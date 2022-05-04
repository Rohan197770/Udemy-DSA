#include<iostream>
using namespace std;

int exponentiation(int a,int n)
{
    int last_bit;
   int  ans =1;
    while(n>0)
    {
        last_bit=n&1;
        
        if(last_bit)
        {
           ans = ans*a;
        }

        a=a*a;
        n=n>>1;
    }
    return ans;
}


int main()
{
    int a,n;
    cin>>a>>n;
    cout<<exponentiation(a,n);

    return 0;
}