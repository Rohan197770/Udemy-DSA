#include<iostream>
using namespace std;

void print_dec(int n)
{
    //base case
   if(n==0)
   {
       return ;
   }
   //towards the base case
   cout<<n<<" ";
   print_dec(n-1);
   
}
void print_inc(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    print_inc(n-1);
    cout<<n<<" ";
    
}

int main()
{
   int n;
   cin>>n;

  print_dec(n);
  cout<<endl;
  print_inc(n);

  return 0;
}