#include <stdio.h>

long long int potencia(int a, int b){
    if (0 == b)
        return 1;
    else
        return a * potencia(a,b-1);
}

int main(){
    long long int resultado;
    long long int resultado2;
    printf("digite o numero: ");
    scanf("%lld",&resultado);
    printf("digite o numero: ");
    scanf("%lld",&resultado2);
    printf("a potencia é : %lld",potencia(resultado,resultado2));
