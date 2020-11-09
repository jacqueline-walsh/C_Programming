/* Write a program that reads in the radius of a circle and prints the circles
* diameter, circumference and area. Use the constant value 3.14159 for π.
* Perform each of these calculations inside the printf statement(s) and use
* the conversion specifier %f
*
*  Created by Jacqueline on 08/11/2020 */

#include <stdio.h>

// main method to run program
int main(void) {

    int radius;
    float diameter, circumference, area;
    float pi = 3.14159;
    
    // message to the user to enter radius of circle;
    printf("Please enter radius of the circle: \n");
    scanf("%d", &radius);
    
    // diameter d = 2r
    diameter = radius * 2;
    // circumference c = dπ
    circumference = diameter * pi;
    // area a = πr^2;
    area = pi * radius * radius;
    
    // print messages out to screen
    printf("You have entered a radius of %d \nThis calculates as follows:\n", radius);

    printf("Diameter: \t\t%d\n", radius);
    //  circumference prints to 2 decimal places
    printf("Circumference: \t%.2f\n", circumference);
    //  area prints to 2 decimal places
    printf("Area: \t\t\t%.2f\n", area);

    // returns that the program has successfully completed
    return 0;
} // end main
