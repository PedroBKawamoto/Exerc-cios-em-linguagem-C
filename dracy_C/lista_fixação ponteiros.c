/*
Um jogo salva a quantidade de moedas de uma personagem, 
que inicialmente e igual a 18.
Fac¸a um programa que:
• Armazene a quantidade de moedas em uma
variavel moedas = 18;
• declare um ponteiro e associe-o a variavel moedas;
• associe o ponteiro `a moedas;
• imprima:
– o valor de moedas;
– o enderec¸o de moedas;
– o valor armazenado no ponteiro;
– o conte ´udo acessado pelo ponteiro.
• em seguida, altere a quantidade de moedas para 30 usando
o ponteiro e mostre o novo
valor da vari avel.*/

void exc1(){
    int moedas = 18;
    int *ptr;
    ptr = &moedas;
    
    printf("valor de moedas: %d\n", moedas);
    printf("endereco de moedas: %p\n", &moedas);
    printf("valor armazenado no ponteiro: %p\n", ptr);
    printf("conteudo acessado pelo ponteiro: %d\n", *ptr);

    *ptr = 30;
    printf("valor de moedas: %d\n", moedas);
}

//==========================================================================

/*
Um laborat ´orio registrou a temperatura de uma amostra em uma vari ´avel que inicialmente ´e
igual a 36.8.
Fac¸a um programa que:
• Armazene a temperatura em uma vari ´avel temperatura = 36.8;
• declare um ponteiro e associe-o `a vari ´avel temperatura;
• mostre a temperatura original;
• some 2.0 `a temperatura usando o ponteiro e mostre a temperatura atualizada.*/
void exc2(){
float temp = 36.8;
float *ptr;
ptr = &temp;
printf("a temperatura original e: %.2f\n", temp);

*ptr = *ptr + 2;
printf("a temperatura nova e: %.2f\n", temp);
}

//=============================================================================

/*
Um sistema salva a letra ’C’ que representa a categoria de um produto.
Fac¸a um programa que:
• declare uma vari ´avel categoria = ’C’;
• declare e associe um ponteiro `a vari ´avel categoria;
• imprima:
– a letra armazenada na vari ´avel;
– o enderec¸o da vari ´avel;
– o conte ´udo acessado pelo ponteiro.
• depois altere a categoria para ’A’ usando o ponteiro e mostre o novo valor da vari ´avel.*/

void exc3(){
    char categoria = 'C';
    char *ptr = &categoria;
    printf("letra: %c\n", categoria);
    printf("endereco da variavel: %p\n", &categoria);
    printf("conteudo acessado pelo ponteiro: %c\n", *ptr);

    *ptr = 'A';
    printf("novo valor da variavel: %c\n", categoria);
}

//=============================================================================

/*
Em um jogo de aventura, uma personagem possui 3 vidas, 9.5 moedas m ´agicas e n´ıvel ’B’.
Fac¸a um programa que:
• declare as vari ´aveis vidas, moedas e nivel com os valores iniciais;
• crie um ponteiro para cada uma delas;
• imprima os valores originais;
• altere, usando os ponteiros:
– vidas para 5;
– moedas para 15.0;
– nivel para ’A’.
• imprima os valores finais.*/

void exc4(){
    int vidas = 3;
    float moedas = 9.5;
    char nivel = 'B';

    int *p1 = &vidas;
    float *p2 = &moedas;
    char *p3 = &nivel;

    printf("vida antes: %d\n", vidas);
    printf("moedas antes: %.2f\n", moedas);
    printf("nivel antes: %c\n", nivel);

    *p1 = 5;
    *p2 = 15.0;
    *p3 = 'A';

    printf("vida depois: %d\n", vidas);
    printf("moedas depois: %.2f\n", moedas);
    printf("nivel depois: %c\n", nivel);
}

//=============================================================================

/*
Um sensor pode ser conectado a leituras diferentes ao longo do programa.
Fac¸a um programa que:
• declare duas vari ´aveis leitura1 = 10 e leitura2 = 25, representando leituras de um
sensor.
• declare um ponteiro, associe-o `a vari ´avel leitura1 e imprima o conte ´udo acessado por ele;
• depois fa c¸ a o ponteiro apontar para leitura2 e imprima novamente o conte ´udo acessado
por ele;
• por fim, altere leitura2 para 40 usando o ponteiro e mostre o novo valor da vari ´avel.*/
void exc5(){
    int l1 = 10;
    int l2 = 25;
    int *p1 = &l1;  //mesma coisa de declarar "int *p1; p1 = &l1;""
    printf("conteudo: %d\n", *p1);

    p1 = &l2;
    printf("conteudo: %d\n", *p1);

    *p1 = 40;
    printf("valor de l2: %d\n", l2);
}

//=============================================================================

/*
Fac¸ a o teste de mesa do c ´odigo, acompanhando os valores das vari ´aveis a, b e c, al ´em dos
conte ´udos acessados pelos ponteiros p1, p2 e p3.
Ao final, informe o valor de c*/

void exc6(){
int a, b, c;
int *p1, *p2, *p3;
a = 15;
b = 25;
p1 = &a;
p2 = &b;
c = *p1 + *p2;  //c = 15 + 25 = 40
p3 = &c;
*p1 = *p1 + 5;  //a = 15 + 5 = 20
*p3 = *p3 - 10; //c = 40 - 10 = 30
c = *p1 + *p2 + *p3;    //c = 20 + 25 + 30 = 75
}

//c = 75