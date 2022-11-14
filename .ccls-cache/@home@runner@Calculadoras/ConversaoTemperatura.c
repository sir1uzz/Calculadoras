#include <stdio.h>
#include <unistd.h>
int main() {
  for (;;) {

    float o, c, f;
    printf("\nConversor de escalas termométricas, digite '1' ou '2'\n1. De °C "
           "para °F\n2. De °F para °C\n");
    scanf("%f", &o);
  if(o == 1) { 
      printf("Valor em °C: ");
      scanf("%f", &c);
      f = 1.8 * c + 32;
      printf("Valor em °F: %0.2f\n", f);
      sleep(4);
    } else {
      in tf (" Va l
        scanf("%f",&f);
        c=(f-32)/1. 8;
        p r in t f(" V alor
        }else printf("Ops! Digite apen as 
        '1' ou '2
      turn 0
        }