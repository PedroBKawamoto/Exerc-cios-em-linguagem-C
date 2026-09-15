#include <stdio.h>
/*crie um programa com 3 variaveis, vidas - valor = 3, 
saldo - valor = 12.5, nivel - valor = B.
crie um ponteiro para cada uma, imoprima o valor original das 3,
altere usando ponteiros:
vidas para 5, saldo para 20, nivel para 'A'*/
void funcao1(){
int vidas = 3;
float saldo = 12.5;
char nivel = 'B';

int *ptr_vida = NULL;
float *ptr_saldo = NULL;
char *ptr_nivel = NULL;
ptr_vida = &vidas;
ptr_saldo = &saldo;
ptr_nivel = &nivel;

printf("vidas: %d\n", *ptr_vida);   //ou simplesmente dar printf com a variavel vida
printf("saldo: %.1f\n", *ptr_saldo);    //ou simplesmente dar printf com a variavel saldo
printf("nivel: %c\n", *ptr_nivel);  //ou simplesmente dar printf com a variavel nivel

*ptr_vida = 5;
*ptr_saldo = 20.0;
*ptr_nivel = 'A';

printf("\nvidas: %d\n", vidas);   //ou simplesmente dar printf com *ptr_vida
printf("saldo: %.1f\n", saldo);    //ou simplesmente dar printf com *ptr_saldo
printf("nivel: %c\n", nivel);  //ou simplesmente dar printf com *ptr_nivel
}


/*qual o valor de y?*/
void funcao2() {
    int x, y, w;
    int *p1, *p2, *p3;

    x = 20;
    w = 30;

    p1 = &x;    //conteudo do pointer p1 é o endereco de x
    p2 = &w;    //conteudo do pointer p2 é o endereco de w

    y = *p1 + w;    //y = conteudo guardado no endereco de x (20) + 30 (valor de w), *p3 = 50

    p3 = &y;    //conteudo do pointer p3 é o endereco de y

    *p3 = *p3 + 10;    //conteudo de p3 vira 60, y = 60

    y = *p1 + *p2 + *p3;    // y = valor do endereco de x (20) + valor do endereco de w (30) 
                            // + valor do endereco de y + 10 (60)

    printf("O valor de y e: %d\n", y);  // valor de y é 110
}


//========== PONTEIROS DE VETORES ==========
/*o nome do vetor pode ser usado como o endereco do 1º elemento
vetor -> &vetor[0] -> endereco do 1º elemento do vetor
*/  
void funcao3(){
    int vetor[3] = {20, 40, 60};
    /*
    vetor[0] -> conteudo = 20 -> endereco = 2000 - 2003
    vetor[1] -> conteudo = 40 -> endereco = 2004 - 2007
    vetor[2] -> conteudo = 60 -> endereco = 2008 - 2011
    */
    int *ptr_vetor = vetor;
    /*
    endereco = 3244 -> conteudo = endereco do vetor[0] = 2000
    ptr_vetor -> endereco do primeiro elemento do vetor (2000)
    *ptr_vetor -> valor do primeiro elemento do vetor (20)
    */
}


//=========INDEXAÇÃO DE PONTEIROS============
void funcao4(){
    int vetor[3] = {20, 40, 60};
    /*
    vetor -> endereco do primeiro elemento do vetor
    *vetor -> valor do primeiro elemento do vetor

    vetor[0] -> *vetor -> *(vetor + 0)*/


    printf("Endereco: %p\n", vetor); //imprime o endereco do vetor[0]
    printf("Valor: %d\n", *vetor); //imprime o valor do vetor[0] (20)

    //Na aritmética de ponteiros, somar 1 a um ponteiro faz com que ele
    //avance para o próximo elemento do tipo para o qual ele aponta.

    printf("valor do vetor[0]: %d\n", *(vetor + 0));  //ou vetor[0], ou *vetor
    printf("valor do vetor[1]: %d\n", *(vetor + 1));  //ou vetor[1]
    printf("valor do vetor[2]: %d\n", *(vetor + 2));  //ou vetor[2]
}



void funcao5(){
    int vetor[3] = {20, 40, 60};
    int *ptr_vetor = vetor;     //ou *ptr_vetor = &vetor[0]
    /*
    ptr_vetor -> endereco do primeiro elemento do vetor
    *ptr_vetor -> valor do primeiro elemento do vetor
    */
    printf("valor do vetor[0]: %d\n", *(ptr_vetor + 0));
    printf("endereco do vetor[0]: %d\n", ptr_vetor);
    printf("valor do vetor[1]: %d\n", *(ptr_vetor + 1)); 
    printf("endereco do vetor[1]: %d\n", ptr_vetor + 1); 
    printf("valor do vetor[2]: %d\n", *(ptr_vetor + 2)); 
    printf("endereco do vetor[2]: %d\n", ptr_vetor + 2); 
}



/*
um ponteiro pode armazenar o endereco de um elemento de um vetor. Ao incrementar esse
ponteiro p++ ou p+=1, ele passa a apontar para o próximo elemento do vetor*/
void funcao6(){
    int vetor[3] = {20, 40, 60};
    int *ptr_vetor = vetor;

    int i = 0;
    while (i<3){    //executa 3 vezes
        printf("endereco %p e conteudo %d\n", ptr_vetor, *ptr_vetor);
        ptr_vetor++;    //move o ponteiro para o proximo elemento do vetor (pula 4 bytes)
        i++;    
    }
}


//Qual é o valor de energia e do bônus ao final do programa?
void funcao7(){
    int energia, bonus;
    int *p;

    energia = 5;
    p = &energia;   //ponteiro vale o endereco da energia
    bonus = *p + 10;    //bonus é o valor da energia + 10 = 15
    (*p)++;     //valor da energia + 1 = 5 + 1 = 6

    //(*p)++ ->acessa o valor apontado por p e some 1. se estivesse assim: *p++, ele mudaria o endereco
    //do ponteiro (ex de 2000 para 2004), apontando para um possivel lixo de memoria, ou outra variavel
    //e apenas "olha" o novo valor apontado pelo pointer, e a energia nao seria somada

    //*(p+2) o valor armazenado na posição de memória dois elementos adiante do ponteiro p

    bonus--;    //15 - 1 = 14

    printf("Energia: %d\n", energia);   //6
    printf("Bonus: %d\n", bonus);   //14
}


//======== PONTEIROS DE STRINGS ==========
/*uma string é um vetor de char -> seu nome é a posição de memória do 1º elemento.
todos 0os caracteres podem ser acessados sequencialmente até encontrar o \0
*/

void funcao8(){                                 //2001 - 'L'    -> string[0]  
    char string[] = "Lua";                      //2002 - 'u'    -> string[1]
    char *ptr_string = string;                  //2003 - 'a'    -> string[2]
                                                //2004 - '\0'   -> string[3]
    printf("string: %s", string);   //Lua
    printf("string com ponteiro: %s", ptr_string);  //Lua
    printf("apenas a primeira letra: %c", ptr_string);  //L
}

//ptr_string -> aponta para o endereco do primeiro indice da string (2001)


//========== VETORES DE PONTEIROS =============

//ponteiro para inteiro:
void funcao9(){
    int *ptr_numero;
    int numero = 10;
    ptr_numero = &numero;
}

//vetores de ponteiros para inteiro:
void funcao10(){
    int *ptr_numeros[3];
    int num1 = 10, num2 = 20, num3 = 30;

    ptr_numeros[0] = &num1;
    ptr_numeros[1] = &num2;
    ptr_numeros[2] = &num3;
}

/*       end    cont    |                   end     cont
num1 -> 3000      10    |ptr_numeros[0] -> 2000     3000
num2 -> 3004      20    |ptr_numeros[1] -> 2008     3004
num3 -> 3008      30    |ptr_numeros[2] -> 2016     3008
*/


//========= PASSAGEM POR VALOR ==============

/*quando uma variavel é passada como argumento para uma função,
o valor é copiado para a variável local da função
*/

//ex: funcao que aplica 10% de desconto no preco do produto
void aplicaDesconto(float preco){      //cria uma copia da variavel criada fora
    preco = preco *0.9;     //10% de desconto na copia
    printf("preco dentro da funcao: %.2f\n", preco);
}

int main(){
    float preco = 100.0;
    printf("antes: preco = %.2f\n", preco); //100.00
    aplicaDesconto(preco);  //90.00
    printf("Fora da funcao: preco = %.2f\n", preco);  //100.00
}



//===============PASSAGEM POR REFERÊNCIA==============

/*quando um ponteiro é passado como argumento para uma função, pode-se alterar o 
valor da variável apontada por esse ponteiro*/

//ex: funcao que aplica 10% de desconto no preco do produto
void aplicaDesconto_pointer(float *preco){
    *preco = *preco * 0.9;
    printf("preco com desconto dentro da funcao: %.2f\n", *preco);
}

int main(){
    float preco = 100.0;
    printf("Preco original: %.2f\n", preco);    //100
    aplicaDesconto_pointer(&preco);     //90
    //aqui, ele acessa o que tem no endereco de preco, ou seja, o valor de 100, e aplica o desconto
    printf("Preco após a funcao com ponteiro: %.2f\n", preco);  //90
}//diferentemente do parametro sem ponteiros, nessa funcao, o ponteiro modifica o valor da variavel


//=======FUNÇÕES X PARÂMETROS===========

//Parâmetros de entrada
void mostrarDobro(int x){   
    printf("resultado: %d\n", 2 * x); 
}   //funcao apenas usa o valor para calcular algo, sem devolver alteração

//Parâmetros de saída
void calcularQuadrado(int x, int *resultado){
    *resultado = x * x;
}   //funcao calcula algo e escreve o resultado em uma variavel externa

void dobrar(int *x){
    *x = (*x) * 2;
}   //variavel entra com um valor e sai alterada

int main(){
    int numero = 5;
    int quadrado;

    printf("numero original: %d\n", numero);    //5

    mostrarDobro(numero);   //10

    calcularQuadrado(numero, &quadrado);    
    printf("quadrado: %d\n", quadrado);     //25

    //o & avisa o C: pegue o numero de endereco, nao oq esta dentro -> envia o endereco para funcao
    //pointer int *resultado recebe o endereco do num como seu valor. quando a funcao faz
    //*resultado = x * x, ela sabe que tem que ir no endereco guardado e guardar o resultado lá

    dobrar(&numero);
    printf("Numero dobrado: %d\n", numero);     //10
}

/*Variável comum (int, float, char):
    - se a funcao so vai ler o valor, passe a variavel sem &    - mostrarDobro(numero)
    - se a funcao vai modificar o valor, passo a variavel com & - mostrarDobro(&numero)

arrays/ vetores/ strings:
    nunca usam & na chamada da função, pois o nome do vetor já é o endereco de memoria dele
*/


//============PASSAGEM POR REFERÊNCIA==================

//funcao que retorna 2 valores  -> possui 2 parâmetros de saída

/*
Ex.: Leia a distância e o tempo. Implemente uma função que calcule a velocidade média
e a aceleração média, retornando ambos os valores utilizando ponteiros.
*/
void calcular(float distancia, float tempo, float *velocidade, float *aceleracao){
    *velocidade = distancia/tempo;              //param. entrada -> distancia, tempo
    *aceleracao = *velocidade / tempo;          //param. saída -> *aceleracao, *velocidade
}  

int main(){
    float distancia, tempo;
    float velocidade, aceleracao;

    printf("digite a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("digite o tempo gasto: ");
    scanf("%f", &tempo);

    calcular(distancia, tempo, &velocidade, &aceleracao);

    printf("Velocidade media: %.2f\n", velocidade);
    printf("aceleracao media: %.2f\n", aceleracao);
}


//=========PASSAGEM POR REFERENCIA - VETOR================

//vetor como parâmetro da função

/*
ao passar um vetor para uma função, ela sempre recebe o endereco do primeiro elemento o vetor
por isso a função consegue acessar os elementos do vetor original
se a função alterar um elemento, a alteração será feita no vetor original
*/

//3 formas equivalentes de se declarar função com vetores de parâmetros
void funcao11(int vetor[], int tamanho){    //forma mais comum
}

void funcao12(int vetor[5], int tamanho){
}

void funcao13(int *vetor, int tamanho){     //aqui, avisa o tipo de variavel, diz que vai receber um vetor 
}                                          //(endereco de memoria com varios inteiros grudados)



//Ex: Função que "zera" um vetor de inteiros passado como parâmetro.
void zerarVetor1(int *vetor, int tam){
    for (int i = 0; i < tam; i++){
        vetor[i] = 0;   //acessa a posição do vetor e zera
    }
}

int main(){
    int vetor[] = {3, 7, 9};
    zerarVetor1(vetor, 3);
}
//não importa colocar o indice do vetor no parâmetro, pois o compilador só enxerga 
//o primeiro índice (vetor[0]), inicialmente,não sabe até onde vai


//funcao que altera a primeira letra de um nome
void funcao14(char texto[], char letra){
    texto[0] = letra;
}

int main(){
    char nome[] = 'Marcy';
    printf("antes: %s\n", nome);    //Marcy

    funcao14(nome, 'D');
    printf("depois: %s\n", nome);   //Darcy
}