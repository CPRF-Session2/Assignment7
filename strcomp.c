#include <stdio.h>
#include <string.h>


int stringcompare(char *a, char *b)
{
	//bool same

	int same = 1;
	int larger = 0;
	//temp value for larger
	char *c;
	if(sizeof(a) > sizeof(b))
	{
		c = a;
	}
	else c =b;
	
	for(int i = 0;i<sizeof(c);i++)
	{
		if(*a>*b) 
		{
			larger =  -1;
			break;
		}
		else
		{
			larger = -1;
			break;
		}
	}

	for(int i = 0; i<sizeof(c);i++)
	{

	if(*a == *b)
	{
	
	}
	else 
	{
		
		if(larger == 1)
		{
		printf("%d\n", larger);
		return 1;
		}
		else
		{
			printf("%d\n", larger);
			return -1;
		}
		printf("They are different");
		same = 0;
		break;
		
	}
	a++;
	b++;
	}
	if(same == 0);
	else printf("They are the same\n");
	
}
int main()
{

	char strOne[50];
	char strTwo[50];

	printf("Please input a string: ");
	fgets(strOne, sizeof(strOne), stdin);
	printf("Please input second string: ");
	fgets(strTwo, sizeof(strTwo), stdin);

	stringcompare(strOne, strTwo);
	
	return 0;
}
