#include <stdio.h>

void main(){
	int x;
	int *p;
	p = &x ;
	printf ("Enter any number to display the working of pointers \n");
	scanf( "%d", &x );          /* Put a value in x, we could also use p here */
	printf( "%d\n", *p );
	printf( "%p\n", p );
	
}

