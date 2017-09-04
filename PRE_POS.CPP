#include<iostream.h>
#include<conio.h>
#include<string.h>

class Stack{
   int top;
   char s[20];
   public:
   Stack(){
   top = -1;
   }
   void push(char x)
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
   char pop()
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
   void disp();
   void pretopos(char *prefix);
 };
 void Stack :: disp()
 {
	for(int i=0;i<=top-1;i++)
		cout<<s[i]<<" ";
	cout<<"\n";
 }
 void Stack :: pretopos(char *prefix)
 { char postfix[20];
   int k=0;
   strrev(prefix);
   for(int i=0; prefix[i]!='\0'; i++)
   {
      if(prefix[i] >= 'a' && prefix[i] <='z')
      {
	push(prefix[i]);
      }
      else
      { if(k==0){
	postfix[k++] = pop();
	}
	postfix[k++] = pop();
	postfix[k++] = prefix[i];
      }
   }
   while(!empty())
   {
     postfix[k++] = pop();
   }
   postfix[k] = '\0';
   cout<<postfix<<"\n";
 }
 void main()
 {
   char prefix[20];
   clrscr();
   cout<<"Enter the prefix Expression\n";
   cin>>prefix;
   Stack a;
   a.pretopos(prefix);
   getch();
 }