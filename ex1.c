/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    
    // Ascii
    printf("Ascii:\n");
    int c;
    printf("Please enter a character\n");
    c = getchar();
    printf("Its numerical value is: %d\n", c);
    printf("0 for even, 1 for odd: %d\n", c&1);

    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    int num;
    printf("Please enter a negative integer\n");
    scanf("%i", &num);
    printf("1's complement: %i\n", -(~num));
    printf("unsigned: %u\n", num);
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    // Shifting right and left
    printf("\nShifting right and left:\n");
    int n1, n2, n3;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("After shifting right and left: %d\n", (n1>>n2)<<n3); //shifting n1 right and left
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    // Even - Odd
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int t1, t2, t3;
    t1 = num1&1;
    t2 = num2&1;
    t3 = num3&1;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", (t1&t2)|(t1&t3)|(t2&t3));

    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    
    // Different Bases
    printf("\nDifferent Bases:\n");
    int octal, hexadecimal;
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf(" %o %x", &octal, &hexadecimal);
    printf("LSBs: %d %d\n", (octal&1), (hexadecimal&1));
    printf("MSBs: %d %d\n", ((unsigned int)octal>>31), ((unsigned int)hexadecimal>>31));
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    printf("Bye!\n");

    return 0;
}
