/*
 * maxProfit.c
 *
 *  Created on: Dec 7, 2019
 *      Author: MASTER
 */
int maxProfit(int n,int p[])
{
	int max=0;
	for(int i=n;i>=1;i--)
    	for(int j=i-1;j>=0;j--)
    	{
    	    if((p[i]-p[j])>max)max=(p[i]-p[j]);
    	}
	return max;
}
