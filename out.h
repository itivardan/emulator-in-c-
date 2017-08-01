void HashEntry::out(string line,int p)
{				string str1;
				operation();
				int a,b,no,val;	
				unsigned short *ptr; 
	    		str1[0]=line[p];str1[1]=line[p+1];
	    		a=convert(str1[0]);b=convert(str1[1]);
				no=a*16+b;cout<<no;
				ptr=&A;val=*ptr;
				memory[no]=val;cout<<endl<<"memoryvalue becomes "<<memory[no]<<endl;
				pc+=2;
			
}

