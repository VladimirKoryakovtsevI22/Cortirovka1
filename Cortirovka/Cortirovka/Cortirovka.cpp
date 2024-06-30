// Cortirovka.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <random>

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    std::srand(time(0));
    int end = 100;
    int start = 0;
    int N;

    printf("Enter array size: ");
    scanf_s("%d", &N);

    int* a = new int[N];
    for (int i = 0; i < N; i++) 
	{
        a[i] = std::rand() % (end - start + 1) + start;
    }

    // Сортировка по возрастанию
    bubbleSortAscending(a, N);

    for (int i = 0; i < N; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");

    // Сортировка по убыванию
    bubbleSortDescending(a, N);

    for (int i = 0; i < N; i++) 
	{
        printf("%d ", a[i]);
    }

    return 0;
}
