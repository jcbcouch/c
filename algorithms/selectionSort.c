#include <stdio.h>

void selection_sort(int a[], int length);

int main() {
    int a[] = {44,55,5,4,3,66,67,78,99,100,2};
    int length = sizeof(a) / sizeof(a[0]);

    selection_sort(a, length);

    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
} 

void selection_sort(int a[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min_pos = i;
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[min_pos]) {
                min_pos = j;
            }
            if (min_pos != i) {
                int temp = a[i];
                a[i] = a[min_pos];
                a[min_pos] = temp;
            }
        }
    }
}