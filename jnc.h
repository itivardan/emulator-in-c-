void HashEntry::jump1(string line,int p)
{   operation();
	int h=0,l=p,i=0,flag=0,flag1=0;
	char str[10]="";
qq:	if(cy==0 && zf==0){
		int y=0;
	while(isalpha(line[p])||isdigit(line[p]))
	{
		str[i++]=line[p];
		p++;
	}
	str[i]='\0';
	string str11=string(str);
    for(h=0;h<i1;h++)
    {
    	if(str11.compare(keyget[h])==0)
    	{
		flag=1;
    	break;}
	}
	if(flag==1) 
	{
		for(y=0;y<i2;y++)
		    {
		    	
		    	if(pcget[h]==pcget1[y])
		    	{//cout<<HashEntry::keyget1[y]<<endl;
				flag1=1;
		    	break;}
			}
	}
	int q=i2;
	if(flag1==1)
	{
		while(y!=q)
		{
			line.assign(keyget1[y],0,29);
			line[30]='\0';
			char str[10]="",str5[20]="";
			int s=0,p=0,m=0,n=0;
			while(line[n]!='\0')
						{
							str5[m++]=line[n];n++;
						}
						str5[m]='\0';
				//		cout<<string(str5)<<endl;
				while(line[s]!=' ')
						{
							str[p++]=line[s];s++;
						}
				if(strcmpi(str,"mov")==0)
						{
					   		mov(line,s+1);	
						}
						 if(strcmpi(str,"mvi")==0)
						{
					   		mvi(line,s+1);
						}
						if(strcmpi(str,"lda")==0)
						{
					   		lda(line,s+1);
						}
						if(strcmpi(str,"LHLD")==0)
						{
							lhld(line,s+1); 
						}
			
						if(strcmpi(str,"LXI")==	0)
						{
							lxi(line,s+1); 
						}
						 if(strcmpi(str,"sta")==0)
							{
						   	sta(line,s+1); 
							}
						 if(strcmpi(str,"stld")==0)
							{
							   	stld(line,s+1); 
							}
						 if(strcmpi(str,"xchg")==0)
							{
							   	xchg(); 
							}
						 if(strcmpi(str,"OUT")==0)
							{
						   	out(line,s+1); 
							}
						 if(strcmpi(str,"IN")==0)
							{
						   	in(line,s+1); 
							}
						 if(strcmpi(str,"ADD")==0)
							{
							   	add(line,s+1); 
							}
						 if(strcmpi(str,"SUB")==0)
							{
							   	sub(line,s+1); 
							}
						if(strcmpi(str,"adi")==0)
							{
							  	adi(line,s+1); 
							}
						if(strcmpi(str,"sbi")==0)
							{
							   	sbi(line,s+1); 
							}
						if(strcmpi(str,"dcr")==0)
							{
							   	dcr(line,s+1); 
							}
						if(strcmpi(str,"cmp")==0)
							{
							   	cmp(line,s+1); 
							}
						if(strcmpi(str,"inx")==0)
							{
							   	inx(line,s+1); 
							}
						if((strcmpi(str,"jnc")==0)&&(cy==0)&&(zf!=1))
							{ 
							 	jump1(line,s+1); 
							   	break;
							}
						if((strcmpi(str,"jc")==0)&&(cy==1)&&(zf!=1))
						{
							   	jump(line,s+1); 
							   	break;
						}
						if((strcmpi(str,"jz")==0)&&(zf==1))
							{
							   	jump2(line,s+1);
								   break; 
							}
						if((strcmpi(str,"jnz")==0)&&(zf==0))
							{  
							   	jump3(line,s+1); 
							   	break;
							}
						if((strcmpi(str,"jnc")==0)&&(cy==1)&&(zf==0))
							{
							   	break;
							}
						if((strcmpi(str,"jnz")==0)&&(zf==1))
							break;
						if((strcmpi(str,"jc")==0)&&(cy==0))
						{
							   	break;
						}
						if((strcmpi(str,"jz")==0)&&(zf==0))
							{
								   break; 
							}
			y++;
		}
	}
}
}
