#include<iostream>
using namespace std;


int power(long long x,unsigned int y,int mod)
{
    int last_bit;
    int ans=1;
    x= x%mod;

    while(y>0)
    {
       last_bit= y&1;
       if(last_bit)
       {
           ans = (ans*x) %mod;
       }
       x= (x*x)%mod;

      y= y>>1;

    }
    

    return ans;

}

int main()
{
    double x;
    int y;
    double mod;
    cin>>x;
    cin>>y;
    cin>>mod;
    double h= power(x,y,mod);
    
    cout<<h;

    

    return 0;
}