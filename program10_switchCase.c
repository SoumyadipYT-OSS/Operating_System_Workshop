/* Displaying level class using switch case */
#include<stdio.h>
void classLevel(char class) {
	printf("Ship class: ");
	switch(class) {
		case 'A':
		case 'a':
			printf("Aircraft Carrier\n");
			break;
		case 'B':
		case 'b':
			printf("Battleship\n");
			break;
		case 'C':
		case 'c':
			printf("Cruiser\n");
			break;
		case 'D':
		case 'd':
			printf("Destroyer\n");
			break;
		case 'E':
		case 'e':
			printf("Frigate\n");
			break;
		default:
			printf("Unknown class\n");
			break;
	}
}


void userInput() {
	char class;
	printf("Enter class (charater value): ");
	scanf(" %c", &class);	// when input character value give space to read the C compiler.
	classLevel(class);
}



void main() {
	userInput();
}
