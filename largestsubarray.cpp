#include<iostream>
using namespace std;

int printlargest_subarray(int arr[])
{
    int largest_sum=0;

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            int sum=0;

            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }

            largest_sum= max(largest_sum,sum);
        }



    }
    return largest_sum;
}

int main()
{
    int arr[]={1,-2,3,4,4,-2};
      cout<<printlargest_subarray(arr);

    return 0;


}