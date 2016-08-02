/*Jinoo Hong*/
/*Write a function that emplements strcmp() (using pointers)*/

#include <stdio.h>
#include <string.h>

int compare(char *string1, char *string2) {
	int length = strlen(string1);
	int count;
	for (count = 0; count < length; count++) {
		char current1 = string1[count];
		char current2 = string2[count];
		if (current1<current2) {
			return -1;
		}
		if (current1>current2) {
			return 1;
		}
		else {
			continue;
		}
	}
	return 0;
}

int main() {
	char string1[100];
	char string2[100];
	printf("Please type a string: ");
	fgets(string1, 100, stdin);
	printf("Please type a string: ");
	fgets(string2, 100, stdin);
	int var = compare(string1, string2);
	printf("%d\n", var);
	return 1;
}

