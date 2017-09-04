#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{

int n,a[50];
cout<<"enter length"<<endl;
cin>>n;
for(int l=0;l<n;l++)
cin>>a[l];
for(int i=0;i<n;i++)
{ int test=a[i];
 for(int j=i+1;j<n;j++)
  { if (test>a[j])
   { int t=test=a[j];
	a[j]=a[i];
	a[i]=t;
	}}}
	for(int k=0;k<n;k++)
	cout<<a[k]<<" ";
	int m;
	cin>>m;
	}