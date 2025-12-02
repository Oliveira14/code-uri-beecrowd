#include <stdio.h>
 
int main() {
 
      float codigo1, numero1, valorU, codigo2, numero2, valorU2, valorF, valorF2, valorT;
    scanf("%f %f %f", &codigo1, &numero1, &valorU);
    scanf("%f %f %f", &codigo2, &numero2, &valorU2);
    valorF = numero1*valorU;
    valorF2 = numero2*valorU2;
    valorT = valorF+valorF2;
    printf("VALOR A PAGAR: R$ %.2f\n", valorT);
 
 
    return 0;
}