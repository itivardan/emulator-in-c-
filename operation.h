unsigned short HashEntry::operation()
{
	if (pc<=4095) 
	return pc;
	else  
		{
			cout<<endl<<"limit exceeds"<<endl;
			return 0;
		}
}
