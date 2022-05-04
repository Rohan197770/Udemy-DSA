#include<iostream>
using namespace std;

int tilling_problem(int n,int m)
{
    if(n<=(m-1))
    {
        return 1;
    }
    return tilling_problem(n-1,m)+tilling_problem(n-m,m);
}

int main()
{
    int n=4;
    int m=3;
    cout<<tilling_problem(n,m);

    return 0;
}