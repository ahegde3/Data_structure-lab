#include<iostream.h>
#include<conio.h>
#include<string.h>
class Stack{
char s[100][100];
char pfix[100];
int top;
public:
Stack()
{
	top = -1;
}
void push(char ele[])
{
   strcpy(s[++top],ele);
}
char* pop()
{
 return s[top--];
}
void pretoinf();
};
void Stack :: pretoinf()
{ int i=0;
  cout<<"enter prefix expression"<<"\n";
  cin>>pfix;
  strrev(pfix);
  char sym[2];
  char op1[10],op2[10],res[10];
  while(pfix[i]!='\0')
  {
    sym[0]=pfix[i];
    sym[1]='\0';
   if(sym[0]=='+'|| sym[0]=='-' || sym[0]=='*' || sym[0]=='/')
	{
	   strcpy(op1,pop());
	   strcpy(op2,pop());
	   strcpy(res,"(");
	   strcat(res,op1);
	   strcat(res,sym);
	   strcat(res,op2);
	   strcat(res,")");
	   push(res);
	}
	else
	{
	 push(sym);
	}
      i++;
   }
	 char *a = pop();
	 cout<<a;
}
int main()
{
 clrscr();
 Stack s;
 s.pretoinf();
 getch();
 return 0;
}