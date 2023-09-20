#include<stdio.h>						// preprocessor directive
#define PI_Value 3.14159265

double circle_area(double r);

double circle_area(double r) {
	const double area = PI_Value * r * r;
	printf("Area of the circle: %lf \n", area);
}

void userInput() {
	double r = 0.0, area = 0.0;
	printf("__Find the circle area__\n");
	printf("Enter radius: ");
	scanf("%lf", &r);
	circle_area(r);
}


void main() {
	userInput();
}
