#include "findPageCount.h"

// Complete the findPageCount function below.


/* IMPORTANT NOTE:	DO NOT use printf and/or scanf in this file*/

int findPageCount(int n,int p)
{
	if((p > (n/2)))
	{
		if(!(n%2))
		{
			if(p==n)return 0;
			else
			{
				return (((n-p)/2)+1);
			}
		}
		else
		{
			if(p==n || p==(n-1))return 0;
			else
			{
				return (((n-p)/2)+1);
			}
		}
	}
	else
	{
		if(p==1)return 0;
		else
		{
			if(!(n%2))
			{
				return (p/2);
			}
			else
			{
				return (p-1)/2;
			}
		}
	}
}
