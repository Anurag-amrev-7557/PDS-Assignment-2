#include<stdio.h>

int main() {
    //variable declaration
    int a = 17;
    int b = -19;
    int c = 12;
    int max;

    //Largest among a, b, and c
    max = (a>b) ? (a>c ? a : c) : (b>c ? b : c);

    //print the largest number
    printf("Largest number among %d, %d, and %d is %d", a, b, c, max);

    return 0;
}