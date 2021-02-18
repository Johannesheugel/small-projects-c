/* This programm calculate the zeros of a function and specify them by using Newton's method */ 
#include <stdio.h>
#include <math.h>
#define MAXWIDTH 100 /* has to be > 0 */
#define MINWIDTH -100 /* has to be < 0 */
#define PRECISION 20 /* number of repetitions */
#define NEGATIV 0
#define POSITIV 1

float zeros[(MAXWIDTH + (MINWIDTH * (-1))) / 2];

double f(float x){
	double y;
	y = 0.25 * x - cos(2 * x); /* place function here */
	return y;
}

double f_derivation(float x){
	double y;
	y = 0.25 + sin(x * 2) * 2; /* place first derivation of the function here */
	return y;
}

void search_zeros(int minw, int maxw); /* calculation of zeros of functions by approximation */

void newton_method(float manual_x); 
/* 
use Newton's method to specify the zeros 
if you want to use your own x-value replace manual_x in main()
*/

int main(){
	search_zeros(MINWIDTH, MAXWIDTH);
	newton_method(0); /* use 0 if you don't want to use your own x-value */
	return 0;
}

void search_zeros(int minw, int maxw){
	float a, t;
	int status, i;
	i = 0;
	if (f(minw) > 0){
		status = POSITIV;
	}
	else if(f(minw) < 0){ /* checks start value */
		status = NEGATIV;
	}
	for(a = minw * 4; t < maxw; ++a){
		t = a / 4;
		if(f(t) < 0 && status != NEGATIV){
			zeros[i] = t;
			++i;
			status = NEGATIV;
		}
		else if(f(t) > 0 && status != POSITIV){
			zeros[i] = t;
			++i;
			status = POSITIV;
		}
	}
}

void newton_method(float manual_x){
	float cache;
	int n, k;
	if(manual_x != 0){
		cache = manual_x;
		for(n = 0; n < PRECISION; ++n){
			cache = cache - (f(cache) / f_derivation(cache)); /* Newton's method */
		}
		printf("This is the calculation of Newton's method by using your declaration: \n %.8f\n\n", cache);
	}
	else{
		for(k = 0; zeros[k] != '\0'; ++k){
			cache = zeros[k];
			for(n = 0; n < PRECISION; ++n){
				cache = cache - (f(cache) / f_derivation(cache));
			}
			printf("%d. zero of graph f is located at:\n (%.8f|0)\n\n", k + 1, cache);
		}
	}
}