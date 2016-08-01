//Albert Zhang
//Compares two inputs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *compare(char* ptr1, char* ptr2) {
//Compares two inputs	
	int *boi;
	*boi = strcmp(ptr1, ptr2);
	printf("%d \n", *boi);
}

int main () {
//Gets input
	char str1[100];
	printf("Enter a string ");
	fgets(str1, sizeof(str1), stdin);

	char str2[100];
	printf("Enter a second string ");
	fgets(str2, sizeof(str2), stdin);
//Compares inputs	
	int *a;
	compare(str1, str2);
	return 0;
}
