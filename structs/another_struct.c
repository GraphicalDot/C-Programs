#include <stdio.h>
#include <string.h>

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void main(){
	struct Books Book1;
	struct Books Book2;
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Kaali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy( Book2.title, "Telecom Billing");
	strcpy( Book2.author, "Zara Ali");
	strcpy( Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	printf ("The book1 title is %s and author is %s with subject %s and id %d \n", Book1.title, Book1.author, Book1.subject, Book1.book_id);
	return;

};


