#include<iostream.h>
int main()
{
 int n,a[50];
 cout<<"enter length"<<endl;
 cin>>n;
 for(int l=0;l<n;l++)
 cin>>a[l];
 for(int i=0;i<n;i++)
 {int small=a[i];
 for(int j=i+1;j<n;j++)
  { if(small>a[j])
   {  int t=small=a[j];
       a[j]=a[i];
       a[i]=t;
       }
       }
       }
       for(int k=0;k<n;k++)
       cout<<a[k]<<" ";
       int m;
       cin>>m;
       return 0;
       }
