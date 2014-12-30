#include <stdio.h>

int main(){
	int x;
	/* The loop goes while increses is less than 10, and after every iteration x increses by one
	 */
	for (x=0; x<10; x++){
		printf ("This is the fucking new value of the x after every loop %d \n", x);
		while_loop(x);
	}	

	return 0;
};



int while_loop(x){
	while(x < 10){
		printf ("This fuck is originating from while loop %d \n", x);
		x++;
	};
	return 0;

}
