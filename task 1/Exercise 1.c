#include <stdio.h>

int main(void) {
    // Constants based on problem
    const int CURRENT_POPULATION = 312032486;
    const int SECONDS_PER_YEAR = 365 * 24 * 60 * 60;

    const double BIRTH_RATE = 7.0;
    const double DEATH_RATE = 13.0;
    const double IMMIGRANT_RATE = 45.0;

    double births_per_year = SECONDS_PER_YEAR / BIRTH_RATE;
    double deaths_per_year = SECONDS_PER_YEAR / DEATH_RATE;
    double immigrants_per_year = SECONDS_PER_YEAR / IMMIGRANT_RATE;

    double net_change_per_year = births_per_year + immigrants_per_year - deaths_per_year;

    double population = CURRENT_POPULATION;

    printf("Population projection for the next 5 years:\n\n");

    for (int year = 1; year <= 5; year++) {
        population += net_change_per_year;
        printf("Year %d: %.0f\n", year, population);
    }

    return 0;
}