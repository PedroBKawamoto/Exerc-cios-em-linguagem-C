#include <stdio.h>

//=====ARMAZENAMENTO DE VARIAVEIS========

/*
char ocupa 1 byte
int ocupa 4 bytes
float ocupa 4 bytes
double/ pointer ocupa 8 bytes
*/
void funcao(){
int numero = 10;
}
/*nome: numero
tipo: int
valor: 10
endereco: não se sabe, mas ocupa 4 bytes
*/

//numero 1 equivale ao conteudo da memoria, vale 10
//&numero1 equivale ao endereço da memória, corresponde ao 1º endereço do bloco de 4 bytes.
void funcao1(){
int numero1 = 10;
int numero2, soma;
}

//endereco  --  conteudo
//  2000    --      10   numero 1 - tem valor atribuido (10)
//  2004    --      #    numero2  - tem lixo de memoria (#)
//  2008    --      #    soma   - tem lixo de memoria (#)

//numero1 = 10
//&numero1 = 2000
//numero2 = #
//&numero2 = 2004
//soma = #
//&soma = 2008
void funcao2(){
int numero1 = 10;
int numero2, soma;
numero2 = 20;
}

//endereco  --  conteudo
//  2000    --      10   numero 1 - tem valor atribuido (10)
//  2004    --      20    numero2  - tem lixo de memoria (#)
//  2008    --      #    soma   - tem lixo de memoria (#)

//numero1 = 10
//&numero1 = 2000
//numero2 = 20
//&numero2 = 2004
//soma = #
//&soma = 2008

void funcao3(){
int numero1 = 10;
int numero2, soma;
numero2 = 20;
soma = numero1 + numero2;
}

//endereco  --  conteudo
//  2000    --      10   numero 1 - tem valor atribuido (10)
//  2004    --      20    numero2  - tem lixo de memoria (#)
//  2008    --      30    soma   - tem lixo de memoria (#)

//numero1 = 10
//&numero1 = 2000
//numero2 = 20
//&numero2 = 2004
//soma = 30
//&soma = 2008

//============IMPRIMINDO UM ENDERECO DE MEMORIA=============
void funcao4(){
    int numero1 = 10;
    int numero2, soma;
    numero2 = 20;
    soma = numero1 + numero2;
    printf("Valor do 1º numero: %d\n", numero1);    //para imprimir o valor, coloca-se "%d" e "numero1"
    printf("Endereco do 1 numero: %p\n", &numero1); //para imprimir o endereco, coloca-se "%p" e "&"" antes de "numero1"
}       //obs: %p é um especificador do tipo ENDERECO


//=========ponteiros=============

/*sao variaveis que armazenam o endereco de memoria de outras variaveis
um ponteiro aponta para uma variavel por meio de seu endereco
DECLARACAO: tipo_da_variavel_apontada * nome_ponteiro
*/
void funcao5(){
int *ptr; //ptr armazena o endereco de um inteiro
int numero1 = 10;
ptr = &numero1; //ptr armazena o endereco de numero1
}

//=========inicializando um ponteiro==============

void funcao6(){
int numero = 5;
int *ptr_numero = NULL; //sempre inicializar ponteiro com "null", para nao ter lixo de memoria
ptr_numero = &numero;   //ptr_numero armazena o endereco de numero
}
//endereco  --  conteudo (int *ptr_numero)         |     endereco  --  conteudo (numero)
//  3248    --      ##                             |        2004   --      ##
//  3240    --     2000   -->  mas antes era NULL  |        2000   --      5

//o conteudo do ponteiro ptr_numero passa a apontar para o endereco de "numero", que é 2000 


//=============acessando conteudo da variavel pelo valor apontado pelo ponteiro ====================

void funcao7(){
    int numero = 5;
    int *ptr = NULL;
    ptr = &numero;
    printf("Valor do numero: %d\n", numero);    //acessa o conteudo do numero (5)
    printf("Endereco do numero: %p\n", &numero);    //endereco do numero    (ex:2000)
    printf("Valor do ponteiro ptr: %p\n", ptr);     //conteudo do ponteiro, endereco do numero (2000)
    printf("Valor apontado por ptr: %d\n", *ptr);   //o asterisco vê o conteudo do endereco que o ponteiro guarda (5)
    printf("Endereco do proprio ptr: %p\n", &ptr);  //acessa o endereco do ponteiro (ex: 3240)
}   //obs: usa-se %d para acessar o conteudo do numero, seja pelo "numero", ou pelo "*ptr"

/*
    variavel → Acessa seu valor
    &variavel → Acessa o seu endereço de memória
    ponteiro; → Acessa o endereço de memória de outra variável;
    &ponteiro; → Acessa o seu endereço de memória (do ponteiro);
    *ponteiro; → Acessa o conteudo armazenado no endereço de memória guardado

    Se você usa ptr (sem asterisco): você está mexendo no endereço (onde a informação está).
    Se você usa *ptr (com asterisco): você está mexendo no conteúdo (o valor que está lá dentro).
*/

void funcao8(){
    int numero = 5;
    int *ptr1 = NULL;
    int *ptr2;
}
/*//endereco  --  conteudo         |     endereco  --  conteudo 
//  3248    --      ##      (ptr2) |        2004   --      ##
//  3240    --     NULL     (ptr1) |        2000   --      5    (numero)
*/


void funcao9(){
    int numero = 5;
    int *ptr1 = NULL;
    int *ptr2;
    ptr1 = &numero; //conteudo de ptr1 vira endereco do numero (2000)
    ptr2 = ptr1;    //conteudo de ptr2 vira conteudo de ptr1, que é end do numero (2000)
}
/*//endereco  --  conteudo         |     endereco  --  conteudo 
//  3248    --     2000     (ptr2) |        2004   --      ##
//  3240    --     2000     (ptr1) |        2000   --      5    (numero)
*/


void funcao10(){
    int numero = 5;
    int *ptr1 = NULL;
    int *ptr2;
    ptr1 = &numero; //conteudo de ptr1 vira endereco do numero (2000)
    ptr2 = ptr1;    //conteudo de ptr2 vira conteudo de ptr1, que é end do numero (2000)
    *ptr2 = 4;      //ptr2 guarda o endereco 2000 (end de "numero"). *ptr2 aponta para o
                    //conteudo do endereco 2000, ou seja, o conteudo de numero vira 4
    printf("conteudo do numero: %d\n", numero);    //--> 4
    printf("endereco do numero: %p\n", &numero);   //--> 2000

    printf("valor do ponteiro ptr1 (endereco do numero): %p\n", ptr1);   //--> 2000
    printf("endereco do ponteiro ptr1: %p\n", &ptr1);   //--> 3240
    printf("valor apontado por ptr1: %d\n", *ptr1);     //--> 4

    printf("valor do ponteiro ptr2 (endereco do numero): %p\n", ptr2);   //--> 2000     //endereco que ele aponta
    printf("endereco do ponteiro ptr2: %p\n", &ptr2);   //--> 3248
    printf("valor apontado por ptr2: %d\n", *ptr2);     //--> 4     //conteudo que el aponta

}
/*//endereco  --  conteudo         |     endereco  --  conteudo 
//  3248    --     2000     (ptr2) |        2004   --      ##
//  3240    --     2000     (ptr1) |        2000   --      4    (numero)
*/




