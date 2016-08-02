//Matthew Kellerman
#include <stdio.h>


int compare(char *s1, char *s2){
int counter;
 int flag;

 //iterates through both strings
 //if you were to get user input, you would add the '\0' to the end of the string, and replace 5 with the string's length

for(int i =0;i<5;i++){
if(s1[i]==s2[i]){
counter = 1;
}
else{
	//if it is lesser, it come first
    if(s1[i]<s2[i]){
       flag = 0;
       }
       else{
       if(s1[i]>s2[i]){
       flag = 1;
       }
       }
counter =0;
//I know that strcmp() doesn't print the code below, but Ijust added it in so the output would be easier to understand.
printf("The strings are not the same.\n");
break;
}
	}
if(counter == 1){
printf(" %s and %s are the same.\n",s1,s2);
	return 0;
}
	else {
if(flag == 0){
printf("%s comes before %s.\n",s1,s2);
return -1;
}
else{
	if(flag == 1){
        printf("%s does not come before %s.\n",s1,s2);
       return 1;
}
}
}
		}

int main()
{
	char *s1 = "Hello";
	char *s2 = "Lello";
	char *s3 = "Hello";
	char *s4 = "Lelle";
int num =compare(s1,s2);
printf("%d\n",num);
	printf("\n");
int num2=compare(s1,s3);
printf("%d\n",num2);
	printf("\n");
int num3=compare(s2,s4);
printf("%d\n",num3);
	return 0;
}        

