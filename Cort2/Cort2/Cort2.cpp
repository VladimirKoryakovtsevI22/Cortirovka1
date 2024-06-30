#include <cstdio>
#include <cstdlib>
#include <ctime>

void selectionSort(int a[], int N) {
    for (int i = 0; i < N; i++) {
        int max = i;
        for (int j = i + 1; j < N; j++) {
            if (a[j] > a[max])
                max = j;
        }
        int temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
}

int main() {
    srand(time(0));
    int start = 0;
    int end = 100;
    int N;
    printf("Enter massive arrea: ");
    scanf_s ("%d", &N);

    int* a = new int[N];

    for (int i = 0; i < N; i++) {
        a[i] = rand() % (end - start + 1) + start;
    }

    printf("First massive: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    selectionSort(a, N);

    printf("Sort massive: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}
