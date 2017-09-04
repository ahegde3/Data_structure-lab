#include<iostream>
#include<string.h>
#define max 50
using namespace std;
class PrefixStack
{
    char expr[50];
    int top;
    public:
    PrefixStack()
    {
        top = -1;
    }
    void push(char argv)
    {
        if(top == max-1)
        {
            cout<<"Stack full.Overflow";
            return;
        }
        expr[++top] = argv;
    }
    char pop()
    {
        if(top == -1)
        {
            cout<<"underflow";
            return '.';
        }
        return expr[top--];
    }
    char readtopchar()
    {
        return expr[top];
    }
};
int getprefer(char argc)
{
    switch (argc)
    {
        case '+':
        case '-':
            return 2;
        case '/':
        case '*':
            return 3;
        case '(':
            return 1;
        case ')':
            return 0;
        default:
            return -1;
    }
}
void strrev(char arr[])
{
    int l = strlen(arr);
    char dummy[50];
    int i;
    for(i = 0;i < l;i++)
    {
        dummy[i] = arr[l-i-1];
    }
    dummy[l] = '\n';
    strcpy(arr,dummy);
    
}

int main()
{
    char infixstr[50];
    char prefixstr[50];
    int k=0;
    PrefixStack obj;
    int i,pref;
    cout<<"Enter infix expression:";
    cin>>infixstr;
    strrev(infixstr);

     for(i = 0;i < strlen(infixstr);i++)
    {
        if(getprefer(infixstr[i]) == 0) //check for ) right paranthesis
            obj.push(infixstr[i]);
        
        else if(getprefer(infixstr[i]) == 1) //check for left paranthesis (
        {
            while(obj.readtopchar() != ')')
            {
                prefixstr[k++] = obj.pop();
            }
            obj.pop();
        }
        else if(getprefer(infixstr[i]) == 3 || getprefer(infixstr[i]) == 2)
        {
            pref = getprefer(obj.readtopchar());
            if(getprefer(infixstr[i]) >= pref)
            {
                obj.push(infixstr[i]);
            }
            else
            {
                prefixstr[k++] = obj.pop();
                obj.push(infixstr[i]);
            }
        }
        else
            prefixstr[k++] = infixstr[i];
    }
    prefixstr[k] = '\0';
    strrev(prefixstr);
    cout<<"\n"<<prefixstr<<endl;
    return 0;
}


