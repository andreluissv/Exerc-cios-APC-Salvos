#include <stdio.h>
int main(){
    double media, numero, soma;
    int contador = 0;
    soma = 0;
    for(int i=0; i<6; i++){
        scanf("%lf", &numero);
        if (numero>0) {
            contador++;
            soma+=numero;
        }
    }
    printf("%d valores positivos\n", contador);
    media=soma/contador;
    printf("%.1f\n", media);
    return 0;
}
