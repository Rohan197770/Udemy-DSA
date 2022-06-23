#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int partion(vector <int> &arr,int s,int e)
{
    int i=s-1;
    int pivot= arr[e];

    for(int j=s;j<e;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);

    return i+1;
}

void quick_sort(vector <int> &arr,int s,int e)
{
    if(s>=e)//base case
    {
        return;
    }

    int p=partion(arr,s,e);

    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);

}


int main()
{
    vector <int> arr{10,5,2,0,7,6,4};

    int s=0;
    int e= arr.size()-1;
    quick_sort(arr,s,e);

    for(int x: arr)
    {
        cout<<x<<",";
    }
    return 0;
}