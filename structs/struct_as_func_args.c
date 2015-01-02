#include <stdio.h>
#include <string.h>

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);

void main(){
	struct Books Book1;
	struct Books Book2;
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Kaali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;
	printBook(Book1);

	/* book 2 specification */
	strcpy( Book2.title, "Telecom Billing");
	strcpy( Book2.author, "Zara Ali");
	strcpy( Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;
	printBook(Book2);

	return;

};

void printBook(struct Books book){
	printf ("The book1 title is %s and author is %s with subject %s and id %d \n", book.title, book.author, book.subject, book.book_id);

};







