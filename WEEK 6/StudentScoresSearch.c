#include <stdio.h>

#define NUM_STUDENTS 5

// Function declarations
void readScores(int scores[], int size);
void displayScores(int scores[], int size);
int calculateSum(int scores[], int size);
double calculateAverage(int scores[], int size);
int findMaximum(int scores[], int size);
int findMinimum(int scores[], int size);
int linearSearch(int scores[], int size, int target);
int countAboveThreshold(int scores[], int size, int threshold);

// Main function
int main() {
    int scores[NUM_STUDENTS];

    readScores(scores, NUM_STUDENTS);
    displayScores(scores, NUM_STUDENTS);

    printf("\nStatistics:\n");
    printf("Sum: %d\n", calculateSum(scores, NUM_STUDENTS));
    printf("Average: %.2f\n", calculateAverage(scores, NUM_STUDENTS));
    printf("Highest: %d\n", findMaximum(scores, NUM_STUDENTS));
    printf("Lowest: %d\n", findMinimum(scores, NUM_STUDENTS));

    int search;
    printf("\nEnter score to search: ");
    scanf("%d", &search);

    int index = linearSearch(scores, NUM_STUDENTS, search);
    if (index != -1)
        printf("Found at position %d\n", index + 1);
    else
        printf("Not found\n");

    printf("Students scoring above 80: %d\n",
           countAboveThreshold(scores, NUM_STUDENTS, 80));

    return 0;
}

// Functions
void readScores(int scores[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
}

void displayScores(int scores[], int size) {
    printf("\nScores:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int calculateSum(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

double calculateAverage(int scores[], int size) {
    return (double)calculateSum(scores, size) / size;
}

int findMaximum(int scores[], int size) {
    int max = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > max)
            max = scores[i];
    }
    return max;
}

int findMinimum(int scores[], int size) {
    int min = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < min)
            min = scores[i];
    }
    return min;
}

int linearSearch(int scores[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (scores[i] == target)
            return i;
    }
    return -1;
}

int countAboveThreshold(int scores[], int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] > threshold)
            count++;
    }
    return count;
}