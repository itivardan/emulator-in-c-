void HashEntry::adi(string line,int p)
{				
				string str1;
				operation();
				int a,b,c,d,no,val;
				unsigned short *ptr;
	    		str1[0]=line[p];str1[1]=line[p+1];
	    		a=convert(str1[0]);b=convert(str1[1]);
				no=a*16+b; cout<<no;
				ptr=&A;	val=*ptr;
				A=val+no;
				pc+=2;
				
				cout<<endl<<"A"<<A<<"b"<<B<<endl;
				if(A>255)
					cy=1;
				else cy=0;
}

