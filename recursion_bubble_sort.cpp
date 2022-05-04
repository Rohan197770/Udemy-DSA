#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    if(n==0)
    {
        return;
    }

    for(int j=0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
    bubble_sort(arr,n-1);
}

int main()
{
    int arr[]={1,-3,4,2,5,6,-1};
    int n= sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}