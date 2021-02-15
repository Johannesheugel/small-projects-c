#include <stdio.h>
/* prints a histogram og the lengths of words */
#define MAXLENGTH 10 /* length of the histogram */
int main(){
int c, counter, i, e, l, overall, maxhight;
int ncharacters[MAXLENGTH - 1];
counter = 0;
maxhight = 0;
overall = 0;
	 

for(i = 0; i <= MAXLENGTH - 1; ++i){
	 	 ncharacters[i] = 0;
	 	 }
	 

while((c = getchar()) != EOF){
	 	 if(c == ' ' || c == '\t' || c == '\n' || c == ',' || c == '.' || c == '!' || c == '?'
	 	 || c == '-'){
	 	 	 if(counter > 0 && counter <= MAXLENGTH - 1){
	 	 	 	 ++ncharacters[counter - 1];
					if(ncharacters[counter - 1] > maxhight){
	 	 	 	 	 maxhight = ncharacters[counter - 1];
	 	 	 	 }
	 	 	 }
	 	 	 else if(counter >= MAXLENGTH){
	 	 	 	 ++ncharacters[MAXLENGTH - 1];
					if(ncharacters[MAXLENGTH - 1] > maxhight){
	 	 	 	 	 maxhight = ncharacters[MAXLENGTH - 1];
	 	 	 	 }
	 	 	 }
	 	 	 counter = 0;
	 	 }
	 	 else{
	 	 	 ++counter;
	 	 }
}
	 

/* output in numbers */
for(i = 0; i <= MAXLENGTH - 1; ++i){
	 	 printf("Anzahl der Wörter mit %d Buchstaben: %d \n", i + 1, ncharacters[i]);
}
	 

printf("\n");
/* output as a horizontal histogram */
printf("\nAnzahl der Buchstaben pro Wort: \n");
for(i = 0; i <= MAXLENGTH - 1; ++i){
	 	 if(i == MAXLENGTH - 1){
	 	 	 printf(">= %2d |", MAXLENGTH);
	 	 }
	 	 else{
	 	 	 printf("   %2d |", i + 1);
	 	 }
	 	 for(e = 1; e <= ncharacters[i]; ++e){
	 	 	 printf("-");
	 	 }
	 	 printf("\n");
}
printf("\nEin - entspricht einem Wort\n\n");
	 

/* output as a vertical histogram */
for(maxhight; maxhight > 0; --maxhight){
	 	 printf("%3d |", maxhight);
	 	 for(l = 0; l < MAXLENGTH; ++l){
	 	 	 if(ncharacters[l] >= maxhight){
	 	 	 	 printf(" * ");
	 	 	 }
	 	 	 else{
	 	 	 	 printf("   ");
	 	 	 }
	 	 }
	 	 printf("\n");
}
printf("     ");
for(l = 0; l < MAXLENGTH; ++l){
	 	 printf("---");
}
printf("\n    ");
for(l = 0; l < MAXLENGTH; ++l){
	 	 printf(" %2d", l + 1);
	 	 overall = overall + ncharacters[l];
}
	 

printf(" =< \n\nGesammtzahl aller Wörter: %d", overall);
return 0;
}