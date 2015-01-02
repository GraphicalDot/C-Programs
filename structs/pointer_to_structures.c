#include <stdio.h>
#include <string.h>

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBooks(struct Books *book);

void main(){
	struct Books Book1;
	struct Books Book2;

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali"); 
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;
	printBooks(&Book1);
	
	/* book 2 specification */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;


};

void printBooks(struct Books *book){
	printf("The title of the book is %s \n", book->title);
	printf("The author of the book is %s \n", book->author);
	printf("The subject of the book is %s \n", book->subject);
	printf("The id of the book is %d \n", book->book_id);
}
