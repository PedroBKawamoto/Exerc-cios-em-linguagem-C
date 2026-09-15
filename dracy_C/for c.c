//for (inicializacao; condicao; incremento;){}
#include <stdio.h>

//----------------------------------------------imprima os números de 1 a 5
/*
int main(){
    int i = 1;              // inicialização
    while (i<=5){           // condição
        printf("%d", i);    
        i+=1;               // incremento
    }
}*/

// esse mesmo codigo fica assim com for
/*
int main(){
    for (int i = 1; i<=5; i+=1){
        printf(" %d", i);
    }
}
*/

//----------------------------------------------imprima os números de 10 a 1
/*
int main(){
    for (int i = 10; i>=1; i-=1){
        printf(" %d", i);
    }
}
*/

//-----------------------------------------------Imprimir os números pares de 0 a 20
/*
int main(){
    for (int i = 0; i<=20; i+=2){
        printf(" %d", i);
    }
}
*/

//------------------------------------------------tipos de ioncrementos:
//pré incremento:
/*
int main(){
    int i = 5;      //i é incrementado, i = 6
    int a = ++i;    //depois b recebe o novo valor, b = 6
}
*/
/*
int main(){
    int i = 5;
    printf("%d", ++i);       //imprime o numero 6
}
*/

/*
//pós incremento:
int main(){
    int i = 5;       //a recebe o valor atual de i a =5
    int a = i++;}    // depois i é incrementado, i = 6
*/
/*
int main(){
    int i = 5;
    printf("%d", i++);      //imprime o numero 5
}
*/
//OBS: só vale nessas duas situações



//-------------------------Um professor precisa ler a nota de 5 alunos e calcular a média da turma.
/*
int main(){
    int nota, soma = 0;
    float media;
    for (int i = 1; i<=5; i+=1){
        printf("digite a nota %d: ", i);
        scanf("%d", &nota);
        soma+=nota;
    }
    media = soma / 5;
    printf("a media e %f", media);
}
*/


//----------------Imprimir a tabuada de um número de 1 a 10, digitado pelo usuário.
int main(){
    int num;
    do{
        printf("digite um número de 1 a 10: ");
        scanf("%d", &num);}
        while (num>10 || num<1);
    for (int i = 1; i<=10; i+=1){
        printf("%d * %d = %d", num, i, num*i);
    }
}


