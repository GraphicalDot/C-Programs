#include <stdio.h>
#include <string.h>


typedef struct Telephone {
	char *name;
	int number;
} TELEPHONE;


void main(){
	TELEPHONE telephone;
	telephone.name = "kaalis";
	telephone.number = 23;
	printf ("This is the details of the telephone structures  created %s and %d \n\n", telephone.name, telephone.number);
	return;
};
