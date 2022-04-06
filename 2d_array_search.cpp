#include<iostream>
using namespace std;

pair<int,int> searching(int arr[][4],int n,int m,int key)
{
    int i=0;
    int j=m-1;
    if(key<arr[0][0] || key>arr[n][m])
    {
        return {-1,-1};
    }

    while(i<n && j>=0)
    {
        if(arr[i][j]==key)
        {
            return {i,j};
        }
        else if (arr[i][j]>key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return{-1,-1};
}

int main()
{
   int arr[][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};

     int n=4;
     int m=4;
     pair <int,int> cods =searching(arr,n,m,14);
     cout<<cods.first<<" "<<cods.second;

     return 0;           
}