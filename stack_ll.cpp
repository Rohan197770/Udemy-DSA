#include<iostream>
#include"stackll.h"
using namespace std;


// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };

// class stack
// {
//     node* head;
//     public:
//     stack()
//     {
//         head=NULL;
//     }
//     void push(int data)
//     {
//         node* n= new node(data);
//         n->next=head;
//         head=n;
//     }
//     bool empty()
//     {
//         return head==NULL;
//     }
//     int top()
//     {
//        return head->data;
//     }
//     void pop()
//     {
//         if(head!=NULL)
//         {
//             node* temp=head;
//             head=head->next;
//             delete head;
//         }
//     }
// };

int main()
{
  Stack<char> s;
  s.push('r');
  s.push('o');
  s.push('h');
  s.push('a');
  s.push('n');

  while(!s.empty())
  {
      cout<<s.top()<<endl;
      s.pop();
  }

  return 0;
}
