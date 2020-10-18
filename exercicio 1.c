#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"");

  float raio,area;
  printf("qual é o raio da circurferência?");
  scanf("%f",&raio);
  area=2*3.14*raio;
  printf("com o raio de %f a circurferência terá:%.2f de area",raio,area);
  return 0;
}
