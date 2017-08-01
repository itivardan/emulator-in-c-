#include<iostream>
void HashEntry::dcr(string line,int p)
{				
				
				operation();
				char d=line[p];
				unsigned short *ptr;
				unsigned short val;
					if(d=='A') ptr=&A;
					else if(d=='B') 	ptr=&B;
					else if(d=='C') 	ptr=&C;
					else if(d=='D') 	ptr=&D;
					else if(d=='E') 	ptr=&E;
					
					val=*ptr;
					if(val!=0 && val<= 65535)
					{
					val=val-1;
					}
					if(val==0)
						zf=1;
					else 
					   zf=0;
				
					if(d=='A'){ A=val;/*cout<<A<<endl;*/ }
					else if(d=='B') 	{ B=val;/*cout<<"B IS	"<<B<<endl; */}
					else if(d=='C') 	{ C=val;/*cout<<"C IS "<<C<<endl;  */}
					else if(d=='D') 	{ D=val;/*cout<<"d IS "<<D<<endl; if (D==0) { zf=1;}*/}
					else if(d=='E') 	{ E=val;/*cout<<"E IS "<<E<<endl; if (E==0) { zf=1;}*/}
				//	pc+=1;
		   // 	cout<<zf;  
		    //	cout<<"A IS "<<A<<endl;
		    
}
