#include <stdio.h>
 
int main() {
 
    char NOME;
    double A,B,C;
    scanf("%s", &NOME);
    scanf("%lf", &A);
    scanf("%lf", &B);
    C=A+(B*15)/100;
    printf("TOTAL = R$ %.2lf\n", C);
 
    return 0;
}