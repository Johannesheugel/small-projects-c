#include <stdio.h>
/* makes backslash, tabs and backspace visible */
int main(){
int c;
while((c = getchar()) != EOF){
	 	 if(c == '\t'){
	 	 	 printf("\\");
	 	 	 printf("\\t ");
	 	 }
	 	 else if(c == '\b'){ /* idk when this happen... */
	 	 	 printf("\\");
	 	 	 printf("\\b ");
	 	 }
	 	 else if(c == '\\'){
	 	 	 printf("\\");
	 	 	 printf("\\ ");
	 	 }
	 	 else{
	 	 	 putchar(c);
	 	 }
}
}