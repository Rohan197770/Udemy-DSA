#include<iostream>
using namespace std;

class student
{
   string name;
   public:

   int age;
   bool gender;

   student()
   {
       cout<<"Default Constructor"<<endl;

   }
   student(string s ,int a,bool g)
   {
       cout<<"Paramaterized constructor"<<endl;
       name=s;
       age=a;
       gender=g;
   }
   student(student &x)
   {
       cout<<"Copy constructor"<<endl;
       name=x.name;
       age=x.age;
       gender=x.gender;
   }

   void printinfo()
   {
       cout<<"Name-"<<name<<endl;
       cout<<"Age-"<<age<<endl;
       cout<<"Gender"<<gender<<endl;
   }

   ~student()
   {
       cout<<"Destructor called"<<endl;
   }

   bool operator ==(student &x)
   {
       if(name==x.name && age==x.age && gender==x.gender)
       {
           return true;
       }
       return false;
   }
};

int main()
{
    student rohan("rohan",19,1);

    rohan.printinfo();

    student abhi(rohan);

    return 0;

}
