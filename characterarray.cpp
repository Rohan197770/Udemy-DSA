#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[]={'a','b','c','d','\0'};
    char b[]="xyz";

    cout<<a;
    cout<<strlen(a);
    cout<<sizeof(a)<<endl;
    cout<<b;

    /*char c[1000];

    cin>>c;
    char temp =cin.get();
    int len=1;

    while(temp!='/n')
    {
        len++;
        cout<<temp;
        temp=cin.get();

    }
*/


    return 0;
}