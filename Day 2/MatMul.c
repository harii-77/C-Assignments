#include <stdio.h>

void matMul(int A[2][3], int B[3][2], int C[2][2]);

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int C[2][2];

    matMul(A,B,C);

    for(int i =0; i<2; i++){
        for(int j =0; j< 2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void matMul(int A[2][3], int B[3][2], int C[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] =0;
            for(int k = 0; k <3; k++){
                C[i][j] += A[k][i] * B[j][k];
            }
        }
    }
}