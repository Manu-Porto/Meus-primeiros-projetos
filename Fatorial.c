/*Calculo de fatorial*/
#include <stdio.h>

int main () {
unsigned int N;
int fatorial (int N);

printf (":) \n");
printf ("Fatorial!\nInsira o numero a se encontrar fatorial:");
scanf ("%d", &N);
printf ("%d", fatorial (N));
}

int fatorial (int N){
    if (N<=1){
        return 1;
    }
    else {
        return (N*fatorial(N-1));
    }
}