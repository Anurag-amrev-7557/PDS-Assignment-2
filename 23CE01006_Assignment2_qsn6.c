#include<stdio.h> 

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

        a % 2 == 0 && (a<100 || a > 200) ? printf("Not in the range") : a  % 2 == 0 && (100<=a<=200) ? printf("False") : a % 2 != 0 && (a <100 || a >200) ? printf("Not in the range") : printf("True");
        
        return 0;
    }
    