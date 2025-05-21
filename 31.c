#include <stdio.h>
int main(){
int alcool, gasolina, diesel, entrada;
alcool = 1;
gasolina = 2;
diesel = 3;

do{
    scanf("%d", &entrada);
    if(entrada == 1)
            alcool++;
    else if(entrada == 2)
            gasolina++;
    else if(diesel == 3)
            diesel++;
}
while (entrada != 4);{
    printf("MUITO OBRIGADO\n");
    printf("alcool: \n", alcool);
    printf("gasolina: \n", gasolina);
    printf("diesel: \n", diesel);
}

return 0;
}
