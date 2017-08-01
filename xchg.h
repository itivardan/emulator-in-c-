void HashEntry::xchg()
{			
				operation();
				int val,val1,val2,val3;
				unsigned short *ptr,*ptr1,*ptr2,*ptr3;
				ptr=&D;ptr1=&E;	val=*ptr;val1=*ptr1;
				ptr2=&H;ptr3=&L;val2=*ptr2;val3=*ptr3;
				H=val;D=val2;L=val1;E=val3;
				cout<<endl<<"H IS "<<H<<endl<<"l IS "<<L<<endl<<"D IS "<<D<<endl<<"E IS "<<E<<endl;
				pc+=1;
				
			
}

