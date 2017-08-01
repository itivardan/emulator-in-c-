#include<iostream>
void HashEntry::lxi(string line,int p)
{				
				
				string str1;
				operation();
				int a,b,c,d,no,noi,NOI;
	    		str1[0]=line[p+2];str1[1]=line[p+3];str1[2]=line[p+4],str1[3]=line[p+5];
	    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
				no=a*16+b;noi=c*16+d;NOI=a*16*16*16+b*16*16+c*16+d;HashEntry::start1=NOI;
				if(line[p]=='B'){B=no;C=noi;}
				if(line[p]=='D'){D=no;E=noi;}
				if(line[p]=='H'){H=no;L=noi;M=NOI;}
		//	cout<<"M is"<< M<<endl;
}


