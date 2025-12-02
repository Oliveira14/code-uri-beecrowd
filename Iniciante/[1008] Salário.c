#include <stdio.h>
 
int main() {
 
     int A,B;
    double C,D;
    scanf("%d %d", &A,&B);
    scanf("%lf", &C);
    D=C*(float)B;
    scanf("%0.2d", &D);
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2f\n", D);
     
 
    return 0;
}