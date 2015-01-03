#include <stdio.h>
#include <stdlib.h>


/* In C, the library function malloc is used to allocate a block of memory on the heap. The program 
 * accesses this block of memory via a pointer that malloc returns. When the memory is no longer 
 * needed, the pointer is passed to free which deallocates the memory so that it can be used for 
 * other purposes
 *
 * malloc ::: allocates the specified number of bytes
 * realloc ::: increases or decreases the size of the specified block of memory. Reallocates it if needed
 * calloc ::: allocates the specified number of bytes and initializes them to zero
 * free ::: releases the specified block of memory back to the system
 *
 * COMMON ERROS
 * Most common errors are as follows:
 * 
 * 1. Not checking for allocation failures. Memory allocation is not guaranteed to succeed, and may instead return 
 * a null pointer. If there's no check for successful allocation implemented, this usually leads to a crash of 
 * the program, due to the resulting segmentation fault on the null pointer dereference.
 * 
 * 2. Memory leaks. Failure to deallocate memory using free leads to buildup of non-reusable memory, which is no 
 * longer used by the program. This wastes memory resources and can lead to allocation failures when these resources are exhausted.
 * 
 * 3. Logical errors. All allocations must follow the same pattern: allocation using malloc, usage to store data, 
 * deallocation using free. Failures to adhere to this pattern, such as memory usage after a call to free (dangling pointer) 
 * or before a call to malloc (wild pointer), calling free twice ("double free"), etc., usually causes a segmentation fault 
 * and results in a crash of the program. These errors can be transient and hard to debug – for example, freed memory is 
 * usually not immediately reclaimed by the OS, and thus dangling pointers may persist for a while and appear to work.
 */


int main(){
	
	int *ptr_one;
	ptr_one = (int *)malloc(sizeof(int));

	if (ptr_one == 0){
		printf ("For unknown reasons the memory could not be allocated \n");
		return 1;
	}
	
	*ptr_one = 25;
	printf ("This is the value %d and memory address of the size allocated %p \n",*ptr_one, ptr_one);
	free(ptr_one);
	return 0 ;

};

