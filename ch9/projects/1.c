#include <stdio.h>

# define N 10

void selection_sort(int a[], int n);

int main(void) {
    int a[N];

    printf("Enter %d numbers to be put in the array: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    // sorting algorithm
    selection_sort(a, N - 1);

    printf("In sorted order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {
    int mark, largest = a[0];

    if (n <= 0) return;
    for (int i = 0; i <= n; i++) {
        if (a[i] > largest) {
            largest = a[i];
            mark = i;
        }
    }
    a[mark] = a[n];
    a[n] = largest;
    selection_sort(a, n - 1);
}
