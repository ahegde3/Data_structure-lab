#include<iostream.h>
#include<stdio.h>



int main()
{
	char str1[10],str2[10];
	int i ,j ,k,pos,m=0,n=0,match=0;
	cout<<"enter main string\n";
	gets(str1);
	cout<<"enter substring you want to delete\n";
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		m++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		n++;
	}
	i=0;
	while(i<m && match==0)
	{

		if(str1[i]==str2[0])
		{

			pos=i+1;
			k=i+1;
			j=1;
			match=1;
			while(j<n && match==1)
			{

				if(str2[j]==str1[k])
				{

					j++;
					k++;
					match=1;


				}
				else
				{

					match=0;
				}
			}
		}
		else
		{

			match=0;
		}
		i++;
	}

	if(match==1)
	{
    	for(i=pos-1;i<m;i++)
     	{
	     	str1[i]=str1[i+n];
        	}
	cout<<"the string after deletion is\n";
	puts(str1);
	}

else
cout<<"substring no found\n";
return 0;

}
