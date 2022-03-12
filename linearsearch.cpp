// to find the element in array is present or not

#include<iostream>
using namespace std;


int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }

    return -1;
}


int main()
{
    int arr[]={15,13,89,45,23};
    int n= sizeof(arr)/sizeof(int);

    cout<<"Enter the element which you want to find";
    int key;
    cin>>key;
    int index = linear_search(arr,n,key);
    if(index!=-1)
    {
        cout<<"Element is present";
    }
    else{
        cout<<"not present";
    }


    return 0;
}