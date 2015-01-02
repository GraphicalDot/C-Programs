#include <stdio.h>
#define MAX 4

void array_with_pointers(int var[]);

void main(){
	int var[] = {10, 100, 200, 300, 400};
	int i;
	for(i = 0; i< MAX; i++){
		printf ("This is the value stord in array %d at position %d at position %p\n", i, var[i], &var[i]);
	}

	printf ("Now with the ptr array \n\n");
	array_with_pointers(var);
	return ;
};

void array_with_pointers(int var[]){
	//int var[] = {10, 100, 200, 300, 400};
	int i, *ptr[MAX];

	for(i = 0; i< MAX; i++){
		ptr[i] = &var[i];
	};

	for(i = 0; i< MAX; i++){
		//printf ("This is the value stord in array %d at position %d at position %p\n", i, var[i], &var[i]);
		printf ("This is the value stord in array %d at position %d at position %p\n", i, *ptr[i], ptr[i]);
	};

	return ;
};

