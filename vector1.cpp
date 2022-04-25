#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={1,2,3,4,14};
  arr.pop_back();
   arr.push_back(16);
   
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<arr.capacity()<<endl;
    cout<<arr.size()<<endl;;

    //fill constructor
    vector<int> brr(10,7);

    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }




    return 0;
}