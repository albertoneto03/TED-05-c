#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"");

  float raio,area;
  printf("qual � o raio da circurfer�ncia?");
  scanf("%f",&raio);
  area=2*3.14*raio;
  printf("com o raio de %f a circurfer�ncia ter�:%.2f de area",raio,area);
  return 0;
}
