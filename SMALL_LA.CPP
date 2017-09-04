#include<iostream.h>
void smallest(int,int,int);
void largest(int,int,int);
int main()
{
 int a,b,c;
 cout<<"ENTER 3 NUMBER"<<endl;
 cin>>a>>b>>c;
 smallest(a,b,c);
largest(a,b,c);
 int d;
 cin>>d;
   return 0;

 }
 void smallest(int a,int b,int c)
 { if(a<b)
   { if (a<c)
      cout<<"smallest no.is:"<<a<<endl;
      else
      cout<<"smallest no. is:"<<c<<endl;
      }
    else if (b<c)
       cout<<"smallest no. is:"<<b<<endl;
       else
	   cout<<"smallest no.is :"<<c<<endl;
  }
  void largest(int a,int b,int c)
  {if ( a>b)
  {if (a>c)
     cout<<"largest no:"<<a<<endl;
     else
     cout<<"largest  no :"<<c<<endl;
     }
     else if(b>c)
      cout<<"largest is :"<<b<<endl;
      else
       cout<<"largest is :"<<c<<endl;
       }