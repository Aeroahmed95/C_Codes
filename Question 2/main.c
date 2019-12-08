/*
 * This file is a test case you may use and change to check your code
 */
#include "maxProfit.h"

int main()
{
	int result;
	
	int n = 3; // number of years (array size)
	int price[3] = {5, 10, 3}; // prices array
	

	result = maxProfit(n, price);
    printf("%d", result);	// The result will be 5
	
    return 0;
}
