#include <stdio.h>

int main() {
    int mealCost = 100;
    int tipPercent = 15; 
    int taxPercent = 8;

    int finalPrice = mealCost + (tipPercent*mealCost)/100 + (taxPercent*mealCost)/100;
    printf("%d", finalPrice);

    return 0;
}