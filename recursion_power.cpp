#include<iostream>
using namespace std;

int power(int a,int k)
{
    if(k==0)
    {
        return 1;
    }
    
    int  pow= a*power(a,k-1);
   

    return pow;

   
}
int power1(int a,int k)
{
    if(k==0)
    {
        return 1;
    }
   int sub= power1(a,k/2);
   int subq= sub*sub;
   if(k&1)
   {
       return a*subq;
   }
  return subq;

}

int main()
{
    int a;
    int k;
    cin>>a>>k;
   cout<< power1(a,k);

    return 0;
}