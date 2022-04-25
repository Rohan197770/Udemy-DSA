#include<iostream>
using namespace  std;

int sum(int arr[4][5],int sr,int sc,int er,int ec)
{
    int s=0;
    int count =2;
   while(sr<=er && sc<=ec)
   {
       if (count%2==0)
       {
       s= s+arr[sr][sc];
    
      sr++;
       }
      if(count%2!=0)
      {
         s= s+ arr[sr][sc];
         sc++;
      }
      count++;


   }
   return s;

}
int main()
{
    int arr[4][5]={{1,2,3,4,6},
                   {5,3,8,1,2},
                   {4,6,7,5,5},
                   {2,4,8,9,4}};
                   int sr=0;
                   int sc=0;
                   int er=1;
                   int ec=1;

         cout<<sum(arr,sr,sc,er,ec);     
         return 0;     
}
