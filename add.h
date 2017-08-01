void HashEntry::add(string line,int p )
{			
				string str1="",str2="";
				operation();
				char ch;
				int val,val1,no,a,b,c,d;
				unsigned short *ptr,*ptr1;
	    		ch=line[p];
	    		if(isalpha(ch))
		    		{
					
					if(ch=='B'){ptr=&B;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no; }
					if(ch=='C'){ptr=&C;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no;}
					if(ch=='D'){ptr=&D;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no;}
					if(ch=='E'){ptr=&E;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no;}
					if(ch=='H'){ptr=&H;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no;}
					if(ch=='L'){ptr=&L;ptr1=&A;	val=*ptr;val1=*ptr1;no=val+val1;A=no;}
					
					}
				else
					{
						str1[0]=line[p];str1[1]=line[p+1];str1[2]=line[p+2],str1[3]=line[p+3];
			    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
						no=a*16*16*16+b*16*16+c*16+d; cout<<no;
						ptr=&memory[no];	val=*ptr;A=A+val;cout<<endl<<A;
					}
				if(A>255)
					cy=1;
				else cy=0;
					
				if(A==0)
					zf=1;
				else zf=0;
					cout<<endl<<"A"<<A<<"B"<<B<<endl;
					pc+=1;
			
}

