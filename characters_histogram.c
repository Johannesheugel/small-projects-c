#include <stdio.h>
/* counts all characters of the input and creats a histogram */
#define LIMIT 80
int main(){
long ncharacters[94];
int c, i, l, maxhight, stop;
stop = 0;
	 

for(i = 0; i <= 93; ++i){
	 	 ncharacters[i] = 0;
}
	 

while((c = getchar()) != EOF){
	 	 if(c >= 33 && c <= 126){
	 	 	 ++ncharacters[c - 33];
	 	 	 if(ncharacters[c - 33] > maxhight){
	 	 	 	 maxhight = ncharacters[c - 33];
	 	 	 }
	 	 }
}
for(i = 0; i <= 93; ++i){
	 	 putchar(i + 33);
	 	 printf(" |");
	 	 for(l = ncharacters[i]; l > 0; --l){
	 	 	 printf("*");
	 	 	 ++stop;
	 	 	 if(stop > LIMIT){
	 	 	 	 printf("...");
stop = 0;
break;
	 	 	 }
	 	 }
	 	 stop = 0;
	 	 printf("\n");
}
}