#include <stdio.h>

int add(int, int);
int subtract(int, int);
int multiply_n_print(int, int);
int domath( int(*mathop)(int, int), int , int );



void main(){
	int (*multiply_n_print_pointer)(int, int) = multiply_n_print; 

	int z = multiply_n_print_pointer(89, 98);
	printf ("Here is the multiplication result %d \n", z);

	/*Passing function ponters to other functions for compuations */
	int a = domath(add, 250, 67);
	printf ("Here is the addition result %d \n", a);
	printf ("Here is the subtraction result %d \n", domath(subtract, 250, 67));

	return ;
};


int domath(int (*mathop)(int, int), int x, int y){
	return mathop(x, y);

};

int multiply_n_print(int x, int y){
	return x*y;

};

int add(int x, int y){
	return x+y;
};

int subtract(int x, int y){
	return x-y;
};

