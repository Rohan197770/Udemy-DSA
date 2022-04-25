/*You are given two 32 bit numbers ,N and M ,and two bit postions i and j.
Write a method to set all bits between i and j in N equal toM .
M(becomes a substring of N locationed at and starting at j)

Example:
N =10000000000
M =10101
i=2,j=6
Output: 1001010100
*/


#include<iostream>
using namespace std;


void clearbitinrange(int &n,int i,int j)
{
    int a= (~0<<j+1);
    int b= (1<<i)-1;
    int mark=a|b;
    n=n&mark;
}
void replacebits(int &n,int i,int j,int m)
{
    clearbitinrange(n,i,j);
    int mark=m<<i;

    n= n|mark;
}

int main()
{
    int n=15;
    int i=1;
    int j=3;
    int m=2;
    replacebits(n,i,j,m);
    cout<<n;
   
   return 0;
}