#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char *name;
	int age;
	int year;
	float gpa;
};

void main(){
	struct student kaali = {"ali", 29, 424, 5.9};
	printf (" name = %s, \n age = %d,\n year=%d,\n gpa=%f\n", kaali.name, kaali.age, kaali.year, kaali.gpa);
	
	
	struct student *struct_pointer ;
	struct_pointer = &kaali;
	
	printf (" name = %s, \n age = %d,\n year=%d,\n gpa=%f\n", (*struct_pointer).name, 
			(*struct_pointer).age, (*struct_pointer).year, (*struct_pointer).gpa);

	return ;
};

