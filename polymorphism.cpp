#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int img;
 public:
 complex()
 {
     
 }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    complex operator + (const complex &);

    
    void display();
   
};
  complex complex:: operator + (const complex &obj)
    {
       complex res;
        res.img=img+obj.img;
        res.real=real+obj.real;

        return res;

    }
    void complex::display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
int main()
{
    complex c1(12,7) ,c2(10,2);
    complex c3=c1+(c2);

    complex c;
    c3.display();


    return 0;
}