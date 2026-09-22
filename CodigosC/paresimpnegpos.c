#include <stdio.h>
int main(){
    int numero, pares = 0, positivos = 0, negativos = 0, impares = 0;
    for (int i=0; i<5; i++){
        scanf("%d", &numero);
        if (numero > 0){
            positivos++;
        }
        else if (numero < 0){
            negativos++;
        }
        if (numero % 2 == 0){
            pares++;
        }
        else if (numero % 2 != 0){
            impares++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    printf("%d valor(es) impar(es)\n", impares);
    return 0;
}
