#include <stdio.h>

int main() {

    double celsius;
    double fahrenheit;

    printf("Enter Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0/5.0) * celsius + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}




