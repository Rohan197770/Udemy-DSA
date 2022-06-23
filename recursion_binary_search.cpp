#include<iostream>
#include<vector>
using namespace std;

int binary_search(int arr[],int s,int e,int x)
{
  if(e>=1)
  {
      int mid=(s+e)/2;

      if(arr[mid]==x)
      {
          return mid;
      }
      if(arr[mid]<x)
      {
         return binary_search(arr,mid+1,e,x);
      }
      else
      {
          return binary_search(arr,s,mid-1,x);
      }
  }
  return -1;

}

int main()
{
    int arr[]={1,2,3,4,5};
  int n= sizeof(arr)/sizeof(int);
  cout<<  binary_search(arr,0,n-1,3);

    return 0;
}