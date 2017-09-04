#include<iostream.h>
#include<conio.h>

class Posteval
{
  int s[50];
  int top;
  public:

  Posteval()
  {
    top=-1;
  }
  void push(int ele)
  {
    if(top==49)
    {
      cout<<"stack overflow";
      return;
    }
    s[++top]=ele;
  }

  int pop()
  {
   if(top==-1)
   {
     cout<<"stack empty";
     return -1;
   }
   return s[top--];
  }

  void postevaluation()
  {
   int index=0,op1,op2;
   char pfix[50],token;
   cout<<"enter the postfix expression";
   cin>>pfix;
   while(pfix[index]!='\0')
   {
     token=pfix[index];
     if(token>=48 && token<=57)
       push(pfix[index]-'0');
     else if(token=='+'|| token=='-'|| token=='*'||
      token=='/'|| token=='%'||token=='^')
     {
       op2=pop();
       op1=pop();
       switch(token)
       {
	case '+':push(op1+op2);break;
	case '-':push(op1-op2);break;
	case '*':push(op1*op2);break;
	case '/':push(op1/op2);break;
	case '%':push(op1%op2);break;
       }

     }

     else
     {
       int val;
       cout<<"enter the value for "<<token<<" : " ;
       cin>>val;
       push(val);
     }
     index++;
   }
   cout<<"the result is: "<<pop();
  }
};

void main()
{
  clrscr();
  Posteval obj;
  obj.postevaluation();
  getch();
}