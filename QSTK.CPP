#include<iostream.h>
#include<conio.h>

class Stack{
   int top;
   int s[20];
   public:
   Stack(){
   top = -1;
   }
   void push(int x)
   {
     if(full())
     {
       cout<<"overflow\n";
     }
     else
     {
       s[++top] = x;
     }
   }
   int pop()
   {
     if(empty())
     {
       cout<<"empty\n";
       return -99999;
     }
     else
     {
      return s[top--];
     }
   }
   int empty()
   {
     if(top==-1)
     return 1;
     return 0;
   }
   int full(){
     if(top==19)
     return 1;
     return 0;
   }
   void disp1();
   void disp2();
 };
 void Stack :: disp1()
 { if(!empty()){
   for(int i=top ; i>-1 ;i--)
   {
      cout<<s[i]<<" ";
   }
  }
 }
 void Stack :: disp2()
 { if(!empty()){
   for(int i=0; i<=top;i++)
   {
    cout<<s[i]<<" ";
   }
  }
 }
 void main()
 {
    Stack s1,s2;
    int n,ele;
    clrscr();
    do{
    cout<<"1.push 2.Pop 3.disp 4.exit:  ";
    cin>>n;
    switch(n)
    {
    case 1:
    cout<<"Enter element:  ";
    cin>>ele;
    s1.push(ele);
    break;
    case 2:
    if(!s2.empty())
    {
      cout<<s2.pop()<<" was popped\n";
    }
    else
    {
      if(!s1.empty())
      {
	while(!s1.empty())
	{
	  s2.push(s1.pop());
	}
       cout<<s2.pop()<<" was popped\n";
      }
      else
      {
	cout<<"empty queue \n";
      }
    }
    break;
    case 3:
    s2.disp1();
    s1.disp2();
    cout<<"\n";
    break;
    case 4:
    break;
   }
  }while(n!=4);
  getch();
 }



