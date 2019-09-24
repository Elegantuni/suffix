#include <stdio.h>
#include "suffix.h"

int main(void)
{
	char *data1 = "Testforrama.txt";
	char *result = suffix(data1);
	char *data2 = "Testfor.mountain";
	char *result2 = suffix(data2);
	char *data3 = "Testfor";
	char *result3 = suffix(data3);
		
	printf("The suffix of %s is %s\n", data1, result);
	printf("The suffix of %s is %s\n", data2, result2);
	printf("The suffix of %s is %s\n", data3, result3);
	
	return 0;
}

