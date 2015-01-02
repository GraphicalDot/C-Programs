#include <stdio.h>

struct database {
	int id_number;
	int age;
	float salary;
};


void main(){
	struct database employee; 
	employee.age = 22;
	employee.id_number = 1;
	employee.salary = 12000.21;
	printf ("Enter the salary of the amployee \n");
	scanf ("%d", &employee.age);
	printf ("Here is the age of the employee %d \n", employee.age);

	return;
};
