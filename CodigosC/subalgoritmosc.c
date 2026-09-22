#include <stdio.h> 
#include <math.h>
int pot (int x, int y){
    return pow(x,y);
}

int main (){
    int x,y;
    scanf("%d %d",&x, &y);
    if (y < 0){
        printf ("Ainda nao lidamos com expoentes negativos\n");
    }
    else printf("%d\n", pot(x, y));
return 0;
}
