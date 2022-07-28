#include<iostream>
#include<vector>
using namespace std;

void print(int i,vector<int> output,int s,int sum,vector<int> arr,int n)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto x: output)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    output.push_back(arr[i]);
    s=s+arr[i];
    print(i+1,output,s,sum,arr,n);
    s=s-arr[i];
    output.pop_back();
    print(i+1,output,s,sum,arr,n);
}

int main()
{
   vector<int> arr={1,2,1};
   vector<int> output;
    int n=3;
    int sum=2;
    
   print(0,output,0,sum,arr,n);

}