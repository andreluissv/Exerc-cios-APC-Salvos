#include <stdio.h>

int main(){
int ratos = 0, coelhos = 0, sapos = 0, testes, total, quantia;
char tipo;
double pc, pr, ps;
scanf("%d", &testes);
for (int i=0; i<testes; i++){
    scanf("%d %c", quantia, tipo);
    if(tipo=='C') coelhos+=quantia;
    else if(tipo=='R') ratos+=quantia;
    else if(tipo=='S') sapos+=quantia;

}
total = sapos+ratos+coelhos;
pc=(coelhos*100.00)/total;
pr=(ratos*100.00)/total;
ps=(sapos*100.00)/total;
printf("Total: %d cobaias\n", total);
printf("Total de coelhos: %d\n", coelhos);
printf("Total de ratos: %d\n", ratos);
printf("Total de sapos: %d\n", sapos);
printf("Percentual de coelhos: %.2lf %%\n", pc);
printf("Percentual de ratos: %.2lf %%\n", pr);
printf("Percentual de sapos; %.2lf %%\n", ps);

    return 0;
}