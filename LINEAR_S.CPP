#include<iostream.h>
#include<conio.h>

void main(){
clrscr()   ;
int a[25],n,b;
cout<<"enter length of array"<<endl;
cin>>n;
cout<<"enter an array"<<endl;
for(int i=0;i<n;i++)
{cin>>a[i]; }
cout<<"enter no.to be searched"<<endl;
cin>>b;
for(int j=0;j<n;j++)
{ if(b==a[j])
  { cout<<"element found at"<<j+1;
    break;
    }
    if(j==n-1)
    {cout<<"element not present in array"<<endl;
    }
    }
    int k;
    cin>>k;
    }

