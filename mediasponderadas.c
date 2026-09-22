#include <stdio.h>
int main(){
    int n;
    double a,b,c,media;
    scanf("%d",&n);
  for (int i=0;i<n;i++){
    scanf("%lf %lf %lf",&a,&b,&c);
    media=(2*a+3*b+5*c)/10.0;
    printf("%.1lf\n", media);
  }
  return 0;
}