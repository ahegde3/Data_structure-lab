#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class pallindrome
{
    int top,st[10];
public:
       pallindrome()
       {
           top=-1;
       }
        void push(char);
        char pop();
};
void pallindrome::push(char a)
{
    if(top==10)
        cout<<"stack is full"<<endl;
    else
    { top++;
    st[top]=a;
    }
}
char pallindrome::pop()
 { if(top==-1)
   cout<<"stack is empty"<<endl;
   else
   { top--;
   return st[top+1];
   }
}
 int main()
 { pallindrome ob;
     char a[20];
     cout<<"enter a string"<<endl;
     gets(a);
     int n=strlen(a);
     for(int i=0;i<n;i++)
        ob.push(a[i]);
     for(int j=0;j<n;j++)
     { if(ob.pop()!=a[j])
        {cout<<"Not a pallindrome"<<endl;
         break;
        }         if (j==n-1)
            cout<<"Its a pallindrome"<<endl;
     }

 }

