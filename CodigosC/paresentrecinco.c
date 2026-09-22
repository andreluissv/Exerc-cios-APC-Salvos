#include <stdio.h>
int main(){
    int valores, pares = 0;
    for (int i=0 ; i<5 ; i++) {
        scanf("%d", &valores);
        if (valores % 2 == 0) {
            pares++;
        }
    }
    printf("%d valores pares\n", pares);
    return 0;
}
