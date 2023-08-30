//
// Created by MuDDii on 8/30/2023.
//

#include <stdio.h>

int main() {
    int x,y,z;
    printf("#########################\n");
    printf("EX 1:\n");
    printf("Please Enter Number to Check:");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("%d is Even\n",x);
    }else{
        printf("%d is Odd\n", x);
    }
    printf("#########################\n");
    char k;
    printf("EX 2:\n");
    printf("Please Enter Alphabet to Check:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&k);
    if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
        printf("%c is a Vowel\n",k);
    }else{
        printf("%c is a Constant\n",k);
    }
    printf("#########################\n");
    printf("EX 3:\n");
    printf("Please Enter Three Numbers:");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if(x>y){
        if(x>z){
            printf("Largest Number is %d\n",x);
        }else{
            printf("Largest Number is %d\n",z);
        }
    }else{
        if(y>z){
            printf("Largest Number is %d\n",y);
        }else{
            printf("Largest Number is %d\n",z);
        }
    }
    printf("#########################\n");
    printf("EX 4:\n");
    printf("Please Enter Number to Check:");
    scanf("%d", &x);
    if(x > 0){
        printf("Number is Positive\n");
    }else if( x < 0){
        printf("Number is Negative\n");
    }else if(x == 0){
        printf("Number is Zero\n");
    }
    printf("#########################\n");
    printf("EX 5:\n");
    printf("Please Enter Character to Check:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&k);
    if((k>65 && k<90) || (k>97 && k<122)){
        printf("%c is Alphabet\n",k);
    }else{
        printf("%c is not Alphabet\n",k);
    }
    printf("#########################\n");
    printf("EX 6:\n");
    printf("Please Enter an Integer:");
    scanf("%d", &x);
    int sum = 0;
    int i;
    for(i =1; i <=x;i++){
        sum += i;
    }
    printf("Sum = %d\n", sum);
    printf("#########################\n");
    printf("EX 7 - Working:\n");
    printf("Please Enter an Integer:");
    scanf("%d", &x);
    if(x < 0){
        printf("Error!!! Factorial of negative Doesn't Exist\n");
    }else{
        int fact =1;
        for(i =1; i <=x;i++){
            fact *= i;
        }
        printf("Factorial = %d\n", fact);
    }
    printf("#########################\n");
    printf("EX 7 - Zero:\n");
    printf("Please Enter an Integer:");
    scanf("%d", &x);
    if(x < 0){
        printf("Error!!! Factorial of negative Doesn't Exist\n");
    }else{
        int fact =1;
        for(i =1; i <=x;i++){
            fact *= i;
        }
        printf("Factorial = %d\n", fact);
    }
    printf("#########################\n");
    printf("EX 7 - Negative:\n");
    printf("Please Enter an Integer:");
    scanf("%d", &x);
    if(x < 0){
        printf("Error!!! Factorial of negative Doesn't Exist\n");
    }else{
        int fact =1;
        for(i =1; i <=x;i++){
            fact *= i;
        }
        printf("Factorial = %d\n", fact);
    }
    printf("#########################\n");
    printf("EX 8 - Summation:\n");
    char op;
    printf("Please Enter Operator:");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&op);
    printf("Please Enter the two Operands:");
    scanf("%d",&x);
    scanf("%d",&y);
    switch (op) {
        case '+':
            printf("Summation = %d\n", x+y);
            break;
        case '-':
            printf("Difference = %d\n", x-y);
            break;
        case '*':
            printf("Multiplication = %d\n", x*y);
            break;
        case '/':
            printf("Division = %d\n", x/y);
            break;
        default:
            printf("Invalid Operator\n");
    }
    printf("#########################\n");
    printf("EX 8 - Difference:\n");
    printf("Please Enter Operator:");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&op);
    printf("Please Enter the two Operands:");
    scanf("%d",&x);
    scanf("%d",&y);
    switch (op) {
        case '+':
            printf("Summation = %d\n", x+y);
            break;
        case '-':
            printf("Difference = %d\n", x-y);
            break;
        case '*':
            printf("Multiplication = %d\n", x*y);
            break;
        case '/':
            printf("Division = %d\n", x/y);
            break;
        default:
            printf("Invalid Operator\n");
    }
    printf("#########################\n");
    printf("EX 8 - Multiplication:\n");
    printf("Please Enter Operator:");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&op);
    printf("Please Enter the two Operands:");
    scanf("%d",&x);
    scanf("%d",&y);
    switch (op) {
        case '+':
            printf("Summation = %d\n", x+y);
            break;
        case '-':
            printf("Difference = %d\n", x-y);
            break;
        case '*':
            printf("Multiplication = %d\n", x*y);
            break;
        case '/':
            printf("Division = %d\n", x/y);
            break;
        default:
            printf("Invalid Operator\n");
    }
    printf("#########################\n");
    printf("EX 8 - Division:\n");
    printf("Please Enter Operator:");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&op);
    printf("Please Enter the two Operands:");
    scanf("%d",&x);
    scanf("%d",&y);
    switch (op) {
        case '+':
            printf("Summation = %d\n", x+y);
            break;
        case '-':
            printf("Difference = %d\n", x-y);
            break;
        case '*':
            printf("Multiplication = %d\n", x*y);
            break;
        case '/':
            printf("Division = %d\n", x/y);
            break;
        default:
            printf("Invalid Operator\n");
    }
    printf("#########################\n");
    return 0;
}
