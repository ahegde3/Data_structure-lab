#include<iostream.h>
 class mul_stack
 { int top[4],last[4],st[10],n;
  public: mul_stack()
       { top[1]=last[0]=-1;
	for(int i=1;i<=3;i++)
	{  last[i]=(i*(max-2))/2;
	  if(i>3)
	  top[i+1]=last[i];
	}
	void push(int item)
	{ cout<<"which stack to use"<<endl;

	cin>>n;
	if(top[n]==last[n])
	cout<<"stack full"<<endl;
	else
	{ top[n]++;
	st[top[n]]=item;
	}
	}
	void pop()
	{ cout<<"whuich stack to pop"_
	  cin>>n;
	  if(top[n]==last[n-1])
	  cout<<"stack is empty"<<endl;
	  else
	  top--;
	}
	void display()
	{ cout<<"which stack to access"<<endl;
	cin>>n;
	int l=top[n];
	for(int i=l;i>0;i--)
	cout<<st[i];
	}
 };
   int main()
   { mul_stack t;
   int ans='y';
   while(ans=='y')
   { int choice;
   cout<<"0-push,1-pop,2-display"<<endl;
   cin>>choice;
   switch(choice)
   {
   case 0:int k;
	  cout<<"no.to enter"<<endl;
	  cin>>k;
	  t.push(k);
	  break;
   case 1:t.pop();
	  break;
   case 3:t.display()
	   break;
  default:cout<<"invalid"<<endl;
  }
  cout<<"(y/n"<<endl;
  cin>>ans;
  }
  return 0;
  }