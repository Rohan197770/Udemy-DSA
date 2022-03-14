#include<iostream>
#include<vector>
using namespace std;


int main()
{

    vector <int> arr ={12,13,14,15,16};

    arr.pop_back();

    arr.push_back(16);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;


}
