#include<stdio.h>
#include<string.h>

int main()
{
	char strp[100], strs[100];

	printf("Enter text: \n");
	gets(strp);
	printf("Enter text: \n");
	gets(strs);

	if(strcmp(strp,strs)==0)
	{
		printf("Both the texts are the same\n");

	}
	else
	{
		printf("Both the texts are not equal\n");
	}
	getch();
	return 0;
}
