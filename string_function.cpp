#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[20]="rohan";
    char b[20];

   cout<< strlen(a) <<endl;

   strcpy(b,a);

   cout<<b<<endl;

   cout<< strcmp(a,b)<<endl;

   char c[20]="rohan";
   char d[20]="anand";

   cout<< strcat(c,d);
    return 0;

    
}