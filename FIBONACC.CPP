#include<iostream.h>
void main()
{
 int n,sum=0,a=1,b;
 cout<<"enter no.of terms"<<endl;
 cin>>n;
 while(n!=0)
 {
 cout<<sum<<endl;
 b=sum;
 sum=sum+a;
 a=b;
 n=n-1;
}
int d;
cin>>d;
 }