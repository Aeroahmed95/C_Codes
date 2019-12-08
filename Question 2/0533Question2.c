/*
 * 0533Question2.c
 *
 *  Created on: Dec 7, 2019
 *      Author: MASTER
 */

int maxProfit(int n,int p[])
{
	int max=0,d[n-1];
	int l=n-1;
	for(int i=0;i<l;i++)
	{
		d[i]=p[i+1]-p[i];
	}
	max=d[0];
	for(int i=1;i<l;i++)
	{
		if(d[i]>max)max=d[i];
	}
	return max;

}
