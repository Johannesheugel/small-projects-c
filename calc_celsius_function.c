#include <stdio.h>
/* introduction of the calculation function */
float calc_celsius(float fahr);
int main(){
	 

printf("%.3f", calc_celsius(20)); /* example with 20 */
return 0;
}
/* calculation function */
float calc_celsius(float fahr){
	 	 float celsius;
	 	 celsius = (fahr - 32) * (5.0/9.0);
	 	 return celsius;
}