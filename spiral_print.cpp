#include<iostream>
using namespace std;


void spiral(int arr[][10],int n,int m)
{

    int startrow=0;
    int endrow= n-1;
    int startcol=0;
    int endcol=m-1;

    while(startrow<=endrow && startcol<=endcol)
    {

        for(int col=startcol;col<=endcol;col++)
        {
            cout<<arr[startrow][col]<<" ";
        }
        for(int row=startrow+1;row<=endrow;row++)
        {
            cout<<arr[row][endcol]<<" ";
        }
        for(int col=endcol-1;col>=startcol;col--)
        {
            if(startcol==endcol)
            {
                break;
            }
            cout<<arr[endrow][col]<<" ";
        }
        for(int row=endrow-1;row>=startrow+1;row--)
        {
            if(startrow==endrow)
            {
                break;
            }
            cout<<arr[row][startcol]<<" ";
        }

        startrow++;
        endcol--;
        endrow--;
        startcol++;
        

    }

}

int main()
{

    int arr[][10]={{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};

    int n=4,m=4;

    spiral(arr,n,m);
    

    return 0;
}