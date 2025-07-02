//  format specifiers =   Special tokens that begin with a % symbol,
//                        followed by a character that specifies the data type
//                        and optional modifiers (width, precision, flags).
//                        They control how data is displayed or interpreted.
  
#include <stdio.h>

int main(){

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "David";

    printf("%d", age);
    printf("%.2f", price);
    printf("%.2lf", pi);
    printf("%c", currency);
    printf("%s", name);
    
    return 0;
}