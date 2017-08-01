	void HashEntry::sta(string line,int p)
	{			
					string str1="",str2="";
					operation();
					int a,b,c,d,no;
		    		str1[0]=line[p];str1[1]=line[p+1];str1[2]=line[p+2];str1[3]=line[p+3];
		    		a=convert(str1[0]);b=convert(str1[1]);c=convert(str1[2]);d=convert(str1[3]);
					no=(a*16*16*16)+(b*16*16)+(c*16)+d;
					if(no<4096)
					{
						memory[no]=A;
					}
					cout<<"MEMORY BECOMES "<<memory[no]<<endl;
				//	pc+=3;
				
	}

