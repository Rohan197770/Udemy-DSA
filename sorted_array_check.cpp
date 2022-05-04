#include<iostream>
using namespace std;


bool check(int arr[],int n)
{
    if(n==1|| n==0)//base case
    {
        return true;
    }
    return arr[0]<arr[1] && check(arr+1,n-1);
}

int main()
{
    int arr[]={1,4,3,4,7,6};
    int n= sizeof(arr)/sizeof(int);
   if( check(arr,n))
   {
       cout<<"Array is sorted!";
   }
   else
   {
       cout<<"array is unsorted";
   }
    return 0;

}