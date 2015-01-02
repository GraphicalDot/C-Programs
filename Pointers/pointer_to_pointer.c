#include <stdio.h>

void main(){
	int var;
	int *ptr;
	int **pptr;

	var = 300; 
	ptr = &var;
	pptr = &ptr;
	printf ("The address of the var is %p from &var\n", &var);
	printf ("The address of the var is %p from ptr \n", ptr);
	printf ("The address of the ptr is %p from &ptr \n", &ptr);
	printf ("The address of the ptr is %p from **ptr \n", *pptr);
};
