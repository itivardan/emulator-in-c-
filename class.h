#include<iostream>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class HashEntry{
private:
	string key,key1,key2;	  
	unsigned short value,value1,value2;
public:
	static unsigned short  memory[4096];
	static unsigned short  memory1[10];
	static unsigned short  memory2[10];
	static unsigned short  start1;
	static unsigned short  A;
	static unsigned short  B;
	static unsigned short  C;
	static unsigned short  D;
	static unsigned short  E;
	static unsigned short  H;
	static unsigned short  L;
	static unsigned short  M;
	static int i1;static int i2;static int i3;static int i4;
	static unsigned short  pc;	
	static unsigned short  cy;
	static unsigned short  BR;
	static unsigned short  zf;
	static unsigned short  sf;
	static string keyget[100];
	static string keyget1[100];
	static unsigned short pcget[100];
	static unsigned short pcget1[100];	
void getlabel(string key,unsigned short value)
    {
      	this->key=key;
      	this->value=value;
      	getpc(key,value);
	  }
void getinstr(string key,unsigned short value)
    {
      	this->key=key;
      	this->value=value;
      	getin(key,value);
	}
void getpc(string key2,unsigned short value2)
	{
	  	keyget[i1]=key2;
	  	pcget[i1]=value2;
	  	i1++;
	}
void getin(string key2,unsigned short value2)
	{
	   	keyget1[i2]=key2;
	   	pcget1[i2]=value2;
	  	i2++;
	}
void retrieve()
{
	memory[start1]=HashEntry::memory1[0];
	int t1,t2;
	for(   t1=1, t2=0;t1<i3,t2<i4-1;t1++,t2++)
	{
	memory[	memory2[t2]]=memory1[t1] ;
	}
//	cout<<	memory2[t2]<<A;
	memory[memory2[t2]]=A;
}
unsigned short operation();
void mov(string,int);
void mvi(string,int);
void lda(string,int);
void sta(string,int);
void lxi(string,int);
void lhld(string,int);
void stld(string,int);
void out(string,int);
void in(string,int);
void add(string,int);
void sub(string,int);
void adi(string,int);
void sbi(string,int);
void dcr(string,int);
void cmp(string,int);
void inx(string,int);
void jump(string,int);
void jump1(string,int);
void jump2(string,int);
void jump3(string,int);
void dcx(string,int);
void xchg();	
};
int HashEntry::i1=0;int HashEntry::i2=0;int HashEntry::i3=0, HashEntry::i4=0;
unsigned short HashEntry::start1=0x0000;
unsigned short HashEntry::pc=0x0000;
unsigned short HashEntry::A=0x0000;
unsigned short HashEntry::B=0x0000;
unsigned short HashEntry::C=0x0000;
unsigned short HashEntry::D=0x0000;
unsigned short HashEntry::E=0x0000;
unsigned short HashEntry::H=0x0000;
unsigned short HashEntry::L=0x0000;
unsigned short HashEntry::M=0x0000;
unsigned short HashEntry::cy=0x0000;
unsigned short HashEntry::zf=0x0000;
unsigned short HashEntry::sf=0x0000;
unsigned short HashEntry::BR=0x0000;
unsigned short HashEntry::memory[4096]={0x0000};
unsigned short HashEntry::memory1[10]={0x0000};
unsigned short HashEntry::memory2[10]={0x0000};
unsigned short HashEntry::pcget[100]={0x0000};
unsigned short HashEntry::pcget1[100]={0x0000};
string HashEntry::keyget[100]={""};
string HashEntry::keyget1[100]={""};

