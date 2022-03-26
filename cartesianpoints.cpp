#include <iostream>
#include<algorithm>
using namespace std;
//chopsticks
int main() {
        
        int n,count=0;;
        cout<<"enter the size of array";
        cin>>n;
        int d;
        cout<<"enter the difference";
        cin>>d;
        int arr[n];

        for(int i=0;i<n;i++)
        {

            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int i=0;i<n;)
        {
            if((arr[i+1]-arr[i])<=d)
            {
                count++;
                i=i+2;
            }
            else{
                i++;
            }
        }
cout<<count;

}
