#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;


int compare(pair<int,int> s1,pair<int,int> s2)
{
    int m1= s1.first;
    int m2= s1.second;

    int c= m1*m1+ m2*m2;
    return c;
    
}

int main()
{
    vector<pair<int,int> > cabs ={{2,3},{1,2},{3,4},{2,4},{1,4}};

    sort(cabs.begin(),cabs.end());

    for (auto i :cabs)
    {
        if(i.first +i.second = ) 
    }

    for(auto s: cabs)
    {
        cout<<s.first<<","<<s.second<<endl;
    }
    return 0;


}