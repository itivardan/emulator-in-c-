void HashEntry::dad(string line)
{			
				string str1="",str2="";
				operation();
				char ch;
				int val,val1,val2,val3,no;
				unsigned short *ptr,*ptr1,*ptr2,*ptr3;
	    		ch=line[4];
				if(ch=='B'){ptr=&B;ptr1=&C;	val=*ptr;val1=*ptr1;ptr2=&H;ptr3=&L;val2=*ptr2;val3=*ptr3;H=val+val2;L=val1+val3;cout<<endl<<"H"<<H<<endl<<"L"<<L;}
				if(ch=='D'){ptr=&D;ptr1=&E;	val=*ptr;val1=*ptr1;ptr2=&H;ptr3=&L;val2=*ptr2;val3=*ptr3;H=val+val2;L=val1+val3;cout<<endl<<"H"<<H<<endl<<"L"<<L;}
				if(ch=='H'){ptr=&H;ptr1=&L;	val=*ptr;val1=*ptr1;ptr2=&H;ptr3=&L;val2=*ptr2;val3=*ptr3;H=val+val2;L=val1+val3;cout<<endl<<"H"<<H<<endl<<"L"<<L;}
				pc+=2;
			
			
}

