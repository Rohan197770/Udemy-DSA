#include<iostream>
using namespace std;

int largest_element(int arr[])
{
    int max;
    for(int i=0;i<5;i++)
    {
        
        max=arr[0];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5];
    
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<largest_element(arr);
    return 0;
}