#include<iostream.h>
#include<Math.h>
void main()
{
 int a,b,c;
 cout<<"Quadratic equation of form ax^2+bx+c"<<endl;
 cout<<"give values of a,b and c"<<endl;
 cin>>a>>b>>c;
 float dis=sqrt(b*b-4*a*c);
 cout<<dis;
 if (dis>0)
    {
     float r1,r2;
     r1=(-b+dis)/(2*a);
     r2=(-b-dis)/(2*a);
     cout<<"roots are"<<r1<<"  &"<<r2;

     }
  else if (dis<0)
   {
   cout<<"real root doesnt exist"<<endl;

   }
   else
   {cout<<"root is "<<-b/(2*a)<<endl;

   }


 int d;
 cin>>d;
 }