#include <stdio.h>

int main() {

    int previousMetre, currentMetre, day, month;
    int units;

    printf("Enter previous reading, current reading, day and month:\n");

    if (scanf("%d %d %d %d", &previousMetre, &currentMetre, &day, &month) != 4) {
        printf("Error: Invalid input format\n");
        return 1;
    }

    printf("%d %d %d %d\n", previousMetre, currentMetre, day, month);

    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: current meter reading out of range\n");

    if (previousMetre < 0 || previousMetre > 9999)
        printf("Error: previous meter reading out of range\n");

    if (previousMetre > currentMetre)
        printf("Error: previous reading is more than present reading\n");

    units = currentMetre - previousMetre;

    if (units > 1000)
        printf("Error: electricity used more than 1000 units\n");

    if (month < 1 || month > 12)
        printf("Error: month out of range\n");

    if ((month == 1 || month == 3 || month == 5 || month == 7 || 
         month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))
        printf("Error: invalid day for this month\n");

    if ((month == 4 || month == 6 || month == 9 || month == 11) 
        && (day < 1 || day > 30))
        printf("Error: invalid day for this month\n");

    if (month == 2 && (day < 1 || day > 29))
        printf("Error: invalid day for February\n");

    return 0;
}