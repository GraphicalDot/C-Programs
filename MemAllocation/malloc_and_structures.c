#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Program copied from 
 * http://www.codingunit.com/c-tutorial-the-functions-malloc-and-free
 */


void without_pointer();
typedef struct {
	int book_id;
	float PI;
	char A;

} Book;


void main(){
	Book *book;
	book = (Book *)malloc (sizeof(Book));

	(*book).book_id = 4242;
	(*book).PI = 3.145666;
	(*book).A = 'a'; /*In C and in C++ single quotes identify a single character, while double quotes create a string literal. 
			   'a' is a single a character literal, while "a" is a string literal containing an 'a' and a null terminator 
			   (that is a 2 char array) */
	
	printf ("The Addrees of the book pointer is  is %p \n", book);
	printf ("The bookid with pinter is %d \n", (*book).book_id);
	printf ("The bookid with pinter is %f \n", (*book).PI);
	printf ("The bookid with pinter is %c \n", (*book).A);
	
	without_pointer();
	free(book);
	return ;
};


void without_pointer(){
	Book book1;
	book1.book_id = 4334;
	book1.PI = 3.424242;
	book1.A = 'f';
	printf ("The Addrees of the book pointer is  is %p \n", &book1);
	printf ("The bookid without pinter function is %d \n", book1.book_id);
	printf ("The bookid without pinter function is %f \n", book1.PI);
	printf ("The bookid without pinter function is %c \n", book1.A);



}
