#include <iostream>
#include<fstream>
#include<string.h>
#include"class.h"
#include"operation.h"
#include"convert.h"
#include"mov.h"
#include"mvi.h"
#include"lda.h"
#include"sta.h"
#include"LHLD.h"
#include"LXI.h"
#include"stld.h"
#include"xchg.h"
#include"out.h"
#include"in.h"
#include"dcx.h"
#include"add.h"
#include"adi.h"
#include"sub.h"	
#include"sbi.h"
#include"cmp.h"
#include"inx.h"
#include"dcr.h"
#include"jc.h"
#include"jnc.h"
#include"jz.h"
#include"jnz.h"
const char EOL = '\0';
using namespace std;

int main()
{
	char ch, file_name[25],line[30],line1[30];
	unsigned short start;
	int k,k1,j,i,j1,i1,l,l1=0,p=0,p1=0,flag=0,v=0,flag1=0,a=0,b=0,c=0,d=0;
	ifstream fp,fp1;
	
	cout<<("Enter the name of file you wish to see\n");
	gets(file_name);
	
	fp.open(file_name);
	fp1.open(file_name);
	
	if( fp1 == NULL )
    	cout<<"Error while opening the file.";

	HashEntry ob,jc,jnc,jz,jnz,mov,mvi,lda,sta,LXI,LHLD,ldax,stld,add,sub,adi,sbi,xchg,aci,sbc,dad,in,out,dcr,cmp,inx,dcx;
	
	cout<<"enter the starting address in hex"<<endl;
	cin>>hex>>start;
	
	HashEntry::pc=start;
	
	while(!fp1.eof())
	    {	flag1=0;
			l1=0;   
			char str21[10]="";	
			fp1.getline(line1,100);	
			l1=strlen(line1);
			for(j1=0;j1<l1;j1++) 
				{	if(line1[j1]==':')
						{	for(i1=0;i1<j1;i1++)
								{
									str21[i1]=line1[i1];
								}
								str21[i1]='\0';
								ob.getlabel(str21,HashEntry::pc);
								flag1=1;
								break;
						}
				}
			if(flag1==1)
			  {    	k1=j1+1;	goto label11;
			  }
			else{   
					k1=0;goto label11;
				}
				
			label11:
				{ 
				    char str11[10]="";
					if(k1==0)
					{
						int w1=k1,p1=0;
						while(line1[w1])
							{
								str11[p1++]=line1[w1];w1++;
							}
						goto label111;
					}
					else
					{
					   int s1=k1;p1=0;
						while(line1[s1])
							{
								str11[p1++]=line1[s1];s1++;
							}
						goto label111;
					}
					label111:
						{
							char str1[10]="",str51[20]="";
							int s1=k1,p1=0,m1=k1,n1=0;
							while(line1[n1]!=EOL)
							{
								str51[n1++]=line1[m1];m1++;
							}
							str51[m1]='\0';
							while(line1[s1]!=' ')
							{
								str1[p1++]=line1[s1];s1++;
							}
							ob.getinstr(str51,HashEntry::pc);
							if(strcmpi(str1,"mov")==0) 	HashEntry::pc+=1;
							if(strcmpi(str1,"mvi")==0)	HashEntry::pc+=2;
							if(strcmpi(str1,"lda")==0) 	HashEntry::pc+=3;
							if(strcmpi(str1,"LHLD")==0)	HashEntry::pc+=3;
							if(strcmpi(str1,"LXI")==0)	HashEntry::pc+=3;
						    if(strcmpi(str1,"sta")==0)  HashEntry::pc+=3; 
							if(strcmpi(str1,"stld")==0) HashEntry::pc+=3; 
							if(strcmpi(str1,"xchg")==0)	HashEntry::pc+=1;
						    if(strcmpi(str1,"OUT")==0)  HashEntry::pc+=2; 
							if(strcmpi(str1,"IN")==0)  	HashEntry::pc+=2; 
							if(strcmpi(str1,"ADD")==0)  HashEntry::pc+=1;
							if(strcmpi(str1,"SUB")==0) 	HashEntry::pc+=1;
							if(strcmpi(str1,"adi")==0)  HashEntry::pc+=2; 
							if(strcmpi(str1,"sbi")==0)  HashEntry::pc+=2; 
							if(strcmpi(str1,"dcr")==0)  HashEntry::pc+=1;
							if(strcmpi(str1,"cmp")==0)  HashEntry::pc+=1; 
							if(strcmpi(str1,"inx")==0)  HashEntry::pc+=1;
							if(strcmpi(str1,"jc")==0) 	HashEntry::pc+=1; 
							if(strcmpi(str1,"jnc")==0)  HashEntry::pc+=1;
							if(strcmpi(str1,"jz")==0)  	HashEntry::pc+=1;
							if(strcmpi(str1,"jnz")==0)  HashEntry::pc+=1;
							if(strcmpi(str1,"dcx")==0)  HashEntry::pc+=1;	
						}
			    }
		}
	fp1.close();
	if( fp == NULL )
    cout<<"Error while opening the file.";
   
    cout<<"enter values for memory[512] in hex ->";
	cin>>a;
	cout<<"enter values for memory[513] in hex ->";
	cin>>b;
	cout<<"enter values for memory[514] in hex ->";
	cin>>c;
	cout<<"enter values for memory[515] in hex ->";
	cin>>d;
	HashEntry::memory[512]=a,HashEntry::memory[513]=b,HashEntry::memory[514]=c,HashEntry::memory[515]=d;
	int f=0;
	while(!fp.eof())
	    {	
	    	cout<<HashEntry::pcget1[f++]<<":";
			flag=0;l=0;char str2[10]="";	
			fp.getline(line,100);	
			l=strlen(line);
			for(j=0;j<l;j++) 
				{	
					if(line[j]==':')
						{
							for(i=0;i<j;i++)
								str2[i]=line[i];
							str2[i]='\0';
							flag=1;break;
						}
				}	
			if(flag==1)
				{    
					k=j+1;	goto label;
				}
			else{   
					k=0;goto label;
				}
			label:
				{ 
			    char str1[10]="";
				if(k==0)
					{	int w=k,p=0;
						while(line[w])
						{		str1[p++]=line[w];w++;
				    	}
						goto label1;
					}
				else
				    {
				   		int s=k;p=0;
						while(line[s])
						{
							str1[p++]=line[s];s++;
						}
	 					goto label1;
					}
				label1:
					{
						char str[10]="",str5[20]="";
						int s=k,p=0,m=k,n=0;
						while(line[n]!=EOL)
						{
							str5[n++]=line[m];m++;
						}
						str5[m]='\0';
						cout<<string(str5)<<endl;
						while(line[s]!=' ')
						{
							str[p++]=line[s];s++;
						}
						if(strcmpi(str,"mov")==0)		{mov.mov(line,s+1);}
						 if(strcmpi(str,"mvi")==0) 		mvi.mvi(line,s+1);
						if(strcmpi(str,"lda")==0)		lda.lda(line,s+1);
						if(strcmpi(str,"LHLD")==0)		LHLD.lhld(line,s+1); 
						if(strcmpi(str,"LXI")==	0)		LXI.lxi(line,s+1); 
						if(strcmpi(str,"sta")==0)		sta.sta(line,s+1); 
						if(strcmpi(str,"stld")==0) 		stld.stld(line,s+1); 
						if(strcmpi(str,"xchg")==0)		xchg.xchg(); 
						if(strcmpi(str,"OUT")==0)		out.out(line,s+1); 
						if(strcmpi(str,"IN")==0)		in.in(line,s+1); 
						if(strcmpi(str,"ADD")==0)		add.add(line,s+1); 
						if(strcmpi(str,"SUB")==0)		sub.sub(line,s+1); 
						if(strcmpi(str,"adi")==0)		adi.adi(line,s+1); 
						if(strcmpi(str,"sbi")==0)	 	sbi.sbi(line,s+1); 
						if(strcmpi(str,"dcr")==0)	  	dcr.dcr(line,s+1); 
						if(strcmpi(str,"cmp")==0)	 	cmp.cmp(line,s+1); 
						if(strcmpi(str,"inx")==0)	 	inx.inx(line,s+1); 
						if(strcmpi(str,"jc")==0)	   	jc.jump(line,s+1); 
						if(strcmpi(str,"jnc")==0)	  	jnc.jump1(line,s+1); 
						if(strcmpi(str,"jz")==0)	   	jz.jump2(line,s+1); 
						if(strcmpi(str,"jnz")==0)   	jnz.jump3(line,s+1); 
						if(strcmpi(str,"DCX")==0)   {cout<<"hey";
							dcx.dcx(line,s+1);} 
						if(strcmpi(str,"hlt")==0)	{
					HashEntry::B=0;	goto end;}
					}
					
				}
		}
	end:
		cout<<"prog ends"<<endl;


	cout<<"A IS "<<HashEntry::A<<endl;cout<<"B IS "<<HashEntry::B<<endl;cout<<"C IS "<<HashEntry::C<<endl;cout<<"D IS "<<HashEntry::D<<endl;cout<<"E IS "<<HashEntry::E<<endl;cout<<"L IS "<<HashEntry::L<<endl;cout<<"M IS "<<HashEntry::M<<endl;
	cout<<"zero flag is "<<HashEntry::zf<<endl<<"carry flag is "<<HashEntry::cy<<endl<<"borrow flag is "<<HashEntry::BR<<endl<<"sign flag is "<<HashEntry::sf<<endl;
//	ob.retrieve();
	cout<<"VALUES IN ASCENDING ORDER ARE"<<endl;
	cout<<"MEMORY[512]->"<<HashEntry::memory[512]<<endl;
	cout<<"MEMORY[513]->"<<HashEntry::memory[513]<<endl;
	cout<<"MEMORY[514]->"<<HashEntry::memory[514]<<endl;
	cout<<"MEMORY[515]->"<<HashEntry::memory[515]<<endl;
	fp.close();
    return 0;
}
