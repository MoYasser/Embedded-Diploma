//
// Created by MuDDii on 8/30/2023.
//

#include <stdio.h>

int main() {
    printf("#########################\n");
    printf("EX 1:\n");
    printf("##### C Programming #####\n");
    printf("#########################\n");
    printf("EX 2:\n");
    int x;
    printf("Please Enter an Integer Number:");
    scanf("%d", &x);
    printf("Number Entered is: %d\n", x);
    printf("#########################\n");
    printf("EX 3:\n");
    int y;
    printf("Enter Two Integers:");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Sum: %d\n", x + y);
    printf("#########################\n");
    printf("EX 4:\n");
    float k, l;
    printf("Please Enter two Float Numbers: ");
    scanf("%f", &k);
    scanf("%f", &l);
    printf("Product: %f\n", k * l);
    printf("#########################\n");
    printf("EX 5:\n");
    char z;
    printf("Enter a Character:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &z);
    printf("ASCII Value of %c is %d\n", z, z);
    printf("#########################\n");
    printf("EX 6:\n");
    printf("Enter Two Integers:");
    scanf("%d", &x);
    scanf("%d", &y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("#########################\n");
    printf("EX 7:\n");
    printf("Enter Two Integers:");
    scanf("%d", &x);
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    return 0;
}
