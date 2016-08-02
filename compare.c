/* This code allows the user to input two strings using pointers and then compares them to tell whether they are different or come before one another in lexicographical order. - Amanda Cuevas */
#include <stdio.h>
#include <string.h>
int comparison(char *stringA, char *stringB) {
	int x;
	int i;
	int l;
	int len;
	int var;
	printf("Please enter the first string to be compared:\n");
	fgets(stringA, sizeof(stringA), stdin);
	stringA[strlen(stringA) - 1] = '\0';
	
	l = strlen(stringA);

	printf("Good. Now please enter the second string:\n");
	fgets(stringA, sizeof(stringA), stdin);
	stringB[strlen(stringB) - 1] = '\0';

	len = strlen(stringB);

	if(l>len) {
		var = len;
	}

	if(len>l) {
		var = l;
		}

	for(i=0;i<var;i++) {
		
	if(stringA[i] != stringB[i]) 
		break;
	}
	if(stringA[i] > stringB[i])
		return 1;
	if(stringA[i] < stringB[i])
		return -1;
	if(stringA[i] == stringB[i])
		return 0;


}

int main() {
	int x;
	int call;
	char *stringA;
	char *stringB;
	char strA[100];
	char strB[100];
	stringA = strA;
	stringB = strB;
	printf("%d", comparison(stringA, stringB));
	printf("\n%d",strcmp(stringA, stringB));
		/*
	call = comparison(stringA, stringB);
	printf("%d\n", x);
	if(x == 0) {
		printf("String A and String B are the same value.\n");
	}

	if(x < 0) {
		printf("String A comes before String B in alphabetical order.\n");
	}
	if(x > 0) {
		printf("String B comes before String A in alphabetical order.\n");
	}
	*/
return 0;
	}
