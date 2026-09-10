#include <stdio.h>

int main() {
    int num;
    printf("digite um número: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("número é positivo");
    }
    else if (num < 0) {
        printf("número é negativo");
    }
    else{
        printf("o número é 0");
    }
    return 0;
}

int main() {
    int status = 0;         // pode declarar variáveis com valores
    if (status == 0){
        printf("jogador pode jogar");
    }
    else if (status == 1){
        printf("jogador está suspenso");
    }
    return 0;
}


#include <stdio.h>

int main() {
    int idade;
    printf("qual sua idade: ");
    scanf("%d", &idade);
    if (idade < 14){
        printf("não pode assistir nenhum");
    } 
    else if (idade >= 14 && idade <18){
        printf("não pode assistir filmes de +18, apenas +14");
    }
    else if (idade >=18){
        printf("pode assistir filmes +18");
    }
    return 0;
}

int main() {
    int a, b, c, menor, maior;
    printf("digite a: ");
    scanf("%d", &a);
    printf("digite b: ");
    scanf("%d",&b);
    printf("digite c: ");
    scanf("%d", &c);

    menor = a;
    maior = a;

    if (b > maior){
        maior = b;
    }
    if (b < menor){
        menor = b;
    }
    
    if (c > maior){
        maior = c;
    }
    if (c < menor){
        menor = c;
    }
    printf("os numeros menores e maiores são respectivamente: %d %d", menor, maior);
}