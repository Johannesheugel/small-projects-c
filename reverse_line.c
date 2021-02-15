#include <stdio.h>
/* Exercise 1-19. Write a function "reverse(s)" that reverses the character
 * string "s". Use it to write a program that reverses its input a line at a
 * time.
 */
#define MAXLINE 1000
int get_line(char line[], int limit);
void reverse(char line[]);
int main(){
int len;
char line[MAXLINE];
while((len = get_line(line, MAXLINE)) > 0){
	 	 reverse(line);
	 	 printf("%s\n", line);
}
return 0;
}
int get_line(char s[], int limit){
int c, i;
for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
	 	 s[i] = c;
}
if(i == 0 && c == '\n'){
	 	 s[0] = ' ';
	 	 ++i;
}
s[i] = '\0';
return i;
}
void reverse(char s[]){
int i, j;
char t[MAXLINE];
for(i = 0; s[i] != '\0'; ++i){
	 	 t[i] = s[i];
}
i = i - 1;
for(j = i; j >= 0; --j){
	 	 s[i - j] = t[j];
}
}