#include <stdio.h>
#define NAME_SIZE

typedef struct __map_t {
	int code;
	char name[NAME_SIZE];
	char *alias;
} map_t;

