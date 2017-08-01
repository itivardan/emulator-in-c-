#include<string.h>
#include"convertor4.h"

string convert123(unsigned short val)
{
	int g,i=0,j,k;
	 char temp,a[10];
	 string str;
	while(val>0)
	{
		g=val%16;
		val=val/16;
		a[i++]=(convert4(g)); 
	}
	a[i]='\0';
str=	(string(a));
for(k=0;str[k]!='\0';k++)
{
}
j=k;int h;
for(int u=0, h=j-1;u<j/2;u++,h--)
{
	temp=str[u];
	str[u]=str[h];
	str[h]=temp;
}
	return str;
}
