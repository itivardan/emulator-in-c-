#include<iostream>
void HashEntry::sbi(string line)
{				
				string str1;
				operation();
				int a,b,c,d,no,val;
				unsigned short *ptr;
	    		str1[0]=line[4];str1[1]=line[5];
	    		a=convert(str1[0]);b=convert(str1[1]);
				no=a*16+b; 
				ptr=&A;	val=*ptr;
				A=val-no+br;
				if(A<0)
			    	br=1;
				else
			    	br=0;
				pc+=2;
				cout<<endl<<"A is "<<A<<endl<<"B is "<<B<<endl;
}

