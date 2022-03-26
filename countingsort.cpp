#include<iostream>
using namespace std;

void counting(int arr[],int n)
{
    int largest = -1;

    for(int i=0;i<n;i++)
    {
        largest =max(largest,arr[i]);
    }

    int freq[largest+1]={0};

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    int j=0;

    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[]={12,45,3,2,89,1,23};
    int n=sizeof(arr)/sizeof(int);

    counting(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}