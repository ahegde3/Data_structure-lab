#include<iostream>
#include<stdio.h>
using namespace std;
 class student
 {
     int roll,b[50];
     char grade,name[50];
 public:
    void read(student a[],int n)
    {  for(int i=0;i<n;i++)
     {cout<<"enter name"<<endl;
        cin>>a[i].name;
        cout<<"enter roll no"<<endl;
        cin>>a[i].roll;
        cout<<"enter grade"<<endl;
        cin>>a[i].grade;
    }
    }
    void sort(student a[],int n)
    { for(int l=0;l<n;l++)
    {  b[l]=a[l].roll;

    }
        int item,loc;
         for(int j=0;j<n;j++)
      { item=b[j];
       for(int k=j+1;k<n;k++)
        { if(item>b[k])
          { item=b[k];
           loc=k;
          }
        } int t=b[j];
         b[j]=b[loc];
         b[loc]=t;
      }
    }
    void display(student a[],int n)
    {
        for(int i=0;i<n;i++)
        { for(int m=0;m<n;m++)
        { if(b[i]==a[m].roll)
         {  puts(a[m].name);
         cout<<a[m].roll<<endl;
         cout<<a[m].grade<<endl;

         }

        } }}

 };
 int main()
 {
     student b,a[50];
     cout<<"enter no. of student"<<endl;
     int n;
     cin>>n;
     b.read(a,n);
     b.sort(a,n);
     b.display(a,n);
     return 0;

 }
