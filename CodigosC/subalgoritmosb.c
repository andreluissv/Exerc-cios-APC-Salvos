#include <stdio.h>
//valor em float pois o resultado eh em ponto flutuante com 2 casas decimais apos a virgula
float peso(float h, char s){
    // multplicador da altura ao quadrado
float h2 = h*h, k, ideal;
if (s =='M')
{
    k = 23;
}
 else if (s == 'F')
{
    k = 20;
}
ideal = k * h2;
return ideal;
}

int main (){
int p;
float a;
char s;
scanf("%d", &p);
for(int i=0; i<p; i++){
    scanf ("%f %c", &a, &s);
    printf("Peso ideal: %.2f\n", peso (a, s));
}

    return 0;
}
