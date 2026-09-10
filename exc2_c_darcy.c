//Leia dois inteiros a e b. Imprima se s ˜ao iguais ou qual deles é o maior.
#include <stdio.h>

int main() {
    int a, b, maior;
    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digite o segundo numero: ");
    scanf("%d", &b);
    if (a == b){
        printf("a e b são iguais");
    }
    else if (a > b){
        maior = a;
        printf("a é maior");
    }
    else{
        maior = b;
        printf("b é maior");
    }
}

//Leia dois inteiros x1 e x2. Sabendo que o m ´odulo de um n ´umero x ´e definido como:
//|x| =(
//x, se x ≥ 0
//−x, se x < 0)
//Calcule e imprima o m ´odulo da diferenc¸a entre os dois n ´umeros, ou seja, |x1 − x2|
#include <stdio.h>
int main(){
    int x1, x2, d, mod;
    printf("entre com x1: ");
    scanf("%d", &x1);
    printf("entre com x2: ");
    scanf("%d", &x2);
    d = x1 - x2;
    if (d > 0){
        mod = d;
    }
    else {
        mod = -d;
    }
    printf("o móodulo é %d",mod);
}   


//3. Um estudo sobre sensibilidade `a temperatura da ´agua identificou que a maioria das pessoas
//considera:
//• fria a ´agua com temperatura abaixo de 25◦C;
//• morna a ´agua entre 25◦C e 30◦C;
//• quente a ´agua acima de 30◦C.
//Leia a temperatura (float) e imprima fria, morna ou quente
#include <stdio.h>
int main() {
    float temp;
    printf("qual a temperatura: ");
    scanf("%f", &temp);
    if (temp < 25){
        printf("a água está fria");
    }
    else if (temp >= 25 && temp <= 30){
        printf("a água está morna");
    }
    else{
        printf("a água está quente");
    }
}

//Uma loja vende caixas de bombons por R$ 12.00 cada no varejo. Para compras de 10 caixas
//ou mais, ´e aplicado o prec¸ o de atacado de R$ 9.50 por caixa. Leia a quantidade de caixas
//compradas e imprima o valor total da compra.
#include <stdio.h>
int main() {
    int Q;
    float val;
    printf("quantas caixas foram compradas? ");
    scanf("%d", &Q);
    if (Q >= 10){
        val = Q * 9.5;
    }
    else {
        val = 12 * Q;
    }
    printf ("o valor é %f", val);
}

//Leia a altura h (em metros) e o sexo (H para homem, M para mulher). Calcule e imprima o peso
//ideal usando:
//Homem: P = 72.7 · h − 58.0
//Mulher: P = 62.1 · h − 44.7
//Se o sexo informado n ˜ao for H ou M, imprima uma mensagem de erro. O c ´odigo deve ser
//case-insensitive (aceitar tamb ´em h para homem e m para mulher).
#include <stdio.h>
int main(){
    float alt, peso;
    char s;
    printf("Qual a altura? ");
    scanf("%f", &alt);
    printf("Qual o sexo? ");
    scanf(" %c", &s);
    if (s == 'h' || s == 'H' || s=='m' || s== 'M'){
        if (s == 'h' || s == 'H') {
            peso = (72.7 * alt) - 58;
        }
        else {
            peso = (62.1 * alt) - 44.7;       
       }
       printf("o peso ideal é %f", peso);
    }
    else {
        printf("ERRO");
    }
}

//Leia dois n ´umeros reais x e y e, em seguida, leia um inteiro op.
//• Se op == 1, some: x + y;
//• Se op == 2, subtraia: x − y;
//• Se op == 3, multiplique: x · y;
//• Se op == 4, divida: x/y.
//Mostre mensagem de erro se op n ˜ao estiver entre 1 e 4 e caso a divis ˜ao n ˜ao seja poss´ıvel
//(denominador igual a zero).
#include <stdio.h>
int main(){
    float x, y, res;
    int op;

    printf("digite x: ");
    scanf("%f", &x);

    printf("digite y: ");
    scanf("%f", &y);

    printf("qual o op? ");
    scanf("%d", &op);
        switch (op) {
        case 1:
            res = x + y;
            printf("o resultado é %f", res);
            break;
        case 2: 
            res = x - y;
            printf("o resultado é %f", res);
            break;
        case 3: 
            res = x * y;
            printf("o resultado é %f", res);
            break;
        case 4: 
            if (y != 0){
                res = x / y;
                printf("o resultado é %f", res);
                break;
            }
            else{
                printf("erro");
                break;
            }
        default :
            printf("número inválido");
            break;
    }

}

//7. Leia:
//• o n ´umero de lados n (inteiro);
//• a medida do lado l (em cm, float).
//Calcule e imprima:
//• se n = 3, escrever TRIANGULO e a ´area;
//• se n = 4, escrever QUADRADO e a ´area;
//• se n = 5, escrever PENTAGONO.
//Use as f ´ormulas:
//´Area do quadrado = l2
//´Area do tri ˆangulo equil ´atero =
//√3 / 4 *l^2
//Observac¸ ˜ao: se n for diferente de 3, 4 ou 5, mostre mensagem de erro.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float l, a;
    printf("qual a medida do lado? ");
    scanf("%f", &l);
    printf("qual o numero de lados? ");
    scanf("%d", &n);

    switch (n){
    case 3:
        printf("TRIÂNGULO\n");
        a = sqrt (3) / 4 * l*l;
        printf("A área é %f", a);
        break;
    case 4:
        printf("QUADRADO\n");
        a = l*l;
        printf("A área é %f", a);
        break;
    case 5:
        printf("PENTAGONO"); 
        break;
    default:
        printf("erro");
        break;
    }
}


//8. Extra/Desafio: Implementar um programa em C que receba cinco n ´umeros reais
//x1, x2, x3, x4, x5 e mostre:
//• (1) a m ´edia;
//• (2) o desvio padr ˜ao do conjunto;
//• (3) a quantidade de n ´umeros (dentre os cinco) que est ˜ao acima da m ´edia.
//Restric¸ ˜ao: n ˜ao usar arranjos (vetores) e n ˜ao usar estruturas de repetic¸ ˜ao.
//Use as f ´ormulas:
//(¯x = x1 + x2 + x3 + x4 + x5)/5
//σ = ( (x1 − ¯x)2 + (x2 − ¯x)2 + (x3 − ¯x)2 + (x4 − ¯x)2 + (x5 − ¯x)2)/5
#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, x3, x4, x5, med, desv;
    int above = 0;

    printf("digite x1: ");
    scanf("%f", &x1);

    printf("digite x2: ");
    scanf("%f", &x2);

    printf("digite x3: ");
    scanf("%f", &x3);

    printf("digite x4: ");
    scanf("%f", &x4);

    printf("digite x5: ");
    scanf("%f", &x5);

    med = (x1 + x2 + x3 + x4 + x5)/5;

    desv = sqrt ((pow((x1-med), 2) + pow((x2-med), 2) + pow((x3-med), 2) + pow((x4-med), 2) + pow((x5-med), 2))/5) ;

    if (x1 > med){
        above+=1;
    }
    if (x2 > med){
        above+=1;
    }
    if (x3 > med){
        above+=1;
    }
    if (x4 > med){
        above+=1;
    }
    if (x5 > med){
        above+=1;
    }

    printf("a média é %f", med);
    printf("\no desvio é %f", desv);
    printf("\na quantidade de número(s) acima da média é %d.", above);

}



