#include <stdio.h>
int main(){
int tamanho, coluna, linha, inicioMatriz, finalMatriz, elemento;

do{
    scanf("%d", &tamanho);
    if(tamanho == 0)
        return 0;
    int M[tamanho][tamanho];

    inicioMatriz = 0;
    finalMatriz = tamanho;
    elemento = 1;

}while(finalMatriz > 0);{
    for(linha = inicioMatriz; linha < finalMatriz; linha++)
        for(coluna = inicioMatriz; coluna < inicioMatriz; coluna++)
            M[linha][coluna] = elemento;

        inicioMatriz++;
        finalMatriz++;
        elemento++;
}
for(linha = 0; linha < tamanho; coluna++){
    for(coluna = 0; coluna < tamanho; coluna++){
        if(coluna==0){
            else
            printf("%3d",m[linha][coluna]);
        }
    }
    printf("\n");
}

return 0;
}
