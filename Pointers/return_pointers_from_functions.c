#include <stdio.h>
#include <time.h>
#define MAX 10
/*static variables can be 'seen' within all functions in this source file. At link time, 
 * the static variables defined here will not be seen by the object modules that are brought in.
 * static can also be defined within a function. If this is done the variable is initalised at run 
 * time but is not reinitalized when the function is called. This inside a function static variable 
 * retains its value during vairous calls
 * static variables are initialized to 0 automatically.
 */


/*extern is used to give a reference of a global variable that is visible to ALL the program files. 
 * When you use 'extern' the variable cannot be initalized as all it does is point the variable name 
 * at a storage location that has been previously defined
 */

int main(){
	static int r[10];
	int i;

	srand((unsigned)time(NULL));
	for (i =0; i<MAX; i++){
		r[i] = rand();
		printf ("%d\n", r[i]);
	};
	return 0;
}

