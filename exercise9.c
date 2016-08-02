#include <stdio.h>
#include <string.h> 

int main() {
	
	char string1[100];
	char string2[100];
	printf("Enter two strings:\n");
	fgets(string1, sizeof(string1), stdin);
	fgets(string2, sizeof(string2), stdin);
	int x=strcmp(string1,string2);
	if (x==0)
		printf("Strings are the same\n");
	else 
		printf("Strings are different\n");

	return 0;
}
