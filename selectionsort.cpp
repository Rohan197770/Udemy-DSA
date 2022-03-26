#include<iostream>
using namespace std;


void selection_sort(int arr[],int n)
{

    for(int i=0;i<n;i++)//i=postion
    {

        int curr=arr[i];

        int min_postion =i;

        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_postion])
            {
                min_postion=j;
            }
        }

        swap(arr[min_postion],arr[i]);
    }
}

int main()
{
    int arr[]={5,4,3,7,8};

    int n=sizeof(arr)/sizeof(int);

    selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}