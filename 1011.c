#include <stdio.h>
#include <math.h>

int main (){
double PI = 3.14159;
double R, Volume;

scanf("%lf", &R);
Volume = ((4.0/3) * PI * (pow(R, 3)));

printf("VOLUME = %.3lf\n", Volume);



 return 0;
}
