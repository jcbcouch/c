#include <stdio.h>

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() {
    int a[] =  {1,3,7,9,0,2,4,5,8,6,99,98,97};
    int length = sizeof(a) / sizeof(a[0]);

    quicksort(a, length);

    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
} 


void quicksort(int array[], int length)
{
  quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
  if (low < high)
  {
    int pivot_index = partition(array, low, high);

    quicksort_recursion(array, low, pivot_index - 1);
    quicksort_recursion(array, pivot_index + 1, high);
  }
}

int partition(int array[], int low, int high)
{ 
  int pivot_value = array[high];
  int i = low; 
  
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot_value)
    {
      swap(&array[i], &array[j]);
      i++;
    }
  }
  swap(&array[i], &array[high]);
  return i;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}



