#include <stdio.h>
int main() {
    int array[4] = {3, 2, 2, 3};

    int size = sizeof(array)/sizeof(array[0]);
    int val =  3;
    int count = 0;

    printf("[");
    for(int i =0; i <size; i++) {
        if(array[i] == 3)
            count++;
        else
            printf("%d, ", array[i]);
    }
    
    for(int i =0; i < count; i++) 
    {
        if (i!=count-1)
        printf("_, ");
        else 
        printf("_");
    }
    printf("]");

    printf("%d", size - count);
}