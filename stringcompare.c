/* Jared Wasserman -- stringcompare.c */
/* This program compares two string like the strcmp function.*/

#include <stdio.h>

int stringcompare(char *string1, char *string2){
	
	while(1){
		if((*string1=='\n'||*string1=='\0')&&(*string2=='\n'||*string2=='\0')){
			return 0;
		}else if(*string1==*string2){
			string1++;
			string2++;
		}else if(*string1<*string2){
			return *string1-*string2;
		}else{
			return *string1-*string2;
		}
	}

}

int main(){
	
	char str1[100];
	char str2[100];
	printf("Enter string 1: ");
	fgets(str1, 99, stdin);
	printf("Enter string 2: ");
	fgets(str2, 99, stdin);

	printf("Return value: %d\n",stringcompare(str1,str2));

return 0;
}
