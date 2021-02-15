#include <stdio.h>
int main(){
 float fahr, celsius;
 int lower, upper, step;

 lower = 0; /* lowest limit */
 upper = 300; /* highest limit */
 step = 20; /* step size */

 celsius = lower;
 while (celsius <= upper) {
 	 	 fahr = celsius * (9.0/5.0) + 32.0;
	 	 printf("%3.0f %6.1f \n", celsius, fahr);
	 	 celsius = celsius + step;
	 	 }
}