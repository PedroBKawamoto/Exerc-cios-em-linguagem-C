#include <stdio.h>

//1

int main() {
    float n1, n2, media;
    printf("entre com a nota 1: ");
    scanf("%f", &n1);
    printf("entre com a nota 2: ");
    scanf("%f", &n2);
    media = ((2*n1) + (3*n2)) / 5;
    printf("a média é %f", media);
    return 0;
}

//4

int main() {
    float B, b, h, a;
    printf("qual a base maior? ");
    scanf("%f", &B);
    printf("qual a base menor? ");
    scanf("%f", &b);
    printf("qual a altura? ");
    scanf("%f", &h);
    a = ((B + b) * h) / 2;
    printf("a área é igual a %f", a);
    return 0;
}

//7

int main () {
    float f, c;
    printf("qual a temperatura em fahrenheit? ");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("a temperatura em celsius é %f", c);
    return 0;
}

//10

#include <math.h>
int main() {
    float c1, c2, h;
    printf("qual o cateto 1? ");
    scanf("%f", &c1);
    printf("qual o cateto 2? ");
    scanf("%f", &c2);
    h = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("a hipotenusa é %f", h);
    return 0;

}

//13 

int main() {
    int n, d;
    printf("qual o número de lados do polígono? ");
    scanf("%d", &n);
    d = (n * (n - 3)) / 2;
    printf("o número de diagonais é %d", d);
    return 0;
}

//16

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, g, a1, b1, g1;
    printf("qual o alfa? ");
    scanf("%d", &a);
    printf("qual o beta? ");
    scanf("%d", &b);
    printf("qual o gama? ");
    scanf("%d", &g);
    printf("antes: %d, %d, %d", a, b, g);
    b1 = a;
    g1 = b;
    a1 = g;
    printf("\ndepois: %d, %d, %d", a1, b1, g1);
    return 0;
}

//19

int main() {
    float sal, m1, m2, res;
    printf("qual o salário?");
    scanf("%f", &sal);
    printf("qual o valor da multa 1?");
    scanf("%f", &m1);
    printf("qual o valor da multa 2?");
    scanf("%f", &m2);
    res = sal - ((m1 * 1.02) +(m2 * 1.02));
    printf("o valor restante é de: %f.", res);
    return 0;
}