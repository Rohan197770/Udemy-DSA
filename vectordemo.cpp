#include<iostream>
#include"vector.h"
using namespace std;



int main()

{
    Vector <char> b;
    b.push_back('a');
    b.push_back('b');
  for(int i=0;i<b.size();i++)
  {
      cout<<b[i]<<" ";
  }
    Vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(2)<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";// because of operator overloading
    }


    return 0;
}