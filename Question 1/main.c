/*
 * This file is a test case you may use and change to check your code
 */
#include "Question.h"

int main()
{
	int result;
	int n = 6;	// number of pages in the book
	int p = 2;	// page number to turn to

	result = findPageCount(n, p);
	printf("%d ", result);	// The result 1
	
    return 0;
}
