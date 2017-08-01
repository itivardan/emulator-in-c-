void HashEntry::stld(string line,int p)
{				
				string str1;
				operation();
				unsigned short *ptr,*ptr1;
				int a,b,c,d,no,noi,val,val1;
	    		str1[0]=line[p+1];str1[1]=line[p+2];str1[2]=line[p+3],str1[3]=line[p+4];
	    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
				no=a*16*16*16+b*16*16+c*16+d; noi=no+1;
				ptr=&H;val=*ptr;ptr1=&L;val1=*ptr1;
				memory[noi]=val;memory[no]=val1;
				cout<<endl<<"MEMORY BECOMES "<<memory[no]<<"next memory becomes"<<  memory[noi];
				pc+=3;
}

