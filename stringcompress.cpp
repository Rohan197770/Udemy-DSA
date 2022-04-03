#include<iostream>
#include<cstring>

using namespace std;

string compressstring(string str)
{
    int n;
    n= str.length();

    string output;

    for(int i=0;i<n;i++)
    {
        int count =1;

        while(i<n-1 && str[i+1]==str[i])
        {
                count++;
                i++;
        }
        output= output+ str[i];
        output =output+ to_string(count);
    }

    if(output.length()>str.length())
    {
        return str;
    }
    else
    {
        return output;
    }
}

int main()
{
   string s;
   getline(cin,s);

  cout<< compressstring(s);
    return 0;
}