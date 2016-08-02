/*Rebecca Hale Assignment 7 Part 1*/
#include <stdio.h>

int strcmp1(char *c, char *d){
	int i = 0;
	int count=0;
	while(c[count]!='\0' && d[count]!='\0')
		count++;
	/*count-2 is the last letter of the shorter word*/
	while(i<count-1 && c[i]==d[i])
		i++;/*finds first instance of unlike chars*/
	if(c[i]>d[i])
		count=1;
	else if(c[i]<d[i])
		count = -1;
	else count=0;
	return count;
}

int main(){
	char a[100];
	char b[100];
	printf("Enter a string: ");
	fgets(a, sizeof(a), stdin);
	printf("\nEnter another string: ");
	fgets(b, sizeof(b), stdin);
	char *aPtr = a;/*pointer creation*/
	char *bPtr = b;/*pointer creation*/
	printf("\n%d", strcmp1(aPtr, bPtr));	
	return 0;
}
