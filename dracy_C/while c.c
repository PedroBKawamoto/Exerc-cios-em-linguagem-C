#include <stdio.h>
//Somar números digitados pelo usuário, até “0” ser digitado Ler um número
/*int main(){
    int num, soma = 0;
    printf("digite um numero: ");
    scanf("%d", &num);
    soma += num;
    while (num != 0){
        printf("digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("a soma e %d", soma);
}
*/


//Leia números digitados pelo usuário, até ser digitado um número negativo e depois
//imprima quantos números positivos foram digitados
/*
int main(){
    int num = 0, cont = 0;
    while (num >= 0){
        printf("digite um numero: ");
        scanf("%d", &num);        
        if (num >=0) 
        {cont+=1;}
        }
        printf("o numero de positivos digitados e %d", cont);
}
*/


//Leia um número natural n e e calcule a soma dos n primeiros números inteiros:
//Sn = 1 + 2 + ... + n..
/*
int main(){
    int n, cont = 0, soma = 0;
    printf("digite n: ");
    scanf("%d", &n);
    while (cont <= n){
        soma+=cont;
        cont+=1;
    }
    printf("a soma dos n primeiros numeros e %d", soma);
}
*/


//Leia inteiros até digitar 0. Ao final, imprima o maior.
/*
int main(){
    int n, maior;
    printf("digite um numero: ");
    scanf("%d", &n);
    maior = n;
    while (n != 0){
        printf("digite um numero: ");
        scanf("%d", &n);
        if (n > maior){
            maior = n;
        }
    }
    printf("o maior número digitado foi %d", maior);
}*/


//Chapéu Seletor de Hogwarts. Leia a característica da pessoa e informe a casa
//correspondente. O menu deve continuar sendo exibido até que o usuário digite 
//0 para encerrar oprograma, tratando também opções inválidas.
/*
int main(){
    int caract;
    do {
        printf("SELECAO DAS CASAS");
        printf("\n1 - coragem");
        printf("\n2 - lealdade");
        printf("\n3 - inteligencia");
        printf("\n4 - ambicao");
        printf("\n0 - sair");
        printf("\nEscolha uma caracteristica: ");
        scanf("%d", &caract);

        switch(caract){
            case 1:
            printf("Voce pertence a GRIFINORIA");
            break;

            case 2:
            printf("Voce pertence a LUFA-LUFA");
            break;

            case 3:
            printf("Voce pertence a CORVINAL");
            break;

            case 4:
            printf("Voce pertence a SONSERINA");
            break;

            case 0:
            printf("O chapeu seletor se despede");
            break;

            default:
            printf("Opçao invalida");
        }
    } 
    while (caract!= 0);
}
*/


//Verificar se a senha digitada pelo usuário é a correta.
//Senha = 1234. peça outra ate a correta for digitada
/*
int main(){
    const int senha = 1234;         //const é um valor fixo, que não pode ser allterado
    int key;
    do{
        printf("\ndigite a senha: ");
        scanf("%d", & key);
        if (key == senha){
            printf("\nA SENHA ESTA CORRETA");
            break;
        }
        else{
            printf("\nA SENHA ESTA ERRADA");
        }
    }
    while (key != senha);
}
*/


//Verificar se a senha digitada pelo usuário é a correta.
// Mas com apenas 3 tentativas
/*
int main(){
    const int senha = 1234;
    int key, cont = 0;
    do{
        printf("\ndigite a senha: ");
        scanf("%d", & key);
        cont+=1;
        if (key == senha){
            printf("\nA SENHA ESTA CORRETA");
            break;
        }
        else{
            printf("\nA SENHA ESTA ERRADA");
        }
        if (cont == 3){
            printf("\nLIMITE DE TENTATIVAS ATINGIDO");
            break;
        }
    }
    while (key != senha && cont<=3);
}
*/


//Calculadora simplificada. Execute a calculadora
//até que seja digitado 0 no operador1.
int main(){
int op1, op2, res, esc;
    do{
    printf("operando 1: ");
    scanf("%d", &op1);

    if (op1 == 0){
        printf("saindo...");
        break;
    }

    printf("operando 2: ");
    scanf("%d", &op2);

    printf("ESCOLHA DE OPERADORES\n");
    printf("1 para +\n");
    printf("2 para -\n");
    printf("3 para *\n");
    printf("4 para /\n");


    printf("digite de 1 a 4: ");

    scanf("%d", &esc);
    
    switch(esc){
        case 1:
        res = op1 + op2;
        printf("o resultado e %d\n", res);
        break;

        case 2:
        res = op1 - op2;
        printf("o resultado e %d\n", res);
        break;

        case 3:
        res = op1 * op2;
        printf("o resultado e %d\n", res);
        break;

        case 4:
        if (op2 == 0){
            printf("ERRO: divisão por 0");
            break;
        }
        else{}
        res = op1 / op2;
        printf("o resultado e %d\n", res);
        break;

        default:
        printf("end");
        break;

    }
    }
    while (op1 != 0 );
    }


