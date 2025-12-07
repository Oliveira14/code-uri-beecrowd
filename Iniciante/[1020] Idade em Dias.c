#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade,meses,dias,ano;
    scanf("%d",&idade);
    ano = idade/365;
     meses = ((idade %365)/30);
      dias = ((idade %365)%30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,meses,dias);
return 0; }
