#include <stdio.h>

int procurando_mario(char string[50], char letra, int i) {
    while(string[i]  != '\0'){
        if (letra == string[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    int resultado = procurando_mario("mario",'t',0);
        if (resultado) {
        printf("A letra 'm' foi encontrada na string.\n");
    } else {
        printf("A letra 'm' nao foi encontrada na string.\n");
    }
}
