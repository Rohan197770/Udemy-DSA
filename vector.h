
template<typename T>
class Vector
{
    T *arr;
    int cs;
    int ms;

    public:

    Vector(int max_size=1)
    {
         cs=0;
        ms=max_size;
        arr =new T[ms];
    }
    void push_back(T d)
    {
        if(cs==ms)
        {
            T *oldarr =arr;
            ms =2*ms;
            arr = new T[ms];
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
    T front() const
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs-1];
    }
    T at(int i) const
    {
        return arr[i];
    }
    T operator[](int i)
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