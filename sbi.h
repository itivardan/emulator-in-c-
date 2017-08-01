#include<iostream>
void HashEntry::sbi(string line,int p)
{				
				string str1;
				operation();
				int a,b,c,d,no,val;
				unsigned short *ptr;
	    		str1[0]=line[p];str1[1]=line[p+1];
	    		a=convert(str1[0]);b=convert(str1[1]);
				no=a*16+b;
				ptr=&A;	val=*ptr;
				A=val-no;
				if(A<0)
			    	BR=1;
				else
			    	BR=0;
				pc+=2;
				cout<<endl<<"A"<<A<<endl<<"B"<<B<<endl;
}

