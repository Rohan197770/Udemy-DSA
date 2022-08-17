#include <iostream>
using namespace std;

class Product
{
   private:
   int id;
   int mrp;
   int selling_price;

   public:

   void setmrp(int price)
   {
       mrp=price;
   }

   void setselling_price(int price)
   {
       if(price>mrp)
       {
           selling_price=mrp;
       }

       else
       {
           selling_price =price;
       }
   }

   int getmrp()
   {
       return mrp;
   }

   int getselling_price()
   {
       return selling_price;
   }
};

int main()
{
  Product camera;

  camera.setmrp(100);
  camera.setselling_price(200);

  cout<<"Mrp"<<camera.getmrp()<<endl;
  cout<<"selling  price"<<camera.getselling_price()<<endl;

    return 0;
}
