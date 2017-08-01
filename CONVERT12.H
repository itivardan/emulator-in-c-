   	#include"CONVERT23.H"
   int convert12()
   {
   int k;
				    string str11,str12;
					unsigned short *ptr12,*ptr11;//char val;
				    unsigned short val,val1;
					ptr12=&HashEntry::H;
					val=*ptr12;
					str11=convert112(val);
					ptr11=&HashEntry::L;
					val1=*ptr11;
					str12=convert112(val1);str12=str11+str12;
				//	cout<<str12;
				    for(k=0;str12[k]!='\0';k++)
					{
					}
					int a1=0,b1=0,c1=0,d1=0,no11=0;
					if(k==1)
					{       
					a1=convert(str12[0]);
	    	    	no11=a1;
					}
					if(k==2)
					{       
					a1=convert(str12[0]);b1=convert(str12[1]);
	    	    	no11=a1*(16)+b1;
					}
					if(k==3)
					{       
					a1=convert(str12[0]);b1=convert(str12[1]),c1=convert(str12[2]);
	    	    	no11=a1*16*16+b1*16+c1;
					}
						if(k==4)
					{       
					a1=convert(str12[0]);b1=convert(str12[1]),c1=convert(str12[2]);d1=convert(str12[3]);
	    	    	no11=a1*16*16*16+b1*16*16+c1*16+d1;
						
}			
return (no11);	}
