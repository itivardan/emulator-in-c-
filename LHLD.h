#include<iostream>
void HashEntry::lhld(string line,int p)
{				
				string str1;
				operation();
				int a,b,c,d,no,noi;
	    		str1[0]=line[p];str1[1]=line[p+1];str1[2]=line[p+2],str1[3]=line[p+3];
	    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
				no=a*16*16*16+b*16*16+c*16+d; noi=no+1;//cout<<no;
				H=memory[noi];L=memory[no];
		//	cout<<memory[10]<<endl;
				pc+=3;cout<<"H	IS "<<H<<"	L	IS "<<L<<endl;
}

