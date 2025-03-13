#include <stdio.h>
int main() {
    int Number[] = {3, 5, 1, 9, 2}; 
    int max = Number[0];
    for(int i = 0; i < sizeof(Number)/sizeof(Number[0]); i++){
        if(Number[i] > max)
            max = Number[i];
    }
    printf("%d", max);
    return 0;
}