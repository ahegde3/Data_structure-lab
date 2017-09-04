#include<iostream.h>
#include<conio.h>
#include<string.h>

class Potoinf
{
  int top;
  char s[50][50],infix[50],res[50];
  public:
  Potoinf()
  {
    top=-1;
  }

  void push(char ele[])
  {
    if(top==49)
    {
     cout<<"stack overflow";
     return;
    }
    top++;
    strcpy(s[top],ele);
  }

  char* pop()
  {
    if(top==-1)
    {
      cout<<"stack empty";
      return "x";
    }
    return(s[top--]);
  }

  void ptoinf()
  {
    int count=0;
    char sym[2],pfix[50],op1[20],op2[20];
    cout<<"enter the postfix expression";
    cin>>pfix;
    while(pfix[count]!='\0')
   {
      sym[0]=pfix[count];
      sym[1]='\0';

    if(sym[0]=='+'||sym[0]=='-'||sym[0]=='*'||sym[0]=='/'||sym[0]=='%')
    {
      strcpy(op2,pop());
      strcpy(op1,pop());
      strcpy(res,"(");
      strcat(res,op1);
      strcat(res,sym);
      strcat(res,op2);
      strcat(res,")");
      push(res);
    }
    else
     push(sym);
     count++;
   }
   strcpy(infix,pop());
   cout<<"Infix expression is : " <<infix;
  }
};

void main()
{
  clrscr();
  Potoinf obj;
  obj.ptoinf();
  getch();
}