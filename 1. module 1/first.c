#include<stdio.h> // standard input output
#include <stdbool.h> // boolean
int main(){
    // printf("hello\nworld");

    int num1 = 1234;
    num1 = 30;
    float f = 25.36;
     double ab = 25.123456789;
    char character = 'a';
    bool b;
    b = true; // true=1, false = 0;
    long long int abc = 1234567890123456;


    // printf ("%d", num1);
    // printf ("\n");
    // printf ("%f", f);
    // printf ("\n");
    // printf ("%.2f", f); // 2 decimal porzonto print korbe
    // printf ("\n");
    // printf ("%c", character);
    // printf ("\n");
    // printf ("%d", b);
    // printf ("%lli", abc);
    printf ("number is = %d", num1);
    
    return 0;
}


/* 
var type   space takes
int ------- 4 byte 
long long int ------- 8 byte 
float ----- 4 byte
double ------- 8 byte 
char ------ 1 byte
*/

/* 
format specifier
int -> %d
float -> %f
char -> %c
*/