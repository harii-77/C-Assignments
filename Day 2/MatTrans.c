#include <stdio.h>

void matTrans(int A[2][3], int B[3][2]);

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2];

    matTrans(A,B);

    for(int i =0; i<3; i++){
        for(int j =0; j< 2; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}

void matTrans(int A[2][3], int B[3][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            B[j][i] = A[i][j];
        }
    }
}