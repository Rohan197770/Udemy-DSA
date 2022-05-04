#include<iostream>
using namespace std;


void all_occ(int arr[],int n,int key)
{
    if(n==0)
    {
        return;
    }

    all_occ(arr+1,n-1,key);
    if(arr[0]==key)
    {
    cout<<n-1<<" ";
    }
}

int main()
{
   int arr[]={1,2,5,3,1,2,3,8,6,3,6,7,9};
   int n=sizeof(arr)/sizeof(int);
   int key=3;

   all_occ(arr,n,key);
   return 0;
}