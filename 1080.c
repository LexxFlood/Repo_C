#include <stdio.h>
int main (){

int valor_inicial, posicao, maior_numero = 0;

for(int i = 1; i <= 100; i++){
    scanf("%d", &valor_inicial);

if(valor_inicial > maior_numero){
        maior_numero = valor_inicial;
        posicao = i;
    }
}
printf("%d", maior_numero);
printf("%d", posicao);
return 0;
}
