#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 10



struct linked_list_member {
	int value;
	struct linked_list_member *next;	
};


void generate_linked_list();
float random_number();
struct linked_list_member* ll_member(int);
struct linked_list_member* building_head_node();
void print_linked_list(struct linked_list_member*);


int main(){
	srand(getpid());
	time_t seconds;
	seconds = time(NULL);
	int i  = 0;

	/*Pointer to the head function
	 * struct linked_list_member* decalres that this is a pointer to type struct linked_list_member
	 *  *head_function_pointer declares that this is a pointer 
	 *  parenthesis after the pointer to declare that this is a pointer for a function and not a NULL pointer
	 */
	struct linked_list_member* (*head_function_pointer)() = building_head_node;
	struct linked_list_member* head_pointer ;
	head_pointer = (*head_function_pointer)();
		
	/*Adding first element to the linked list after the head */
	struct linked_list_member *next_struct;
	next_struct = ll_member(21);

	(*head_pointer).next = next_struct;
	
	/*Adding elements to the linked list by adding elements after the head node generated above
	 */
	while(i < MAX){

		int r_number = random_number();
		struct linked_list_member *pointer_to_new_struct;
		pointer_to_new_struct = ll_member(r_number);
	
		(*next_struct).next = pointer_to_new_struct;
		//printf ("The next nod value is %d and its address is %p and its parent is %p", (*pointer_to_new_struct).value, 
		//	pointer_to_new_struct, next_struct);
		next_struct = pointer_to_new_struct;	
		
		printf ("%d\n", r_number);
		i ++;
	};
	
	print_linked_list(head_pointer);
	printf ("Total time taken to generate sorted linked list is %ld\n", time(NULL)-seconds);
	return 1;
};


void print_linked_list(struct linked_list_member* head){
	struct linked_list_member* is_end;
	printf ("Printing the value stored in head %d and its address %p\n", (*head).value, head);
	is_end = head;
	while((*is_end).next != NULL){
		struct linked_list_member* next_node ;
		next_node = (*is_end).next ;
		printf ("Printing the value stored in next node  %d and its address %p\n", (*next_node).value, next_node);
		is_end = next_node;
	};

	return;
};



struct linked_list_member* building_head_node(){
	/*This function build the head of the linked list, Botht he value of the head node and the next pointer of the head
	 * node is set NULL 
	 */
	struct linked_list_member* head = malloc(sizeof(struct linked_list_member));
	(*head).value = 0;
	(*head).next = NULL;
	return head;

};



struct linked_list_member* ll_member(int value){
	/*This is returning a pointer to a struct by allocating memory of size of the struct,
	 * it also checks the asserting whether the memory required has been succeful or not */
	struct linked_list_member *ll_ptr =( struct linked_list_member *)malloc(sizeof(struct linked_list_member));
	assert(ll_ptr != NULL);
	(*ll_ptr).value = value;
	(*ll_ptr).next = NULL;
	return ll_ptr ;	
};
	



void generate_linked_list(){
};



float random_number(){
	int r = rand()%1000000;
	return r;
};
