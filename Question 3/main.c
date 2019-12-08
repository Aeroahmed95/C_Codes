/*
 * This file is a test case you may use and change to check your code
 */
#include "Question.h"

int main()
{
	char* result;
	
	char* arr = "Ahmed,Omar,Maged,Mohanad,Gamal,Mohammed";

	result = stringRearrange(arr);
    printf("%s", result);	// The result Will be "Ahmed,Gamal,Maged,Mohammed,Mohanad,Omar"
	
    return 0;
}
