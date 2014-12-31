#include <stdio.h>
#include <inttypes.h>
/*You may want to try using the inttypes.h library that gives you types such as int32_t, int64_t, uint64_t etc. 
 * You can then use its macros such as:
 * uint64_t x;
 * uint32_t y;
 * printf("x: %"PRId64", y: %"PRId32"\n", x, y);
 * This is "guaranteed" to not give you the same trouble as long, unsigned long long etc, 
 * since you don't have to guess how many bits are in each data type.
 */


int multiply(int x, int y );

int main(){

	long int x;
	long int y;
	printf ("This is the program to multiply two number and explain the function organization in C \n");
	printf ("Please enter the Two numbers to be multiplied \n");
	//scanf ("%d", &x);
	scanf ("%lu", &x);
	scanf ("%lu", &y);
	printf ("This is the product of two numbers %d", multiply(x, y));
	return 0;
}

int multiply(int a, int b){
	return a*b;

}

