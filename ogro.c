#include <stdio.h>

int main(){
    int numero, r;
    r = 'I';
    scanf("%d", &numero);
    if (numero == 0){
        printf("* *");
        }
    for(int i = 0; i < numero;i++){
        if (numero > 5){
            printf("I" );
        }
        if (i > 5){
            printf(" ");
        }
        else{
            printf("I");
        }
        if(i == numero - 1){
            printf(" *");
        }
        
        }
    }
