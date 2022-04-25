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

int main()
{
    int n=5;
    int i=1;

    cout<<getithbit(n,i)<<endl;
    


    return 0;
}