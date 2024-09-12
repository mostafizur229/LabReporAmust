#include <stdio.h>
int main() {
    // Binary operators
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);   // Addition
    printf("a - b = %d\n", a - b);   // Subtraction
    printf("a * b = %d\n", a * b);   // Multiplication
    printf("a / b = %d\n", a / b);   // Division
    printf("a %% b = %d\n", a % b);  // Modulus (remainder)

    // Unary operators
    int x = -5;
    printf("Unary minus: x = %d\n", -x);  // Unary minus
    printf("Unary plus: x = %d\n", +x);   // Unary plus

    // Relational operators
    printf("a > b = %d\n", a > b);     // Greater than
    printf("a < b = %d\n", a < b);     // Less than
    printf("a >= b = %d\n", a >= b);   // Greater than or equal to
    printf("a <= b = %d\n", a <= b);   // Less than or equal to
    printf("a == b = %d\n", a == b);   // Equal to
    printf("a != b = %d\n", a != b);   // Not equal to

    // Logical operators
    int c = 1, d = 0;
    printf("c && d = %d\n", c && d);   // Logical AND
    printf("c || d = %d\n", c || d);   // Logical OR
    printf("!c = %d\n", !c);           // Logical NOT

    // Bitwise operators
    int e = 5, f = 2;
    printf("e & f = %d\n", e & f);     // Bitwise AND
    printf("e | f = %d\n", e | f);     // Bitwise OR
    printf("e ^ f = %d\n", e ^ f);     // Bitwise XOR
    printf("e << 1 = %d\n", e << 1);   // Left shift (multiplying by 2)
    printf("e >> 1 = %d\n", e >> 1);   // Right shift (dividing by 2)
    printf("~e = %d\n", ~e);           // Bitwise NOT (inversion)

    // Increment and decrement operators
    int g = 10;
    printf("g++ = %d\n", g++);  // Post-increment
    printf("++g = %d\n", ++g);  // Pre-increment
    printf("g-- = %d\n", g--);  // Post-decrement
    printf("--g = %d\n", --g);  // Pre-decrement

    // Assignment operators
    int h = 10;
    h += 5;
    printf("h after h += 5 is %d\n", h);
    h *= 2;  // Same as h = h * 2;
    printf("h after h *= 2 is %d\n", h);
    h >>= 1; // Same as h = h >> 1;
    printf("h after h >>= 1 is %d\n", h);

    return 0;
}
