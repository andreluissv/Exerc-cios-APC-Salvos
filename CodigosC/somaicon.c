#include <stdio.h>

int main() {
    int numero, soma = 0, impar, x, y;

    scanf("%d", &numero);

    for (int i = 0; i < numero; i++) {
        scanf("%d %d", &x, &y);
        soma = x + y;

        if (soma % 2 != 0) {
            impar = soma;
            printf("%d\n", impar);
        } else if (soma % 2 == 0) {
            printf("0\n");
        }
    }

    return 0;
}
