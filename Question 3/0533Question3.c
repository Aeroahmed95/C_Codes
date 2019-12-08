

char *stringRearrange(char* arr)
{
    
    int i = 0;
    char *ch;
    char each [100][10],temp[10],names[100];
    strcpy(names,arr);
    ch  = strtok(names, ",");
    while (ch != NULL) 
    {
    strcpy(each[i],ch);
    ch = strtok(NULL, ",");
    i++;
    }
    for(int k=0;k<=i;k++)
			for(int w=k+1;w<=i;w++)
			{
				if(strcmp(each[k],each[w])>0)
				{
					strcpy(temp,each[k]);
					strcpy(each[k],each[w]);
					strcpy(each[w],temp);
				}
			}
	strcpy(arr,each[0]);		
	for(int k=1; k<=(i) ; k++)
	{
	    strcat(arr,each+k*sizeof(char));
	    if(k != i)strcat(arr,",");
	    
	}
	return arr;
	
}
