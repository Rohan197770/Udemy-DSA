#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int n;
  cin>>n;
   cin.get();// consume the \n element

  char sentence[1000];
  char largest[1000];

 int length=0;
  while(n--)
  {
    cin.getline(sentence,1000);
    int len = strlen(sentence);

    if(len>length)
    {
        length =len;
        strcpy(largest,sentence);

    }

  }
  cout<<"largest string is"<<largest;
  return 0;
}