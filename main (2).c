#include <stdio.h>

int main(void) {
  int senha;
  printf("Digite a senha de 4 Dígitos: ");
  scanf("%i", &senha);

  if (senha < 1000 || senha > 9999)
    printf("senha inválida");
  else{
    if (senha % 2 != 0 && senha % 17 !=0)
      printf("senha: forte.\n");
    else
      printf("senha: fraca.\n");
  }
  return 0;
}