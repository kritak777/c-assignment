#include <stdio.h>

int main() {
    float foodExpenses, leisureExpenses, clothesExpenses, travelExpenses;
    float totalSpent;
    const int ACCOMMODATION = 500; // fixed accommodation cost

    printf("Enter food expenses: ");
    scanf("%f", &foodExpenses);

    printf("Enter leisure expenses: ");
    scanf("%f", &leisureExpenses);

    printf("Enter clothes expenses: ");
    scanf("%f", &clothesExpenses);

    printf("Enter travel expenses: ");
    scanf("%f", &travelExpenses);

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses 
                 + ACCOMMODATION + travelExpenses;

    printf("\nThe total expenditure this month was £%.2f\n", totalSpent);

    return 0;
}