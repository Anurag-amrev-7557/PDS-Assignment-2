#include <stdio.h>

int main() {
    int number; 
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number & 1) {
        printf("number is odd");
    } else {
        printf("number is even");
    }
}