#include<iostream>

void HashEntry::cmp(string line,int p)
{			
				operation();
				int n;
				char d=line[p];
				unsigned short *ptr,*ptr1;
				unsigned short val,val1,VAL1;
					 if(d=='A') 	{ptr=&A;val=*ptr;}
					 if(d=='B') 	{ptr=&B;val=*ptr;}
					 if(d=='C') 	{ptr=&C;val=*ptr;}
					 if(d=='D') 	{ptr=&D;val=*ptr;}
					 if(d=='E') 	{ptr=&E;val=*ptr;}
				 	 if(d=='M') 	
							{
						ptr=&memory[M];	val=*ptr;
							}
					 else
						{
								string str1="",str2="";
								int a,b,c,d,no;
					    		str1[0]=line[p];str1[1]=line[p+1];str1[2]=line[p+2];str1[3]=line[p+3];
					    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
								no=(a*(16*16*16))+(b*(16*16))+(c*(16))+d;
								if(no<4096)
								{
								   val=memory[no];
									
								}
						}
					
					ptr1=&A;
					val1=*ptr1;
					if(val>val1) {
					cy=1; HashEntry::memory1[(HashEntry::i3)++]=val1;}
					if(val<val1) {
					cy=0;zf=0;HashEntry::memory1[(HashEntry::i3)++]=val;}
					if (val1==val) zf=1;
				//	cout<<"CARRY FLAG "<<cy<<"ZERO FLAG "<<zf<<endl;
				}

