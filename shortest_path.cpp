#include<iostream>
using namespace std;

int main()
{
    char direction[1000];

    cin.getline(direction,1000);

    int x=0,y=0;
    for(int i=0;direction[i]!='\0';i++)
    {
        switch(direction[i])
        {
            case 'N':
            {
                y++;
                break;
            }
            case 'E':
            {
                x++;
                break;
            }
            case 'S':
            {
                y--;
                break;
            }
            case 'W':
            {
                x--;
                break;
            }

        }
    }
    cout<<x<<","<<y;
    if(x>=0 && y>=0)
    {
        while(y--)
        {
            cout<<'N';
        }
        while(x--)
        {
            cout<<'E';
        }
    }
    if(x<=0 &&  y>=0)
    {
        while(x++)
        {
            cout<<"W";
        }
        while(y--)
        {
            cout<<'N';
        }
    }
    return 0;
}