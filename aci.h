#include<iostream>
void HashEntry::aci(string line)
{				
				string str1;
				operation();
				int a,b,c,d,no,val;
				unsigned short *ptr;
	    		str1[0]=line[4];str1[1]=line[5];
	    		a=convert(str1[0]);b=convert(str1[1]);
				no=a*10+b; 
				ptr=&A;	val=*ptr;
				A=val+no+cy;
				pc+=2;
				cout<<endl<<"A"<<A<<"b"<<B<<endl;
				if(A>255)
					cy=1;
				else cy=0;
}


