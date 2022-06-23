#include<iostream>
using namespace std;


void find_sub(char *input,char *output,int i,int j)
{
    //base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        if(output[0]=='\0')
        {
            cout<<"NULL";
        }
        cout<<output<<endl;
        return;

    }
    //rec case
    output[j]=input[i];
    find_sub(input,output,i+1,j+1);
    find_sub(input,output,i+1,j);
}

int main()
{
    char input[100];
    char output[100];

    cin>>input;
    find_sub(input,output,0,0);

    return 0;
}