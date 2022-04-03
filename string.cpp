#include<iostream>
#include<string>
using namespace std;

int main()
{
   string s;


   getline(cin,s);
   for(char ch:s)
   {
       cout<<ch<<",";
   }
   return 0;
}