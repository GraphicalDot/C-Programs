#include <stdio.h>
#include <string.h>

struct inventory {
	int part_number;
	float cost;
	float price;

};

void read_part(struct inventory  *pointer_to_kaali);
void print_part(struct inventory  *pointer_to_kaali);

void main(){
	struct inventory item;
	printf ("*** Part Inventory Data ***\n\n");
	read_part(&item);
	print_part(&item);	
	return ;
};

void print_part(struct inventory  *pointer_to_kaali){
	printf ("Part no = %d, Cost = %5.2f , Retail price = %5.2f\n", (*pointer_to_kaali).part_number, (*pointer_to_kaali).cost, 
									(*pointer_to_kaali).price);
	return;
}



void read_part(struct inventory  *pointer_to_kaali){
	int n ;
	float x; 
	printf ("Please enter the par number \n");
	scanf ("%d", &n);
	(*pointer_to_kaali).part_number = n;

	printf ("Please enter the cost \n");
	scanf ("%f", &x);
	(*pointer_to_kaali).cost = x;
	
	printf ("Please enter the price \n");
	scanf ("%f", &x);
	(*pointer_to_kaali).price = x;
	return;
};






