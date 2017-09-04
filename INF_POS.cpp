#include<iostream>
#include<strings.h>
#include<stdio.h>

using namespace std;
class stack{

char s[40];
int top=-1;
public:
void push(char);
char pop();
void if_to_pf(char infix[]);
int preceed(char ch);
void display()
{
  int i;
    if(top==-1)
        cout<<"stack empty \n";
    else
    {
        for(i=0;i<=top;i++)
        {
            cout<<"\n"<<s[i];
        }
    }
}

};
void stack::if_to_pf(char infix[])
{
    int length;
    int index=0,pos=0;
    char symbol,temp;
    char postfix[40];
    length=strlen(infix);
    push('#');
    while(index<length)
    {
        symbol=infix[index];

        switch(symbol)
        {
            case '(':push(symbol);

                     break;
            case ')':temp=pop();
                     while(temp!='(')
                     {
                         postfix[pos]=temp;
                         pos++;
                         temp=pop();
                     }
                        break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                        while((preceed(s[top]))>=(preceed(symbol))&&(top!=-1))
                        {
                            temp=pop();
                            postfix[pos]=temp;
                            pos++;
                        }
                        push(symbol);
                        break;



            default: postfix[pos++]=symbol;



        }
        index++;
    }
        while(top>0)
        {
            temp=pop();
            postfix[pos++]=temp;
        }
        postfix[pos++]='\0';
       cout<<"the postfix expression is"<<endl<<postfix;


}

int stack::preceed(char ch){
if(ch=='/'||ch=='*'||ch=='%')
    return(5);
else if(ch=='+'||ch=='-')
    return 4;
else
    return(3);
}
void stack::push(char a)
{
    s[++top]=a;

}

char stack::pop()
{

        char d=s[top--];
        return d;

}


int main()
{
    char infix[40];
    cout<<"enter the infix expression \n";
    cin>>infix;
    stack obj;
    obj.if_to_pf(infix);
    return 0;
}
