<<<<<<< HEAD
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left, j = right;

    while (i < j) {
        while (arr[i] <= pivot && i <= right) {
            i++;
        }
        while (arr[j] > pivot && j >= left) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[j];
    arr[j] = arr[left];
    arr[left] = temp;
    return j;
}

void sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = partition(arr, left, right);
        sort(arr, left, mid - 1);
        sort(arr, mid + 1, right);
    }
}

int main() {
    int num, i, arr[100000];
    time_t t;
    srand((unsigned) time(&t));  // Seed the random number generator

    printf("N: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        arr[i] = rand() % 1000;  // Generate random numbers between 0 and 999
    }

    int left = 0, right = num - 1;
    double start = clock();
    sort(arr, left, right);
    double end = clock();

   
    printf("\nSorted array:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    printf("Total Execution time: %lf ms\n", ((end - start) / CLOCKS_PER_SEC) * 1000);

    return 0;
=======
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left, j = right;

    while (i < j) {
        while (arr[i] <= pivot && i <= right) {
            i++;
        }
        while (arr[j] > pivot && j >= left) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[j];
    arr[j] = arr[left];
    arr[left] = temp;
    return j;
}

void sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = partition(arr, left, right);
        sort(arr, left, mid - 1);
        sort(arr, mid + 1, right);
    }
}

int main() {
    int num, i, arr[100000];
    time_t t;
    srand((unsigned) time(&t));  // Seed the random number generator

    printf("N: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        arr[i] = rand() % 1000;  // Generate random numbers between 0 and 999
    }

    int left = 0, right = num - 1;
    double start = clock();
    sort(arr, left, right);
    double end = clock();

   
    printf("\nSorted array:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    printf("Total Execution time: %lf ms\n", ((end - start) / CLOCKS_PER_SEC) * 1000);

    return 0;
>>>>>>> 931575ba6529aa17214839700dd10ebc3e2a948b
}