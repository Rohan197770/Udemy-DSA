#include<iostream>
using namespace std;


int steps(int n)
{
    return  (n&(n-1))==0 ? 1:-1;
}

int main()
{
    int n;
    cin>>n;
    int count =0;
    if(steps(n)==1)
    {
        cout<<"1";
    }
    else 
       {
       for(int i=n;i>0;i--)
       {
           if(steps(i)==1)
           {
               cout<<count;
               break;
           }
           count++;
       }
    }
  
  return 0;

}