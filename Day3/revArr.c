#include<stdio.h>
#include<stdlib.h>

void reverseArr(int* arr, int size);
int main(){
    int size;
    scanf("%d", &size);
    
    int *arr = (int*) malloc(sizeof(int)* size);
    for(int i=0; i<size; i++ ){
        scanf("%d", &arr[i]);
    }
    
    // for(int i=0; i<size; i++ ){
    //     printf("%d", arr[i]);
    // }
    
    reverseArr(arr,size);
    for(int i=0; i<size; i++ ){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
void reverseArr(int* arr, int size){
    int* i=arr;
    int* j=arr+size-1;
    while(i<j){
        int temp = *i;
        *i = *j;
        *j = temp;
        i++; j--;
    }
}


