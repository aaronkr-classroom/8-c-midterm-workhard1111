#include <stdio.h>
#include "array_funcs.h"

#define NUM_STUDENTS 10

void print_grades(int grades[]) {}

int main(void) {
    int std_grades[NUM_STUDENTS] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };

    print_grades(std_grades);

    float average = calculate_average(std_grades);
    printf("Average grade: %.1f\n", average);

    int max_grade, min_grade;
    find_min_max(std_grades, &max_grade, &min_grade);
    printf("Highest grade: %d\n", max_grade);
    printf("Lowest grade: %d\n", min_grade);

    printf("\nGrades above average:");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (std_grades[i] > average) {
            printf("%3d", std_grades[i]);
        }
    }

    printf("\nGrades below average:");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (std_grades[i] < average) {
            printf("%3d", std_grades[i]);
        }
    }

    int pass_count, fail_count;
    count_pass_fail(std_grades, &pass_count, &fail_count);
    printf("\n\nNumber of students passed: %d\n", pass_count);
    printf("Number of students failed: %d\n", fail_count);

    return 0;
}