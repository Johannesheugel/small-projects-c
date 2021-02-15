#include <stdio.h>
#define MAXLINE 1000 /* max input line size */
#define LIMIT 5 /* lines which lengths are above the LIMIT will printed out */
/* for the correct solution of the exercise, the LIMIT has to be 80 */
int get_line(char line[], int maxline);
/* prints out all lines which length is above the LIMIT */
int main() {
	int len;
	char line[MAXLINE];


	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > LIMIT) {
			printf("%s\n", line);
		}
		for (len; len >= 0; --len) {
			line[len] = '\0';
		}
	}
	printf("\nLimit: %d characters \n", LIMIT);
	return 0;
}
int get_line(char s[], int lim) {
	int c, i;


	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	return i;
}