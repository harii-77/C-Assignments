#include <stdio.h>

int main() {
    char charArr[10];
    int charCount[256] = {0}; 

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &charArr[i]);
        charCount[(int)charArr[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("%c: %d\n", i, charCount[i]);
        }
    }
    return 0;
}