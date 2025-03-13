#include <stdio.h>

void matAdd(int A[2][3], int B[2][3], int C[2][3]);

int main() {
    int A[2][3] = {{1,2,3}, {4,5,6}};
    int B[2][3] = {{7,8,9}, {10, 11, 12}};
    int C[2][3];

    matAdd(A,B,C);

    for(int i =0; i<2; i++){
        for(int j =0; j< 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void matAdd(int A[2][3], int B[2][3], int C[2][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}