#include <stdio.h>
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) (*evenCount)++;
        else (*oddCount)++;
    }
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) scanf("%d", &arr[i]);
    int evenCount, oddCount;
    countEvenOdd(arr, size, &evenCount, &oddCount);
    printf("even numbers: %d\n",evenCount);
    printf("odd numbers: %d\n",oddCount);
    return 0;
}