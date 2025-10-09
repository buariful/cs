#include<stdio.h> // standard input output
int main(){
    // printf("hello\nworld");

    int num1 = 20;
    num1 = 30;
    float f = 25.36;
    char character = 'a';

    printf ("%d", num1);
    printf ("\n");
    printf ("%c", character);
    printf ("\n");
    printf ("%f", f);
    printf ("\n");
    printf ("%.2f", f); // 2 decimal porzonto print korbe

    return 0;
}


/* 
var type   space takes
int ------- 4 byte
float ----- 4 byte
char ------ 1 byte
*/

/* 
format specifier
int -> %d
float -> %f
char -> %c
*/