#include <stdio.h>
#include <unistd.h>
int main(){for(;;){

  float o,c,f;
printf("\nConversor de escalas termométricas, digite '1' ou '2'\n1. De °C para °F\n2. De °F para °C\n");
  scanf("%f",&o);
  if(o==1){
  printf("Valor em °C: ");
  scanf("%f",&c);
  f=1.8*c+32;
  printf("Valor em °F: %0.2f\n",f);
    sleep(4);
  }else{ 
    if(o==2){
  printf("Valor em °F: ");
  scanf("%f",&f);
  c=(f-32)/1.8;
  printf("Valor em °C: %0.2f\n",c);
    sleep(4);
  }else printf("Ops! Digite apenas '1' ou '2'\n");
    }
  }
return 0;}