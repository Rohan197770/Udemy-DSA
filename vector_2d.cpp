#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> > arr={{1,2,3},
                              {4,5,6,7}
                              ,{12,13,14},
                              {17,11}};
    cout<<arr.size();
    
     arr[0][0]=arr[0][0]+10;
    for(int i=0;i<arr.size();i++)
    {
        for(int number: arr[i])
        {
            cout<<number<<" ";
        }
        cout<<endl;
    }
    return 0;                   
}