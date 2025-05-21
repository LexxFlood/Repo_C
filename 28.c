#include <stdio.h>
int main(){
int senha;

do{
    scanf("%d", &senha);
    if(senha == 2002)
        printf("Senha Correta\n");
    else
        printf("Senha Inválida\n");
} while (senha != 2002);

return 0;
}
