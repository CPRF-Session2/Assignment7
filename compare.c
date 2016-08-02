/*Can Parlar Scans 2 strings and prints out the comparison.  */
#include <stdio.h>
#include <string.h>

int compare(char *s1, char *s2) {
	int num=0;
	int i;

	for(i=0;i<strlen(s1);i++) {
		if (*s1 != *s2) {

			if (*s1 > *s2) {
			num = +1;}
			if (*s2 > *s1) {
			num = -1;}
		}
	s1++;
	s2++;
	}
	return num;

} 

int main () {
	char s1[25];
	char s2[25];
	int num;

	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);

	s1[strlen(s1)-1] = '\0';
	s2[strlen(s2)-1] = '\0';

	num = compare(s1, s2);
	printf("\n%d\n",num); 
	return 0;
}
