#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={12,34,2,7,3,9};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);

    for(int x: arr)
    {
        cout<<x<<endl;
    }
    

    return 0;
}