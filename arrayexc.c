//Ashank Kumar, compares two strings
#include <stdio.h>
#include <string.h>

int fnx(char *string1, char *string2)
{
	return strcmp(string1, string2);
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
