#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int totalmarks(vector <int> marks)
{
  return marks[0]+marks[1]+marks[2];
}

bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2)
{
    vector <int> m1= s1.second;
    vector <int> m2 = s2.second;

    return totalmarks(m1)>totalmarks(m2);

}

int main()
{

    vector<pair<string,vector<int> > > student_marks ={
               {"Rohan",{12,17,30}},
               {"Giridhar",{17,11,2}},
               {"Amrendra",{11,7,6}},
               {"Abishek",{13,34,56}}
    };

    sort(student_marks.begin(),student_marks.end(),compare);

    for(auto s: student_marks)
    {
        cout<<s.first<<" "<<totalmarks(s.second);
    }
    return 0;

}