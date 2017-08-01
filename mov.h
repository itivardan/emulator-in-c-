	#include<string.h>
void HashEntry::mov(string line,int p)
{
	if(zf==0)
	{
	
	int n;
//	cout<<"hamdle"<<endl;
				operation();
				char c=line[p],d=line[p+2];
				unsigned short *ptr;
				unsigned short val;
				if(line[p+1]==',')
				{
					if(d=='A') ptr=&A;
					else if(d=='B') 	ptr=&B;
					else if(d=='C') 	ptr=&C;
					else if(d=='D') 	ptr=&D;
					else if(d=='E') 	ptr=&E;
					else if(d=='H') 	ptr=&H;
					else if(d=='L') 	ptr=&L;
					else if(d=='M') 	
					{
					ptr=&memory[M];
					}
					val=*ptr;
					if(c=='A') {A=val; /*cout<<"A	is	"<<A<<endl;*/}
					else if(c=='B')  {B=val;/*cout<<endl<<"B	is	"<<B<<endl;*/}
					else if(c=='C')  {C=val;/*cout<<endl<<"C	is	"<<C<<endl;*/}
					else if(c=='D')  {D=val;/*cout<<endl<<"D	is	"<<D<<endl;*/}
					else if(c=='E')  {E=val;/*cout<<endl<<"E	is	"<<E<<endl;*/}
					else if(c=='H')  {H=val;/*cout<<endl<<"H	is	"<<H<<endl;*/}
					else if(c=='L')  {L=val;/*cout<<endl<<"L	is	"<<L<<endl;*/}
		           else if(c=='M') 
				    {memory[M]=val;
//					cout<<endl<<"memory[m]is	"<<memory[M]<<endl;
				    }
				//	pc+=1;
		    }
		    	else 
			    	if(line[p+1]==' ')
						{
								string str1="",str2="";
								int a,b,c,d,no;
					    		str1[0]=line[p+2];str1[1]=line[p+3];str1[2]=line[p+4];str1[3]=line[p+5];
					    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
								no=(a*(16*16*16))+(b*(16*16))+(c*(16))+d;
								ptr=&memory[no];val=*ptr;
								if(line[p]=='A'){A=val;cout<<endl<<"A is	"<<A<<endl;}
								if(line[p]=='B'){B=val;cout<<endl<<"B is	"<<B<<endl;}
								if(line[p]=='C'){C=val;cout<<endl<<"C is	"<<C<<endl;}
								if(line[p]=='D'){D=val;cout<<endl<<"D is	"<<D<<endl;}
								if(line[p]=='E'){E=val;cout<<endl<<"E is	"<<E<<endl;}
								if(line[p]=='H'){H=val;cout<<endl<<"H is	"<<H<<endl;}
								if(line[p]=='L'){H=val;cout<<endl<<"L is	"<<L<<endl;}
				//				pc+=2;
							
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
								
										if(line[p+5]=='A'){ptr=&A;val=*ptr;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='B'){ptr=&B;val=*ptr;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='C'){ptr=&C;val=*ptr;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='D'){ptr=&D;val=*ptr;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='E'){ptr=&E;val=*ptr;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='H'){ptr=&H;val=*ptr;;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='L'){ptr=&L;val=*ptr;;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
										if(line[p+5]=='M'){
										ptr=&memory[M];val=*ptr;;memory[no]=val;cout<<endl<<"memory	becomes	"<<memory[no];}
								}
					//			pc+=3;
						}
}

}
       
 
