#include <stdio.h>

//Taken from http://stackoverflow.com/questions/1666353/are-typedef-and-define-the-same-in-c
/* typedef obeys scoping rules just like variables, whereas define stays valid until the end of the file (or until a matching undef).
 *
 * Also, some things can be done with typedef that cannot be done with define.
 *
 * Examples:
 *
	typedef int* int_p1;
	int_p1 a, b, c;  // a, b, and c are all int pointers.

 	#define int_p2 int*
 	int_p2 a, b, c;  // only the first is a pointer!
 
	typedef int a10[10];
	a10 a, b, c; // create three 10-int arrays

	typedef int (*func_p) (int);
	func_p fp // func_p is a pointer to a function that
 *           // takes an int and returns an int
 */





#define TRUE  1
#define FALSE 0
 
void main(){
	printf( "Value of TRUE : %d\n", TRUE);
	printf( "Value of FALSE : %d\n", FALSE);
	return ;
}
