#include "suffix.h"

char *suffix(char *data1)
{
	int index1 = 0;

	while(data1[index1] != '\0')
	{
		index1++;
	}

	char *result1 = (char *)malloc(index1 * sizeof(char) + 1);

	for(int i = index1; i >= 0; i--)
	{
		if(data1[i] == '.')
		{
			for(int j = i, k = 0; j <= index1; j++, k++)
			{
				result1[k] = data1[j];
			}

			return result1;
		}
	}

	return "NONE";
}

