/*
 * This file is a test case you may use and change to check your code
 */
#include "stringRearrange.h"


int main()
{
    
    char* result;
	char arr[] = "Ahmed,Omar,Maged,Mohanad,Gamal,Mohammed";
    printf("the old order was :: %s\n", arr);
	result = stringRearrange(arr);
    printf("the new order is  :: %s", result);
    return 0;
}
