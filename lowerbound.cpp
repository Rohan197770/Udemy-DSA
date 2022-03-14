#include<iostream>
using namespace std;

int lower_bound(int arr[],int val,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[0]>val)
        {
            return -1;
        }
       else if(arr[i]==val)
        {
            return val;
            
        }
        else if(arr[i]>val)
        {
          return arr[i-1];
          
        }
    }
}

int main()
{
    int arr[]={-1,-1,2,3,5};
    int n=sizeof(arr)/sizeof(n);

    int val;
    cin>>val;

   cout<< lower_bound(arr,val,n);


    return 0;
}