#include <stdio.h>

int main() {
    float foodExpenses = 250.0;     // replace with your actual value
    float leisureExpenses = 120.0;  // replace with your actual value
    float clothesExpenses = 80.0;   // replace with your actual value

    float totalSpent = foodExpenses + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was £%.2f\n", totalSpent);

    return 0;
}