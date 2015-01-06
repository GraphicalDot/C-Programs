#include <stdio.h>
#include "lbl.h"
#include "lblutil.h"
#define False 0
#define True 1

void main(){
	struct label person;
	printf ("*** Label Data for the Person ***\n\n");
	readlabel(&person);
	printf("\n Label Data \n");
	printlabel(&person);
};


int readlabel(struct label *ptr){
	int x;	
	printf ("Enter Name <FIRST MIDDLE LAST>, EOF to quit: \n");
	x = scanf("%s %s %s", (*ptr).name.first, (*ptr).name.middle, (*ptr).name.last );
	if ( x == EOF){
		return 0;
	};

	return 1;
};

void printlabel(struct label *ptr){

	return ;
};

