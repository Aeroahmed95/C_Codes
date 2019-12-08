#include "Question.h"

// Complete the stringRearrange function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//

/* IMPORTANT NOTE:	DO NOT use printf and/or scanf in this file*/
char* stringRearrange(char* arr)
{
	//	Write your code here
	int i=0,j=0,count=0;
		char each [100][100],temp[100];
		while(names[i] != '\0')
		{
			if(names[i]==',')
				{
					count++;
					j++;
				}
			each[j][i]=names[i];
			i++;
		}
		count++;
		for(int k=0;k<=count;k++)
			for(int w=i+1;w<=count;w++)
			{
				if(strcmp(each[i],each[j])>0)
				{
					strcpy(temp,each[i]);
					strcpy(each[i],each[j]);
					strcpy(each[j],temp);
				}
			}

}

