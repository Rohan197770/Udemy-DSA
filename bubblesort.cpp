#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[]={5,-4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);

    return 0;
}