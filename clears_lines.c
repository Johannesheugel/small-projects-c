#include <stdio.h>
/* (version 1) programm delets all tabs and unnecessary blanks and lines */
int main(){
int c, blank, newLine;
blank = newLine = 0;
while((c = getchar()) != EOF){
	 	 if(c == '\t'){
	 	 	 ;
	 	 }
	 	 else if(c == ' '){
	 	 	 if(blank < 1){
	 	 	 	 putchar(c);
	 	 	 }
	 	 	 ++blank;
	 	 }
	 	 else if(c == '\n' && newLine < 1){
	 	 	 if(newLine < 1){
	 	 	 	 putchar(c);
	 	 	 }
	 	 	 ++newLine;
	 	 }
	 	 else{
	 	 	 putchar(c);
	 	 	 blank = newLine = 0;
	 	 }
}
return 0;
}