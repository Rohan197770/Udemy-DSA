#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of the element";
    cin>>n;
    cout<<"Enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

