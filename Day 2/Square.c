#include <stdio.h>

int square(int* num){
    return (*num) * (*num);
}

int main() {
    int num;
    scanf("%d", &num);
    int* res = square(&num);
    printf("%d", res);
    return 0;
}