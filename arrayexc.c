//Ashank Kumar, compares two strings
#include <stdio.h>
#include <string.h>

int fnx(char *string1, char *string2)
{
	int y = strlen(string1);
	int z = strlen(string2);

	if(y >= z)
	{
	for(int i = 0; i < z; i++)
	{
		if(string1[i] != string2[i])	
		{
				if(string1[i] > string2[i])
				{
					return 1;
				}
				else if(string1[i] < string2[i])
				{
					return -1;
				}
		}
	}
	}

	else if(z >= y)
	{
		for(int i = 0; i < y; i++)
		{
			if(string1[i] != string2[i])
			{
				if(string1[i] > string2[i])
				{
					return 1;
				}
				else if(string1[i] < string2[i])
				{
					return -1;
				}
			}
		}
	}
	return 0;
}

int main()
{
	char string1[50];
	char string2[50];
	int var;

	printf("Enter a string:");
	fgets(string1, 50, stdin);

	printf("Enter a string:");
	fgets(string2, 50, stdin);

	char *word1 = string1;
	char *word2 = string2;

	var = fnx(word1, word2);

	printf("%d\n",var);

	return 0;
}
