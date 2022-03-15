#include<iostream>
using namespace std;

void sorted_sum(int arr[],int n,int x)
{
    int m,c;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            temp= arr[i]+arr[j];
            
            if(temp<x)
            {
                m= arr[i];
                c= arr[j];
            }
        }
    }
    cout<<m<<" "<<c;    
}

int main()
{
  int arr[]={10,22,28,29,30,40};

  int n=sizeof(arr)/sizeof(int);

  int x;
  cin>>x;
   sorted_sum(arr,n,x);



    return 0;
}