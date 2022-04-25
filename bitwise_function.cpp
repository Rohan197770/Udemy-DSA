#include<iostream>
using namespace std;

 int getithbit(int n,int i)
 {
     int marks=(1<<i);

    int j=n&marks;

    return j>0 ? 1: 0;
 }
 void setithbit(int &n,int i)
 {
     int marks=(1<<i);

     n= n|marks;
 }
 void clearithbit(int &n,int i)
 {
     int marks= (1<<i);
     int c=(~marks);

     n= n&c;

 }

 void updateithbit(int &n,int i,int v)
 {
     clearithbit(n,i);

     int marks= (v<<i);

     n=n|marks;



 }
 void clearlastithbit(int &n,int i)
 {
     int marks=(-1<<i);
     n = n&marks;
 }

 void clearRangeinbits(int &n,int i,int j)
 {
     int a=(~0<<j+1);
     int b=(1<<i)-1;
     int mark= a|b;

     n= n&mark;
 }

int main()
{
    int n=31;
    int i=1;
    int j=3;

   // cout<<getithbit(n,i)<<endl;

   //updateithbit(n,i,0);
   //cout<<n;
  // clearlastithbit(n,i);
  clearRangeinbits(n,i,j);

   cout<<n;




    return 0;
}