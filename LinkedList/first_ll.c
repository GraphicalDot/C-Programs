#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 100000


void generate_linked_list();
float random_number();

struct linked_list_member {
	


};




int main(){
	srand(getpid());
	time_t seconds;
	seconds = time(NULL);
	int i  = 0;
	while(i < MAX){
		int r_number = random_number();
		printf ("%d\n", r_number);
		i ++;
	};


	generate_linked_list();
	printf ("Total time taken to generate sorted linked list is %ld\n", time(NULL)-seconds);
	return 1;
};



void generate_linked_list(){
};



float random_number(){
	int r = rand()%1000000;
	return r;
};
