#include <stdio.h>
#include <string.h>

int compare(const char *string1, const char *string2)
{
	int i, x, y, d;

	x = strlen(string1);
	
	y = strlen(string2);
	
	if (x<=y)
	{
		for (i=0; i<x; i++)
		{	
			if (string1[i]<string2[i])
			{
				return -1;
			}
			else if (string1[i]>string2[i])
			{	
				return 1;
			}
			
		}
	}

	if (x>=y)
	{
		for (d=0; d<y; d++)
		{
			if (string1[i]<string2[i])
			{
				return -1;
			}
			else if (string1[i]>string2[i])
			{
				return 1;
			}
		}
	}

}


int main()
{
	char x[50], y[50];

	printf("Enter in a string of characters : ");

	scanf("%s", x);

	printf("Enter in another string of chracters : ");

	scanf("%s", y);

	compare(x, y);

	printf("%d", compare(x, y));

	return 0;

}
