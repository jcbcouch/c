#include <stdio.h>

int binary_search(int a[], int e, int l, int r);

int main() {
    int sorted[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    int index = binary_search(sorted, 6, 0, 12);
    printf("index of 6: %d\n", index);

    return 0;
} 


int binary_search(int a[], int e, int l, int r) {
    int mid = l + (r - l) /2;

    if (l > r) {
        return -1;
    }

    if (a[mid] == e) {
        return mid;
    }
    else if (a[mid] > e) {
        return binary_search(a, e, l, mid -1);
    }
    else {
        return binary_search(a, e, mid + 1, r);
    }
}