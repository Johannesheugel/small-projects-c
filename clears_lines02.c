/*
 * (version 2) programm delets all unnecessary tabs and blanks in the end of the sentence.
 * It also delets all empty lines.
 */
#include <stdio.h>
#define MAXLINE 1000 /* max input of one line */
int get_line(char s[], int limit);
int checkline(char character[], int len);
void printline(char line[], int rlen);
int main(){
char line[MAXLINE];
int len;
len = 0;
while((len = get_line(line, MAXLINE)) > 0){
	 	 len = checkline(line, len);
	 	 printline(line, len);
}
return 0;
}
/* saves a line and search for empty lines */
int get_line(char s[], int limit){
int c, i;
for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
	 	 s[i] = c;
}
if(i == 0 && c == '\n'){
	 	 s[0] = c;
	 	 ++i;
}
s[i] = '\0';
return i;
}
/* delets all tabs and spaces in the end of the line */
int checkline(char character[], int leng){
int i;
for(i = leng; character[i] < 33; --i){
	 	 ;
}
return i;
}
/* prints out the perfect line */
void printline(char line[], int rleng){
int i;
if(line[0] == '\n'){
	 	 ;
}
else{
	 	 for(i = 0; i < rleng + 1; ++i){
	 	 	 printf("%c", line[i]);
	 	 }
	 	 printf("\n");
}
}