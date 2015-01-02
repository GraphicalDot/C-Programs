#include <stdio.h>

void main(){
	int var1;
	var1 = 20;
	char var2[2];
	int *p;
	p = &var1;
	printf ("The address of var1 is %p\n", &var1);
	printf ("The address stored in p is  %p\n", p);
	printf ("The value of *p is %d\n", *p);
		
	printf ("The address of var1 is %p\n", &var2);


};
