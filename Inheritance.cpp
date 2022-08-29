#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"inherit";
    }

};
class B: public A{//single inheritance
public:
void fun1()
{
    cout<<"hi"<<endl;
}

};

class C :public A,public B
{
    public:
    void fun2()
    {
        cout<<"Multiple inheritance"<<endl;
    }
};

int main()
{
  B rohan;
  rohan.fun();

  C abhi;
  abhi.fun2();
  return 0;



}