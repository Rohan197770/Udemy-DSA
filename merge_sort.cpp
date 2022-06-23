#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int e)
{
    int i=s;
    int mid= (s+e)/2;
    int j= mid+1;

    vector <int> temp;

    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
             temp.push_back(arr[j]);
             j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i++]);
        i++;
    }
    while(j<=e)
    {
        temp.push_back(arr[j++]);
        
    }
    int m=0;
    for(int x=s;x<=e;x++)
    {
        arr[x]=temp[m];
        m++;
    }
    return;
}

void merge_sort(vector <int> &arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
  return  merge(arr,s,e);
}

int main()
{
   vector <int> arr{3,2,5,9,1,8};

   int s=0;
   int e = arr.size()-1;
   merge_sort(arr,s,e);
   for(int x: arr)
   {
       cout<<x<<endl;
   }
   return 0;
}