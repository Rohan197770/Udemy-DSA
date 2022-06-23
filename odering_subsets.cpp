#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;//lexographical
    }
    return a.length()<b.length();
}



void order_subsets(char *input,char *output,int i, int j,vector <string> &list)
{

    //base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        string temp(output);
        list.push_back(temp);
        return ;
    }

    output[j]=input[i];
    order_subsets(input,output,i+1,j+1,list);
    order_subsets(input,output,i+1,j,list);


}

int main()
{
    char input[100];
    char output[100];

    cin>>input;
    vector <string> list;
    order_subsets(input,output,0,0,list);

    sort(list.begin(),list.end(),compare);

    for(auto s: list)
    {
        cout<<s<<",";
    }

    return 0;
}