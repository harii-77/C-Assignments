#include <stdio.h>
int main() {
    double crudeOil = 50.75;
    double taxes = 10.25;
    double otherFActors = 5.55;

    double pricePerLiter = crudeOil+ taxes+ otherFActors;
    printf("%.2f", pricePerLiter); 
    
    return 0;
}