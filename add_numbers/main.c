/* Write a program that asks the user to enter two numbers, obtains them from
*  the user and prints their sum, product, difference, quotient, and remainder.
*
*  Created by Jacqueline on 08/11/2020 */

#include <stdio.h>

// main method to run program
int main(void) {

    // first integer input by user
    int integer1;
    // first integer input by user
    int integer2;
    // total of 2 integers
    int sum;

    // message to the user to enter 2 numbers
    printf("Please enter 2 numbers \n");

    // integer input from user 2 store both numbers
    scanf("%d%d", &integer1, &integer2 );

    // add integer1 and integer2 and assign to sum
    sum = integer1 + integer2;

    // output total to screen
    printf("Sum is %d\n", sum);

    // returns that the program has successfully completed
    return 0;
}  // end main
