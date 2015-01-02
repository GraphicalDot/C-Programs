#include <stdio.h>

//Referenced from http://denniskubes.com/2013/03/22/basics-of-function-pointers-in-c/


/*We are creating a function pointer to a function that returns nothing (void) so the return type is void. That is the void keyword.
 * We have the pointer name sayHelloPtr. This is similar to creating any other pointer it has to have a name.
 * We use the * notation to signify that it is a pointer. This is no different than declaring an int pointer or a char pointer.
 * We must have parentheses around the pointer (*sayHelloPrt). If we don’t have parentheses it is seen as void *sayHelloPtr which is a void pointer instead of a pointer to a void function. This is a key point, function pointers must have parentheses around them.
 * We have the parameter list which in this case there isn’t one so it is just empty parentheses (*sayHelloPrt)().
 * Putting it all together we get void (*sayHelloPtr)(), a pointer to a function that returns void and takes no parameters.
 */

int with_return_value(int, int);
void multiply_and_print(int, int);
void sayHello();


void main(){
	void (*sayHelloPointer)()  = sayHello; //The address of the function is the function name itself. so 
	void(*multiply_and_print_pointer)(int, int) = multiply_and_print;
	

	printf ("Lets try to print the function address %p", sayHello);
	(*sayHelloPointer)();
	sayHelloPointer();
	multiply_and_print_pointer(80, 80);

	/* Now we will experiment with a function pointer which will have a return value too */
	int (*with_return_value_pointer)(int, int) = with_return_value;
	int z = (*with_return_value_pointer)(98, 800);
	printf ("Here is the result with a function pointer wchich returns a value %d \n", z);





};

int with_return_value(int x, int y){
	return x*y;

};



void sayHello(){
	printf("\n\n Hello world!! asshole :) :) \n\n");
};

void multiply_and_print(int x, int y){
	int z = x*y;
	printf ("So In general the fuck multiplication happend and prints the result as %d", z);
};
