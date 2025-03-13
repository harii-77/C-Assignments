#include <stdio.h>
int centToFahrein(int cent);
int main() {
    int  cent;
    scanf("%d", &cent);
    int res = centToFahrein(cent);
    printf("%d", res);
}

int centToFahrein(int cent) {
    return (cent * 9/5) + 32;
}