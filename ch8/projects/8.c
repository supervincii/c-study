#include <stdio.h>

int main(void) {
  int arr[5][5] = {0};
  int student_total = 0, subj_total = 0, subj_high = 0, subj_low = 0;
  float student_avg, subj_avg;

  for (int i = 0; i < 5; i++) {
    printf("Enter grades for student %d: ", i + 1);
    for (int j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      student_total += arr[i][j];
    }
    printf("Student %d total grade: %d\n", i, student_total);
    student_avg = student_total / 5.0;
    printf("Student %d average grade: %.2f\n", i, student_avg);
    printf("\n");
    student_total = 0;
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      subj_total += arr[j][i];

      if (subj_high == 0 && subj_low == 0) {
        subj_high = arr[j][i];
        subj_low = arr[j][i];
      }

      if (arr[j][i] > subj_high) {
        subj_high = arr[j][i];
      }

      if (arr[j][i] < subj_low) {
        subj_low = arr[j][i];
      }
    }
    subj_avg = subj_total / 5.0;
    printf("Subject %d average score: %.2f\n", i+1, subj_avg);
    printf("Subject %d highest score: %d\n", i+1, subj_high);
    printf("Subject %d lowest score: %d\n", i+1, subj_low);
    printf("\n");
    subj_total = 0;
    subj_high = 0;
    subj_low = 0;
  }
  printf("\n");

  return 0;
}
