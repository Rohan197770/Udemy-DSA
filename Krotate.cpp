#include<iostream>
using namespace std;

void reverse(int arr[],int s,int e)
{
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }

}

void rotate(int arr[],int n,int a)
{  
   int s=0,e=n-a-1;
   reverse(arr,s,e);

   int f=n-a;
   int l=n-1;
   reverse(arr,f,l);

   int r=0,m=n-1;
   reverse(arr,r,m);

   for(int i=0;i<n;i++)
   {
       cout<<arr[i];
   }


}

int main()
{
    int arr[]={1,3,5,7,9};

    int n=sizeof(arr)/sizeof(int);
    int a;
    cout<<"How many times to rotate a array";
    cin>>a;
    a=a%n;

    rotate(arr,n,a);

    return 0;
}