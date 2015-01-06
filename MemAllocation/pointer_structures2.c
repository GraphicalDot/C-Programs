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
	struct student kaali;
	kaali.name = "ali";
	kaali.age = 29;
	kaali.year = 424;
	kaali.gpa = 5.9;
	printf (" name = %s, \n age = %d,\n year=%d,\n gpa=%f\n", kaali.name, kaali.age, kaali.year, kaali.gpa);
	
	printf ("The value is %p", &(kaali.name));

	int len = strlen(kaali.name);
	char *ptr; 

	ptr = kaali.name;
	int i = 0;
	printf ("The value is %p", ptr);
	printf ("The value is %s", ptr);

	/*
	while(i < len){
		printf ("The value is %c and address  %p\n ", *ptr, ptr);
		*ptr++;

	};
	*/

	return ;
};

