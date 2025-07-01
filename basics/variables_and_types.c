#include <stdio.h>

int main() {
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contians.

    int age; // declaration
    age = 25; // initialization
    float gpa = 2.5; //declaration + initialization
    char grade = 'C';
    char name[] = "David";
    double pi = 3.14159265358979;

    printf("You are %d years old\n", age);
    printf("Your gpa is %.2f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Hello %s\n", name);
    printf("The value of pi is: %.15lf\n", pi);

    return 0;
}
