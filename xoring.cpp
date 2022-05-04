#include<iostream>
using namespace std;

int single(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        res=res^arr[i];
    }
    return res;
}

int main()
{
   int n=7;
   int arr[]={1,2,3,1,4,2,3};

  cout<< single(arr,n);
  return 0;
}