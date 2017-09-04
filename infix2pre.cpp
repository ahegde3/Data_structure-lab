#include<iostream>
#include<string.h>
#define max 30
using namespace std;
class prefix
{           char st[30],prfix[30];
            int top;
public:     prefix()
            {
            top=-1;
             }
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
			 int prec(char sym)
	             { switch(sym)
				 { case '*':
					case '/':return 3;
					case '+':
					case '-':return 2;
					case '(':
					case ')':return 1;
					default:return 0;
				}
	            }
	            int isZero(char a)
	            {
	                if(a=='+'||a=='-'||a=='*'||a=='/'||a=='('||a==')')
	                    return 0;
	                    else return 1;
	            }
			void convert(char infix[])
			{   int j=0;
			    strrev(infix);
			    push('#');
			    for(int i=0;i<strlen(infix);i++)
			       { char sym=infix[i];
			        if(isZero(sym))
			         {prfix[j]=sym;
			           j++;
			           continue;}
                    else {
                        if(sym==')')
                        {push(sym);
                         continue;
                         if(sym=='(')
                            { while(st[top]!=')')
                                 {prfix[j]=pop();
                                 j++;}
                                 pop();
                                 continue;}
                            }
                         if(prec(sym)<prec(st[top]))
                         {   push(sym);
                             continue;
                        }
                            if(prec(sym)>=prec(st[top]))
                            	{ while(prec(sym)>=prec(st[top]))
                            	      prfix[j]=pop();
                            	      j++;
                            	}
                            	 push(sym);
                            	}}
                            	while(st[top]!='#')
                                {  prfix[j]=pop();
                            	   j++;
			                     }
			                    }
			                     void display()
			                   {for(int i=0;i<strlen(prfix);i++)
			                   	 cout<<prfix[i];\
			                    }

};
int main()
{prefix t;
 char infix[20];
cout<<"enter an expression"<<endl;
cin>>infix;
t.convert(infix);
t.display();
return 0;
}
