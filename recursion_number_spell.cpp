#include<iostream>
#include<string>
#include<cstring>
using namespace std;

string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void number(int n)
{
   if(n==0)
   {
       return;
   }
   int last_digit=n%10;
    number(n/10);
   cout<<spell[last_digit]<<" ";
  
}


int main()
{
    int n;
    cin>>n;
    number(n);



   
   
   return 0;

}