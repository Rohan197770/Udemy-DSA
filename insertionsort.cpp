#include<iostream>
using namespace std;


void insertion_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int curr=arr[i];

        int pre= i-1;

        while(pre>=0 && arr[pre]>curr)
        {
             arr[pre+1]=arr[pre];
             pre=pre-1;
        }

        arr[pre+1]=curr;
    }
}

int main()
{
    int arr[]={5,4,3,2,1};

    int n=sizeof(arr)/sizeof(int);

    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}