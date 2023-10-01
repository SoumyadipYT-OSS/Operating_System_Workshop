/*		Total marks obtained by student and make a grade pattern		*/
#include<stdio.h>
void gradePattern(float marks) {
	char grade;
	if (marks > 90) {
		grade = 'O';
	} else if (marks > 80) {
		grade = 'A';
	} else if (marks > 70) {
		grade = 'B';
	} else if (marks > 60) {
		grade = 'C';
	} else if (marks > 50) {
		grade = 'D';
	} else {
		grade = 'F';
	}
	printf("Marks: %.2f\n", marks);
	printf("Grade: %c\n", grade);
}


void userInput() {
	float marks;
	printf("Enter marks of the student: ");
	scanf("%f", &marks);
	if (marks>100 || marks != 92) {
		printf("This is not a valid input! Enter between 0 to 100 value");
	}
	gradePattern(marks);
}


void main() {
	userInput();
}
