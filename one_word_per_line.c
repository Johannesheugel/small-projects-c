#include <stdio.h>
/* print one word per line */
#define OUT 0
#define IN 1
int main(){
int c, state, sp;
state = OUT;
sp = 1;
while((c = getchar()) != EOF){
	 	 if(c == ' ' || c == '\n' || c == '\t'){
	 	 	 state = OUT;
	 	 	 ++sp;
	 	 }
	 	 else if(sp >= 1){
	 	 	 state = IN;
	 	 	 sp = 0;
	 	 	 putchar('\n');
	 	 }
	 	 if(state == IN){
	 	 	 putchar(c);
	 	 }
	 

}
}