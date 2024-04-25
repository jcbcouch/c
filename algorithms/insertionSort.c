#include <stdio.h>

void insertion_sort(int a[], int length);

int main() {
    int a[] = {5,78,66,67,60,44,88,3,19,1};
    int length = sizeof(a) / sizeof(a[0]);

    insertion_sort(a, length);

    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
} 


void insertion_sort(int a[], int length) {
    for (int i = 1; i < length; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) { 
            a[j + 1] = a[j]; 
            j = j - 1;
        }
        a[j + 1] = key;
    }
}



