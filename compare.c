#include <stdio.h>
#include <string.h>
int func (char *a, char *b) {
	int q;
	q = strcmp(a, b);
return q;
}

int main () {
char s1[100];
char s2[100];
int q;
printf("Please enter two strings.\n");
fgets(s1, sizeof(s1), stdin);
fgets(s2, sizeof(s2), stdin);
q= func(s1, s2);
printf("%d\n", q);


return 0;
}
