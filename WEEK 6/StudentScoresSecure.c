#include <stdio.h>
#include <stdbool.h>

#define NUM_STUDENTS 5
#define MIN_SCORE 0
#define MAX_SCORE 100

bool validateScore(int score) {
    return (score >= MIN_SCORE && score <= MAX_SCORE);
}

bool readScores(int scores[], int size) {
    for (int i = 0; i < size; i++) {
        int valid = 0;

        while (!valid) {
            printf("Enter score %d: ", i + 1);

            if (scanf("%d", &scores[i]) != 1) {
                printf("Invalid input! Try again.\n");
                while (getchar() != '\n'); // clear buffer
                continue;
            }

            if (!validateScore(scores[i])) {
                printf("Score must be between 0 and 100.\n");
            } else {
                valid = 1;
            }
        }
    }
    return true;
}

int calculateSum(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

int findMax(int scores[], int size) {
    int max = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > max)
            max = scores[i];
    }
    return max;
}

int findMin(int scores[], int size) {
    int min = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < min)
            min = scores[i];
    }
    return min;
}

int main() {
    int scores[NUM_STUDENTS];

    if (!readScores(scores, NUM_STUDENTS)) {
        printf("Error reading input\n");
        return 1;
    }

    printf("\nResults:\n");
    printf("Sum: %d\n", calculateSum(scores, NUM_STUDENTS));
    printf("Average: %.2f\n",
           (double)calculateSum(scores, NUM_STUDENTS) / NUM_STUDENTS);
    printf("Max: %d\n", findMax(scores, NUM_STUDENTS));
    printf("Min: %d\n", findMin(scores, NUM_STUDENTS));

    return 0;
}