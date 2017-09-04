#include<iostream.h>
#include<string.h>
#define max 30
class postfix
{  char st[30],prefix[30];
    int top;
	public:
	       postfix()
		   {top=-1;}
		   void push(char a)
		   { if (top==max)
			   { cout<<"stack overflow"<<endl;}
			  else
			   { 	top++;
				  st[top]=a;
		        }
		   }
            char pop()
        	{ if(top==-1)
					return 'o';
			 else
					top--;
				    return st[top+1];
			}
            convert(char infix[])
            { char sym;
              for(int i=0;i<strlen(infix);i++)
			  { char sym=infix[i];
				switch(sym)
				{case '(': push(sym);
				           break;
	             case ')':while(char c=pop()!='(')
				          { prefix=c;}
					       break;
				default:{ if(prec(sym)>prec(st[top))
					          push(sym);
						  else if(prec(sym)<=prec(st[top])
						        { while(prec(sym)<=prec[st[top])
									{  prefix=pop();}
								       push(sym);
								}  break;
				        } 
				}
			 }   if(!isempty())
			     {while(!isempty())
					   prefix=pop();}	
            }
             int prec(char sym)
             { switch(sym)
				 { case '*':
					case '/':return 3;
					case '+':
					case '-':return 2;
					case '('
					case ')':return 1;
					default:return 0;
				}		
			}
             int isempty()
			 { if(top==-1)
                return 1;
				else
					return 0;
			 }
			 void display()
			 {for(int i=0;i<strlen(prefix);i++)
				 cout<<prefix[i];\
			 }
};
int main()
{postfix t;
 char infix[20];
cout<<"enter an expression"<<endl;
cin>>infix;
t.convert(infix);
t.display(); 
}