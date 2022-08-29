#include<iostream>
#include<string.h>
using namespace std;

class Product
{
   private:
   int id;
   char name[100];
   int mrp;
   int selling_price;

   public:
   //constructor
   Product()
   {
       cout<<"Inside Constructor"<<endl;
   }
//paramaterized constructor
//constructor overloading
   Product(int id,char *n, int mrp,int selling_price)
   {
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        strcpy(name,n);
        
   }
   Product(Product &X)
   {
       id=X.id;
       mrp=X.mrp;
       strcpy(name,X.name);
       selling_price=X.selling_price;
   }
   

   void set_mrp(int price)
   {
       mrp=price;
   }

   void set_selling_price(int price)
   {
       if(price>mrp)
       {
           selling_price=mrp;
       }
       else
       {
           selling_price=price;
       }
   }

   int get_mrp()
   {
       return mrp;
   }

   int get_selling_price()
   {
       return selling_price;
   }

   void show_detalis()
   {
       cout<<"Name-"<<name<<endl;
       cout<<"ID-"<<id<<endl;
       cout<<"mrp-"<<mrp<<endl;
       cout<<"selling_price-"<<selling_price<<endl;

   }
  
};

int main()
{
    Product camera(1,"gopr",28000,26000);
    //camera.set_mrp(100);
    //camera.set_selling_price(200);
  
   // cout<<camera.get_mrp()<<endl;
    //cout<<camera.get_selling_price()<<endl;
    // copy cons
    Product webcam(camera);

    Product handycam=camera;


    camera.show_detalis();
    webcam.show_detalis();
    handycam.show_detalis();

    return 0;
}
