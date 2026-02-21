#include <stdio.h>

int main() {

    double monthlySaving;
    double accountValue = 0;
    double monthlyInterest = 0.05 / 12.0;

    printf("Enter monthly saving: ");
    scanf("%lf", &monthlySaving);

    for (int i = 1; i <= 6; i++) {
        accountValue = (accountValue + monthlySaving) * (1 + monthlyInterest);
    }

    printf("Account value after 6 months = %.3f\n", accountValue);

    return 0;
}