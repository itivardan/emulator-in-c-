void HashEntry::jump(string line,int p)
{
								int v,f=0; 
							    int P1=0;		
								char str10[10]="",str[30][20];int h=0,F=p,Flag=0;
							
								while(isalpha(line[F])||isdigit(line[F]))
								{
									str10[P1++]=line[F];
									F++;
								}	str10[P1]='\0';
							
								string str11=string(str10),str12;
								
								for(h=0;h<(HashEntry::i1);h++)
							    {
								   	if(str11.compare(HashEntry::keyget[h])==0 )
							    	{
							    
										for(v=0;v<=((HashEntry::i2)-1);v++)
							    			if(HashEntry::pcget1[v]==HashEntry::pcget[h])
												{
													int y=v;
														while(y!=(HashEntry::i2)-1)
														{
															 cout<<HashEntry::keyget1[y];
															cout<<y;
															char str[f]=HashEntry::keyget1[y];
														f++;
														y++;
															
														}
												}
																			
									}
							 	}
							 	
								
						
					
							
}
