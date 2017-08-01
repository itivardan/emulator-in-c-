
	#include<iostream>
	void HashEntry::mvi(string line,int p)
	{			
			if(zf==0)
			{
		
				string str1;
					operation();
					int b,c,d,no;
					if(line[p+1]==' ')
		    	{
					str1[0]=line[p];str1[1]=line[p+2];str1[2]=line[p+3];
		    		b=convert(str1[1]);c=convert(str1[2]);
					no=b*16+c;
					if(str1[0]=='A'){A=no;/*cout<<endl<<"A is	"<<A<<endl;*/}
					if(str1[0]=='B'){B=no;/*cout<<endl<<"B is	"<<B<<endl;*/}
					if(str1[0]=='C'){C=no;/*cout<<"C is	"<<C<<endl;*/}
					if(str1[0]=='D'){D=no;/*cout<<endl<<"D is	"<<D<<endl;*/}
					if(str1[0]=='E'){E=no;/*cout<<endl<<"E is	"<<E<<endl;*/}
					if(str1[0]=='H'){H=no;/*cout<<endl<<"H is	"<<H<<endl;*/}
					if(str1[0]=='L'){L=no;/*cout<<endl<<"L is	"<<L<<endl;*/}
				//	pc+=2;
				}
					else
					{
						string str1="",str2="";
									int a,b,c,d,no=0,e,f,no1;
						    		str1[0]=line[p];str1[1]=line[p+1];str1[2]=line[p+2];str1[3]=line[p+3];str1[4]=line[p+6];str1[5]=line[p+7];
						    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);e=convert(str1[4]);f=convert(str1[5]);
									no=(a*(16*16*16)+b*16*16+c*16+d);
									no1=e*16+f;
								   // cout<<"no"<<no;
									if(no<4096)
									{
									memory[no]=no1;
								    }
								    //cout<<"memory becomes "<<memory[no];
				//				    	pc+=4;
					}
				
			}
	}

