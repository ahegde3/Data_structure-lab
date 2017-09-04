#include<iostream.h>
int Max=20;
class queue
{ int f,r,q[Max];
 public:
	queue()
	{f=r=-1;
	}
	void insert(int a)
	{if(r==Max-1)
	   cout<<"queue is full"<<endl;
	 else
	 { r++;
	   q[r]=a;
	 }
	 }
	 void del()
	 { if (r==f)
	       cout<<"queue is empty"<<endl;
	   else
	     f++;
	 }
	 void display()
	 { if(r==f)
	      cout<<"queue is empty"<<endl;
	   else
	   { for(int i=f+1;i<=r;i++)
		cout<<q[i]<<" ";
	   }
	 }
 };
 int main()
 { queue t;
   char an='y';
   while(an=='y')
   { cout<<"enter 0-insert"<<endl<<"1-delete"<<endl<<"3-display"<<endl;\
    int choice;
    cin>>choice;
    switch(choice)
    {case 0: int c;
	    cout<<"enter no.to insert"<<endl;
	    cin>>c;
	    t.insert(c);
	    break;
     case 1:t.del();
	    break;
     case 3:t.display();
	    break;
     default:cout<<"invalid"<<endl;
	     break;
    }
    cout<<"enter  (y/n) to continue"<<endl;
    cin>>an;
    }
    return 0;
  }
