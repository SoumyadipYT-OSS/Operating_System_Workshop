/*	Keyword: 'typedef' and 'struct' */
#include<stdio.h>
#include<string.h>
void displayDetails(char bN[15], char mN[10], char ch, int id) {		// display details
	printf("Brand: %s\n", bN);
	printf("Model: %s\n", mN);
	printf("Version: %c", ch);
	printf("Engine: %d", id);
}
	
typedef struct carBrands { 		// using typedef to define an alias for structure
	char brandName[15];
	char modelName[10];
	char ch;
	int ID;
} cbr;


void brands() {
	cbr c1;
	cbr c2;
	strcpy(c1.brandName, "Toyota");
	strcpy(c1.modelName, "Cruiser");
	c1.ch = 'U';
	c1.ID = 2185;
	displayDetails(c1.brandName, c1.modelName, c1.ch, c1.ID);
	
	strcpy(c2.brandName, "Tata");
	strcpy(c2.modelName, "Nexa");
	c2.ch = 'H';
	c2.ID = 4268;
	displayDetails(c2.brandName, c2.modelName, c2.ch, c2.ID);
}


void main() {
	brands();
}
