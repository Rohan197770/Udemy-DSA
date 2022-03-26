#include<iostream>
#include<algorithm>
using namespace std;


bool compare(int a,int b)
{
   return a>b; 
} 
bool compare2(int a,int b)
{
    return a<b;
}

int main()
{

    int arr[]={111,35,7,9,29};

    int n =sizeof(arr)/sizeof(int);
    bool flag;
    cin>>flag;
    if(flag=0){
    sort(arr,arr+n,compare);
    }
    if(flag=1)
    {
        sort(arr,arr+n,compare2);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
    return 0;
}