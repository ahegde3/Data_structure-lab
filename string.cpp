#include<iostream>
#include<stdio.h>
using namespace std;
int length(char a[]);
void con(char a[],char b[]);
int compare_strings(char a[],char b[]);
int main()
{
char a[50],b[50];
int c;
cout<<"enter 1 to find length"<<endl<<"enter 2 to join two string"<<endl<<"enter 3 to compare two string"<<endl<<"enter 4 to insert a substring"<<endl<<"enter 5 to delete a subtring"<<endl<<"enter 6 to search a substring"<<endl;
cin>> c;
switch(c)
{ case 1:{
gets(a);
cout<<length(a)<<endl;
break;}
case 2:{ cin>>a;
cin>>b;
con(a,b);
break; }
case 3:{ gets(a);
cin>>b;;
int flag = compare_strings(a, b);

   if (flag == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");

}
case 4:{cin>>a;
        cin>>b;
        cout<<"enter position of after which string to be inserted"<<endl;
        char ans[100];
        int i,u,t,n;
        cin>>n;
        n;
        if(n>length(a))
        {
          cout<<"Position is Out of the String bound \n Insert failed"<<endl;
          break;
        }
        for(i=0;i<n;++i)
        {
                ans[i]=a[i];
        }
        for(i=0;i<length(b);++i)
        {
                t=n+i;
                ans[t]=b[i];
        }
        u=n+length(b);
        for(i=n;i<length(a);++i)
        {
                ans[u]=a[i];
                ++u;
        }
        ans[length(a)+length(b)]='\0';
        cout<<"New string is :";
        puts(ans);
        break;
}
case 5:{       char s[100];
           cin>>a;
        int i,l,r,c;
        cout<<"enter position of deletion"<<endl;
        cin>>r;
        r--;
        cout<<"enter no.of char to delete"<<endl;
        cin>>c;
        for(l=0;a[l]!='\0';l++);          //finding the size of main string
        if((r+c)>l)
        cout<<"deletion  is running out of given string\nso deletion impossible";
        else
        {
                for(i=0;i<r;++i)
                s[i]=a[i];
                for(i=(r+c);i<l;++i,++r)
                s[r]=a[i];
                s[l-c]='\0';
        }
        cout<<"string after deletion :"<<s;
        break;
}
case 6:{ gets(a);
   cin>>b;
int i,j,temp;
  for(i=0;a[i]!='\0';i++)
    {
        j=0;
        if(a[i]==b[j])
        {
            temp=i+1;
            while(a[i]==b[j])
            {
                i++;
                j++;
            }

            if(b[j]=='\0')
            {
                cout<<"the substring is present in position"<<temp;
                break;
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }

    if(temp==0)
        printf("The substring is not present in given string\n");
        break; }

}}

 int length(char a[])
 { int i=0;
  while(a[i]!='\0')
   i++;
   return i;
 }
 void con(char a[],char b[])
 {   char c[50];
    int i,j;
 for( i=0;a[i]!='\0';++i)
        c[i]=a[i];

    for( j=0;b[j]!='\0';++j)
        c[i+j]=b[j];
        c[i+j]='\0';
        cout<<"new string is"<<endl;
        puts(c);

 }
int compare_strings(char a[], char b[])
{
   int c = 0;

   while (a[c] == b[c]) {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }

   if (a[c] == '\0' && b[c] == '\0')
      return 0;
   else
      return -1;
}
