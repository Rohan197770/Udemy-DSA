#include<iostream>
using namespace std;

int  largest_subarray_sum(int arr[],int n)
{ //brute force
    int largestsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum =0; 

            for(int k=i;k<=j;k++)
            {
                sum= sum+ arr[k];
            }
             // if sum>largestsum
            largestsum=max(largestsum,sum);
        }
    }
    return largestsum;
}

int prefix_sum(int arr[],int n)
{ //prefix sum
    int prefix[100]={0};
    prefix[0]=arr[0];
    

    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    
    }
    int largestsum=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)
        {
           int subarraysum=  i>0 ?prefix[j]-prefix[i-1] : prefix[j];

           largestsum=max(largestsum,subarraysum);
        }
    }
    return largestsum;
}

int main()
{

   int arr[]={-2,3,4,-1,5,-12,6,1,3};

   int n=sizeof(arr)/sizeof(int);
 cout<<  largest_subarray_sum(arr,n)<<endl;
 cout<< prefix_sum(arr,n);
    return 0;
}