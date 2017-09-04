#include <iostream.h>
#include <conio.h>

class time
{
int hour, minute,second;
public:
 time()
 {
   hour=0;
   minute=0;
   second=0;
 }
 time add( time, time);
 time difference( time, time);
 void read()
 {
 cout<<" enter time hh mm ss\n";
 cin>> hour>>minute>>second;
 }

 void display()
 {
 cout<<"time:";
 cout<<hour<<":"<<minute<<":"<<second;
 }
 } c;

  time time::add(time a, time b)
 {    int temp;
       c.second= a.second+ b.second;
       temp=c.second;
       if(c.second>=60)
       {    c.second=c.second%60;
	    c.minute+=temp/60;
       }
      c.minute+=(a.minute+ b.minute);
      temp=c.minute;
      if(c.minute>=60)
      {
	 c.minute=c.minute%60;
	 c.hour+=temp/60;
      }
      c.hour+=a.hour+b.hour;
 return c;
 }
 time time:: difference ( time a, time b)
 {
  int t1, t2,t;
  t1=a.hour*3600 + a.minute*60 + a.second;
  t2=b.hour*3600 + b.minute*60 + b.second;
  t=t2-t1;
  if(t<0) t*=(-1);
  if(c.hour> 3600) t=t/3600;
 else  c.hour=0;
  c.minute=t/60;
  c.second=t%60;
 return c;
 }


 int main()
 {
 clrscr();
 time t1,t2;
 cout<<"enter the two times";
 t1.read();
 t2.read();
 c.add(t1, t2);
 c.display();
 c.difference(t1,t2);
 c.display();
 getch();
 return 0;
 }