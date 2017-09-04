#include<iostream>
#include<String.h>
using namespace std;
class matching
{
    int top;
    char st[10];
  public:
         matching()
         {
             top=-1;
         }
         void push(char a)
         {
             if(top==10)
              cout<<"stack is full"<<endl;
             else
             { top++;
               st[top]=a;
             }
        }
        char pop()
        { if(top==-1)
          cout<<"stack is empty"<<endl;
          else
             { top--;
               return st[top+1];
              }
        }
};
int main()
{ matching t;
 char ex[50];
 int count=0,opcurl=0,opstr=0;
 cout<<"enter an expression"<<endl;
 cin>>ex;
 for(int i=0;i<strlen(ex);i++)
    { if(ex[i]=='{' ||ex[i]=='}'||ex[i]=='[' || ex[i]==']')
        {t.push(ex[i]);
         count++; }

    }
  for(int j=0;j<count;j++)
  {    char c=t.pop();
      if(c=='{')
      opcurl++;
      if(c=='}')
      opcurl--;
      if(c=='[')
      opstr++;
      if(c==']')
      opstr--;
  }
  if (opcurl==0 && opstr==0)
   cout<<"expression complete"<<endl;
   else
   cout<<"incomplete expression"<<endl;
}


