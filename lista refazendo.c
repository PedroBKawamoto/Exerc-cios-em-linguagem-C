
//1
#include <stdio.h>
int main(){
    int energia, estabilidade, codigo;
    printf("energia: ");
    scanf("%d", &energia);

    printf("estabilidade: ");
    scanf("%d", &estabilidade);

    printf("codigo: ");
    scanf("%d", &codigo);

    if((energia >= 70 || energia <= 120) && estabilidade > 80 && (codigo == 11 || codigo ==1)){
        printf("PORTAL ABERTO");
    }

    else{
        printf("FALHA NA ABERTURA");
    }
}




//2
#include<stdio.h>
int main(){
    int v[5];
    int soma = 0, bonus = 0, placar = 0;

    for (int i = 0; i < 5; i++){
        printf("numero: ");
        scanf("%d", &v[i]);
    }
    
    for (int i = 0; i < 5; i++){
        if (v[i] % 4 == 0){
            soma+=v[i];
            bonus+=2;
        }
    }
    placar = soma + bonus;
    printf("a soma e %d", soma);
    printf("o bonus e %d", bonus);
    printf("o placar e %d", placar);

}





//3
#include <stdio.h>
int main(){
    int eventos[12];        //se já quiser preencher, coloca-se {} nos valores
    int Q = 0;
    int energia = 100;

    for (int i = 0; i < 12; i++){
        printf("digite um evento: ");
        scanf("%d", &eventos[i]);
    }

    for (int i = 0; i < 12; i++){

        switch(eventos[i]){

            case 1:
                energia-=15;
                Q+=1;
                break;

            case 2:
                energia-=30;   
                Q+=1;
                break;

            case 3:
                energia+=10;
                break;

            default:
                break;
        }

        if (energia<=0){
            printf("energia menor ou igual a 0\n");
            break;
        }
    }
    if (energia > 0){
        printf("programa processou todos os eventos\n");
    }
    printf("energia final: %d\n", energia);
    printf("quantidade de procedimentos: %d\n", Q);
}




//4
#include <stdio.h>
int main(){
    int set_validos = 0, ultimo;
    for(int i = 1; i <= 50; i ++){
        if (i % 8 != 0){
            set_validos += 1;
        }
        if (set_validos == 20){
            printf("20 setores validos, encerrando a varredura...");
            ultimo = i;
            break;
        }
    }
    printf("o ultimo setor averiguado foi o %d", ultimo);
}


