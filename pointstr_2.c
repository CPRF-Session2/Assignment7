#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char st1[100], st2[100], *st1_ptr, *st2_ptr; 
int ii, nn;
enum alphabet {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z}; 
	printf("Enter a string: ");
	fgets(st1, 100, stdin);
	printf("Enter another string: ");
	fgets(st2, 100, stdin);
	nn = strlen(st1);
	st1_ptr = &st1;
	st2_ptr = &st2;
	for (ii = 0; ii < nn - 1; ii++){
		if (*(st1_ptr + ii) != *(st2_ptr + ii)){
			enum alphabet letter_1; 
			letter_1 = *(st1_ptr + ii);
			enum alphabet letter_2;
			letter_2 = *(st2_ptr + ii);
			if (letter_1 > letter_2){
			printf("1\n");
			break;}
			if (letter_1 < letter_2)
			printf("-1\n");
			break;
			}
		}
		if (ii == nn - 1 && nn == strlen(st2)){
			printf("0\n");
			if (nn > strlen(st2))
				printf("1");
			if (nn < strlen(st2))
				printf("-1");
		}
			
			
			
	return 0;

			}


