#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * C program to calculate the area and circumference of a circle
 * First take the input from the user then perform the math
 * Display both the area and circumference
 *
 * If successful -> exit with state 0 else exit with -1 or 1
 */

int main() {
	int radius;
	const float PI = 3.14;
	float area, circumference;
	// prompt for input from the user, then read it
	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);

	// area
	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	// display the final result
	printf("Area of the circle: %f\n", area);
	printf("Circumference of the circle is: %f", circumference);

	return 0;
}
