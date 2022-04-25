#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int total(vector <int> marks)
{
    return marks[0];
}

bool compare(pair<string,vector<int>> s1, pair<string,vector<int>> s2)
{
    vector <int> m1 = s1.second;
    vector <int> m2 = s2.second;

    return m2>m1;
}

int main()
{
    vector<pair<string,vector<int>>> fruits = {
                                    {"Mango",{100}},
                                    {"Guava",{70}},
                                    {"Grapes",{40}},
                                    {"Apple",{60}},
                                    {"Banana",{30}}
    };

    sort(fruits.begin(),fruits.end(),compare);

    for(auto s : fruits)
    {
        cout<<s.first<<" "<<total(s.second);
    }
    return 0;
}