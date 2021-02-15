#include <stdio.h>
/* replacing every string of one or more blanks by a single blank */
int main(){
 int c, sp;
 sp = 0;
 while((c = getchar()) != EOF){
 if(c == ' '){ 	 

	 	 ++sp;
 }
 else if(sp >= 1){
	 	 printf(" ");
	 	 sp = 0;
	 	 putchar(c);
 }
 else{
	 	 putchar(c);
	 	 sp = 0;
 }
 }
}