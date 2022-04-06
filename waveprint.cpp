#include<iostream>
using namespace std;

void wave_print(int arr[][10],int n,int m)
{
    int startrow=0;
    int endrow=n-1;
    int startcol=0;
    int endcol=m-1;

    

    while(startcol<=endcol)
    {
        if(endcol%2!=0)
        {

        for(int row=startrow;row<=endrow;row++)
        {
            
            cout<<arr[row][endcol]<<" ";
        }
        }
        if(endcol%2==0)
        {
            for(int row=endrow;row>=startrow;row--)
            {
                cout<<arr[row][endcol]<<" ";
            }
        }
        
        endcol--;
    }
}

int main()
{
    int arr[][10]={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};

    int n=4,m=4;

    wave_print(arr,n,m);
    
    
    return 0;
}