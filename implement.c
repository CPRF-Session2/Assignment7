#include <stdio.h>
#include <string.h>
/* Compares two strings*/
int main(){
	char str1[30];
	char str2[30];
	int x,out;
	int compare(char*str1,char*str2){
		int out=0;
		for(x=0;x<strlen(str1);x++){
			if(*str1<*str2){
				out=1;}
			else if(*str2<*str2){
				out=-1;}
			str1++;
			str2++;
			}
		return out;}
	printf("Enter something:");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter something:");
	fgets(str1,sizeof(str1),stdin);

	str1[strlen(str1)-1]='\0';
	str2[strlen(str1)-2]='\0';

	out=compare(str1,str2);
	printf("\n%d\n",out);
	return 0;}
		
		
