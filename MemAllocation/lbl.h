/*File: lbl.h 
 * 	This file contains structure tags for lables.Label has two members,
 * 	name and address, each of which is a sturcture type
 */



struct name_recd {
	char last[15];
	char first[15];
	char middle[15];
};


struct add_recd {
	char street[25];
	char city[15];
	char state[15];
	long zip;
};


struct label {
	struct name_recd name;
	struct add_recd address;
};
