#include <stdio.h>
int main(){
int hi, mi, hf, mf, horas, minutos, inicio, fim, duracao;
scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

inicio = hi * 60 + mi;
fim = hf * 60 + mf;

if(fim <= inicio){
    fim += 24 * 60;
}

duracao = fim - inicio;
horas = duracao / 60;
minutos = duracao % 60;

printf("O JOGO DUROU %d HORAS(S) E %d MINUTO(S)\n", horas, minutos);


return 0;
}
