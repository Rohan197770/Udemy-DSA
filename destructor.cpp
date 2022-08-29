#include<iostream>
#include<string.h>
using namespace std;

class Product
{
   int id;
   char *name;
   int mrp;
   int selling_price;
    public:
   Product(int id,char *n, int mrp,int selling_price)
   {
        this->id=id;
        this->mrp=mrp;
        this->selling_price=selling_price;
        name=new char[strlen(n)+1];
        strcpy(name,n);
   }

   Product(Product &X)
   {
       id=X.id;
       name=new char[strlen(X.name)+1];
       strcpy(name,X.name);
       mrp=X.mrp;
       selling_price=X.selling_price;
   }
   void show_detalis()
   {
       cout<<"Name-"<<name<<endl;
       cout<<"ID-"<<id<<endl;
       cout<<"mrp-"<<mrp<<endl;
       cout<<"selling_price-"<<selling_price<<endl;

   }

   ~Product()
   {
       cout<<"Delete"<<name;//destructor
       if(name!=NULL)
       {
           delete[] name;
           name=NULL;
       }
   }

};
int main()
{
    Product camera(10,"gopr",28000,26000);

    camera.show_detalis();

    return 0;

}