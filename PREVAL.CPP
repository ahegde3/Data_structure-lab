#include<iostream.h>
#include<conio.h>
#include<string.h>

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
    void preval(char *prefix);
 };
  void Stack :: preval(char *prefix)
  {
     strrev(prefix);


     for(int i=0;prefix[i]!='\0';i++)
     {
       if(prefix[i] >= '1' && prefix[i] <= '9')
       {
	 int k = prefix[i]-'0';
	 push(k);
       }
       else
       {
	 int a1 = pop();
	 int a2 = pop();
	 switch(prefix[i])
	 {
	   case '+':
	   push(a1+a2);
	   break;
	   case '-':
	   push(a1-a2);
	   break;
	   case '*':
	   push(a1*a2);
	   break;
	   case '/':
	   push(a1/a2);
	   break;
	 }
       }
   }
   cout<<pop();
  }
  void main()
  {
    cout<<"Enter the prefix expression\n";
    char prefix[20];
    clrscr();
    cin>>prefix;
    Stack s;
    s.preval(prefix);
    getch();
  }