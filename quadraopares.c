#include <stdio.h>
int main(){
    int valor;
    scanf("%d", &valor);
    for (int i=2; i<=valor; i+=2){
        printf("%d^2 = %d\n", i, i*i);
    }
}