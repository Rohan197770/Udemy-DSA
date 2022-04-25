#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> zero ={{5,4,3,9},
                               {2,0,7,6},
                               {1,3,4,0},
                               {9,8,3,4} };
       int n= zero.size();
     
     vector <bool> row(n,false);
     vector <bool> col(n,false);
     

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(zero[i][j]==0)
              {
                  row[i]=true;
                  col[j]=true;
              }
              
          }
      }
       for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(row[i]==true || col[j]==true)
              {
                 zero[i][j]=0;
              }
              
          }
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cout<<zero[i][j];
          }
          cout<<endl;
      }
    
    
       return 0;                        
}