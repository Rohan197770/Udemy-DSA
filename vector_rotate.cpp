#include<iostream>
#include<vector>

using namespace std;

int main()
{
     vector<vector<int>>  matrix ={{1,2,3},
                                  {4,5,6},
                                  {7,8,9}

     };
      int n= matrix.size();
     for(int i=0;i<n;i++)
     {
         for(int j=i;j<n;j++)
         {
             int temp;
             temp= matrix[i][j];
             matrix[i][j]=matrix[j][i];
             matrix[j][i]=temp;

         }
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n/2;j++)
         {
             int temp;
             temp= matrix[i][j];
             matrix[i][j]=matrix[i][n-1-j];
             matrix[i][n-1-j]=temp;

         }
     }
    
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<matrix.size();j++)
         {
            cout<<matrix[i][j]<<",";


         }
         cout<<endl;
     }

     return 0;



}