#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[100];

    cin.getline(a,100);
    int count =0;

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=a[i+1])
        {
            count++;
        }
    }
}