#include<iostream>
using namespace std;

int first_occurance(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int subindex=first_occurance(arr+1,n-1,key);
    if(subindex!=-1)
    {
        return subindex+1;
    }
    return -1;

}
int last_occ(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int subindex=last_occ(arr+1,n-1,key);
    if(subindex==-1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subindex+1;
    }
}

int main()
{
    int arr[]={1,3,5,8,7,6,2,8,7,1,21};
    int n= sizeof(arr)/sizeof(int);
    int key =7;
  cout<<  last_occ(arr,n,key);

    return 0;
}