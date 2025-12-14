#include <stdio.h>
 
int main() {
 
    int A, B , C, maior, inter, menor;
    scanf("%d %d %d", &A, &B, &C);
    if(A>B && B>C){
        maior=A; inter=B; menor=C;
    }else{ if(C>B && B>A){
        maior=C; inter=B; menor=A;
    }else{ if(B>A && A>C){
        maior=B; inter=A; menor=C;
    }else{ if(C>A && A>B){
        maior=C; inter=A; menor=B;
    }else{ if(A>C && C>B){
        maior=A; inter=C; menor=B;
    }else{ if(B>C && C>A){
        maior=B; inter=C; menor=A;
         }
        }
       }
      }
     }
    }
    printf("%d\n", menor);
    printf("%d\n", inter);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    return 0;
}
