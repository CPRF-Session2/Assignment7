/* Drew French */

/* Returns 0 if the strings
 * are the same, 1 if the
 * first character is greater,
 * and -1 if the first character
 * is lower.
 */

 /* Ran out of time, always returns 1 :/ */

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[50];
	char str2[50];
	int strcmp = 0;
	fgets(str1, sizeof(str1), stdin);
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = '\0';
	str2[strlen(str2) - 1] = '\0';
	int i;
	for(i = 0; i < 50; i++)
	{
		if(str1[i] == str2[i])
			break;
		else
			if(str1[i] > str2[i])
				strcmp = 1;
			else
				strcmp = -1;
 
		if(strcmp == 1 || strcmp == -1)
			break;
	}

	if(strcmp == 0)
		printf("\n0\n");
	if(strcmp == 1)
		printf("\n1\n");
	if(strcmp == -1)
		printf("\n-1\n");

	return 0;
}