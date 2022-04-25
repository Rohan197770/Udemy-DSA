#include<iostream>
using namespace std;

class Vector
{
    int *arr;
    int cs;
    int ms;

    public:

    Vector(int max_size=1)
    {
         cs=0;
        ms=max_size;
        arr =new int[ms];
    }
    void push_back(int d)
    {
        if(cs==ms)
        {
            int *oldarr =arr;
            ms =2*ms;
            arr = new int[ms];
            for(int i=0;i<cs;i++)
            {
                arr[i]=oldarr[i];

            }
            delete [] oldarr;
        }
        arr[cs]=d;
        cs++;
    }
    void pop_back()
    {
        if(cs>=0)
        {
            cs--;
        }

    }
    bool isempty()
    {
        return cs==0;
    }
    int front() const
    {
        return arr[0];
    }
    int back()
    {
        return arr[cs-1];
    }
    int at(int i) const
    {
        return arr[i];
    }
    int operator[](int i)
    {
        return arr[i];
    }
    int size() const
    {
        return cs;

    }
    int capacity()
    {
        return ms;
    }
};

int main()

{
    Vector v;

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