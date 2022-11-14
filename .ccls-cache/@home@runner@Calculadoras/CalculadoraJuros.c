#include <stdio.h>
#include <math.h>

int main(){
  float opcao,capinicial,taxajuros,tempo,montante,juros;
  printf("\nDigite '1' ou '2'\n1. Juros Simples\n2. Juros Compostos\n");
  scanf("%f",&opcao);
  if(opcao==1){
  printf("Valor inicial:");
  scanf("%f",&capinicial);
  printf("Taxa juros:");
  scanf("%f",&taxajuros);
  printf("Meses:");
  scanf("%f",&tempo);
    montante=(capinicial*taxajuros/100*tempo)+capinicial;
    juros=montante-capinicial;
  printf("Juros:R$%0.2f\nTotal:R$%0.2f\n",juros,montante);
  }else{if(opcao==2){
  printf("Valor inicial:");
  scanf("%f",&capinicial);
  printf("Taxa juros:");
  scanf("%f",&taxajuros);
  printf("Meses:");
  scanf("%f",&tempo);
    montante=capinicial*(pow(1+(taxajuros/100),tempo));
      juros=montante-capinicial;
  printf("Juros:R$%0.2f\nTotal:R$%0.2f\n",juros,montante);
}else{
      printf("Ops! Apenas '1' ou '2'");
return 0;
      }
    }
  }