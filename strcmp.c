//Albert Zhang
//Compares two inputs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strcmp1(char *str1, char *str2) {
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int x;
	if(l1 >= l2) {
		l1 = l2;
	}
	for(x = 0; x <= l1; x++) {
		if (str1[x] != str2[x]) {
			break;
		}
		if (str1[x] == str2[x]) {
			return 0;
		}
	}
	if (str1[x] > str2[x]) {
			return 1;
	}
	if (str1[x] < str2[x]) {
			return -1;
	}

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
	int *a, *b;
	a = strcmp1(str1, str2);
	b = strcmp(str1, str2);
	printf("str: %d \n", b);
	printf("func: %d \n", a);
	return 0;
}
