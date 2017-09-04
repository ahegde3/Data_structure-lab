#include<iostream>
using namespace std;
int main()
{
  int a[50],n,elem;
  cout<<"enter no of element"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<"element to be searched"<<endl;
  cin>>elem;
  int beg=0,end=n;
  int mid=(beg+end)/2;
  while(elem!=a[mid])
  { if(elem>a[mid])
     {beg =mid;
      mid=(beg+end)/2;
      }
      else
      { end=mid;
      mid=(beg+end)/2;
      }
      }
      cout<<"found at position:"<<mid+1;
      }



