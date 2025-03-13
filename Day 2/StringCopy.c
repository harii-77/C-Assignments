#include<stdio.h>

void strCopy(char* src, char* dest);

int main(){
    char* src[10], dest[10];
    fgets(src, sizeof(src), stdin);
    printf("Input: %s\n", src);
    strCopy(src, dest);
    printf("Output: %s\n", dest);
    return 0;
}

void strCopy(char* src, char* dest) {
    while(*src){
        *dest = *src;
        src++;
        dest++;
    }
}


