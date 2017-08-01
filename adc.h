void HashEntry::adc(string line)
{			
				string str1="",str2="";
				operation();
				int a,b,c,d,no;
	    		str1[0]=line[4];str1[1]=line[5];str1[2]=line[6];str1[3]=line[7];
	    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
				no=a*1000+b*100+c*10+d;
				memory[no]=A;
				pc+=2;
				cout<<endl<<"A"<<A<<"b"<<B<<endl;
				cout<<endl<<"memory is"<<memory[no]<<endl;
}

