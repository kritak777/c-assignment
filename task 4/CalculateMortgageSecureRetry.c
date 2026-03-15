#include <stdio.h>
#include <stdbool.h>

double largerSalary(double a, double b);
double smallerSalary(double a, double b);
bool validateSalary(double salary);

int main() {

    double salary1, salary2, mortgage;

    printf("Enter two salaries: ");

    if(scanf("%lf %lf", &salary1, &salary2) != 2){
        printf("Invalid input\n");
        return 1;
    }

    if(!validateSalary(salary1) || !validateSalary(salary2)){
        printf("Salary must be between 0 and 1000000\n");
        return 1;
    }

    mortgage = largerSalary(salary1, salary2) * 3;
    mortgage += smallerSalary(salary1, salary2);

    printf("Maximum mortgage is: £%.2lf\n", mortgage);

    return 0;
}

double largerSalary(double a, double b){
    if(a > b)
        return a;
    else
        return b;
}

double smallerSalary(double a, double b){
    if(a > b)
        return b;
    else
        return a;
}

bool validateSalary(double salary){
    if(salary < 0 || salary > 1000000)
        return false;
    return true;
}