#include<iostream.h>
int main()
{
 int sum=0,a=1,b;
 cout<<"last term of series"<<endl;
 int n;
 cin>>n;
 while(sum!=n)
{cout<<sum<<endl;
 b=sum;
 sum=sum+a;
 a=b;
 }
 int k;
 cin>>k;
 return 0;
 }