#include <stdio.h>
#define MAX 5


void main(){
	int var[] = {10, 100, 200, 300, 400};
	int i, *ptr ;
	ptr = &var[MAX -1];
	for (i = MAX; i > 0; i--){
		printf("Address of var[%d] = %p\n", i, ptr );
		printf("Value of var[%d] = %d\n", i, *ptr );
		/* move to the previous location */
		ptr--;
	}
};







void incrementing_pointer(){
	int var[] = {10, 100, 200, 300, 400};
	int i, *ptr ;

	ptr = var ;/* For arrays we dont have to write &before array */
	
	for (i =0; i< MAX; i++){
		printf ("Value of var[%d] is %d\n ", i, *ptr);
		printf ("Address of var[%d] is %p\n", i, ptr);
		ptr++; 
	};


};


