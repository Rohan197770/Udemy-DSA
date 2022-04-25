#include<iostream>
using namespace std;

void tax(int &money)
{
    float tax=0.10;

    money =money- money*tax;
}

int main()
{
    int income;
    cin>>income;

    

    tax(income);
    cout<<income;

    return 0;
}