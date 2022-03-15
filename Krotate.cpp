#include<iostream>
using namespace std;

void rotate(int arr[],int n,int a)
{
    for(int i=0;i<n-a;i++)
    {
        
        
            arr[i]=arr[i+a];
         
        
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[]={1,3,5,7,9};

    int n=sizeof(arr)/sizeof(int);
    int a=1;

    rotate(arr,n,a);

    return 0;
}