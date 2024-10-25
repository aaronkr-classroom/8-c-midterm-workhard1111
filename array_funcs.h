#pragma once

#define NUM_STUDENTS 10  // 상수를 정의합니다.

float calculate_average(int grades[]) {
    int sum = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += grades[i];
    }
    return (float)sum / NUM_STUDENTS;
}

void find_min_max(int grades[], int* max, int* min) {
    *max = grades[0];
    *min = grades[0];
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (grades[i] > *max) {
            *max = grades[i];
        }
        if (grades[i] < *min) {
            *min = grades[i];
        }
    }
}

void count_pass_fail(int grades[], int* pass_count, int* fail_count) {
    *pass_count = 0;
    *fail_count = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (grades[i] >= 60) {
            (*pass_count)++;
        }
        else {
            (*fail_count)++;
        }
    }
}