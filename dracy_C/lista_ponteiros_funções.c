/*
Fac¸ a uma func¸ ˜ao que receba dois n ´umeros inteiros, a e b. A func¸ ˜ao deve incrementar a e
decrementar b. Utilize o prot ´otipo:
void inc_dec(int *a, int *b);
Fac¸ a tamb ´em um programa principal (main) que leia os dois valores, chame a fun c¸ ˜ao e mostre
os valores antes e depois da chamada.*/

void inc_dec(int *a, int *b){   //* para indicar que recebe ponteiros (enderecos)
    (*a)++;     //conteudo aumenta em 1 
    (*b)--;     //conteudo diminui em 1
}               //obs: sempre que incrementar conteudo, colocar em parenteses

int main(){
    int a, b;
    printf("digite a: \n");
    scanf("%d", &a);
    printf("a: %d\n", a);
    printf("digite b: \n");
    scanf("%d", &b);
    printf("b: %d\n", b);

    inc_dec(&a, &b);    //& envia o endereco de memoria para os pointers, os quais incrementarão a e decrementarão b
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

//==============================================================================================

/*
Escreva uma func¸ ˜ao que troque os valores de duas vari ´aveis do tipo float. Utilize o prot ´otipo:
void troca_valor(float *x, float *y);
Fac¸ a um programa (main) que leia dois valores, mostre-os na tela, fa c¸ a a troca usando a func¸ ˜ao
e mostre os valores novamente.*/
void troca_valor(float *x, float *y){
    float aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    float a, b;
    printf("digite a: \n");
    scanf("%f", &a);
    printf("a: %.2f\n", a);
    printf("digite b: \n");
    scanf("%f", &b);
    printf("b: %.2f\n\n", b);
    
    troca_valor(&a, &b);
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);
}

//==============================================================================================

/*
Fac¸ a uma func¸ ˜ao que calcule o per´ımetro e a ´area de um c´ırculo a partir do raio. Utilize o
prot ´otipo:
void calcula_circulo(float raio, float *pPerimetro, float *pArea);
Considere:
per´ımetro = 2πr
´area = πr2
Use 3.14159 para o valor de π.*/

void calcula_circulo(float raio, float *pPerimetro, float *pArea){
    *pPerimetro = 2 * 3.14159 * raio;
    *pArea = 3.14159 * raio * raio;
}

//obs: O parametro raio e de entrada. Ja pPerimetro e pArea sao parametros de saida

int main(){
    float r;
    float perimetro, area;
    printf("raio: \n");
    scanf("%f", &r);
    calcula_circulo(r, &perimetro, &area);
    printf("perimetro: %.2f\n", perimetro);
    printf("area: %.2f\n", area);
}


/*
Fa c¸ a uma fun c¸ ˜ao que receba o total de minutos transcorridos desde a meia-noite e determine a
hora e o minuto correspondentes. Utilize o prot ´otipo:
void calcula_hora(int totalMinutos, int *pHora, int *pMinuto);
Fac¸ a um programa (main) que leia o total de minutos, utilize a func¸ ˜ao e imprima o hor ´ario no
formato Hora atual: 14:35.*/

void calcula_hora(int totalMinutos, int *pHora, int *pMinuto){
    *pHora = totalMinutos / 60;
    *pMinuto = totalMinutos % 60;
}

int main(){
    int total;
    printf("total minutos: ");
    scanf("%d", &total);
    int hora, minuto;
    int *p1 = &hora;
    int *p2 = &minuto;

    calcula_hora(total, p1, p2);
    printf("%d:%d", *p1, *p2);
}



/*
Escreva uma func¸ ˜ao que receba um vetor de inteiros e sua capacidade e determine o menor e
o maior valor armazenados no vetor. Utilize o prot ´otipo:
void max_min(int vet[], int tam, int *pMin, int *pMax);
Fa c¸ a um programa principal (main) com um vetor de pelo menos 6 posi c¸ ˜oes, chame a fun c¸ ˜ao e
mostre os dois resultados.*/

void max_min(int vet[], int tam, int *pMin, int *pMax){
    for (int i = 0; i < tam; i++){
        if (i == 0){
            *pMin = vet[0];
            *pMax = vet[0];
        }

        if (vet[i] < *pMin){
            *pMin = vet[i];
        }

        if (vet[i] > *pMax){
            *pMax = vet[i];
        }
    }
}

int main(){
    int vetor[6] = {10,5,20,15,30,25,};
    int tam = 6;
    int pMin, pMax;
    max_min(vetor, tam, &pMin, &pMax);
    printf("minimo: %d\n", pMin);
    printf("maximo: %d\n", pMax);
}



/*
Escreva uma func¸ ˜ao que receba um vetor do tipo float e sua capacidade e determine:
• o maior valor do vetor;
• a posic¸ ˜ao em que esse maior valor se encontra.
Utilize o prot ´otipo:
void max_vetor(float vet[], int tam, float *pMax, int *pIndice);*/
void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
    for (int i = 0; i < tam; i++){
        if(i == 0){
            *pMax = vet[0];
            *pIndice = i;
        }
        if(vet[i] > *pMax){
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}

int main(){
    float vet[6] = {10, 5, 20, 15, 30, 25};
    int tam = 6;
    int pMax, pIndice;
}



/*
Um ve´ıculo percorreu uma dist ˆancia em determinado intervalo de tempo. Fa c¸ a uma func¸ ˜ao que
receba a dist ˆancia e o tempo como par ˆametros de entrada e calcule a velocidade m ´edia e uma
acelerac¸ ˜ao m ´edia simplificada, dada por velocidade m ´edia dividida pelo tempo.
Os dois resultados devem ser devolvidos utilizando ponteiros.
Utilize o prot ´otipo:
void calcular_movimento(float distancia, float tempo,
float *velocidade, float *aceleracao);*/

void calcular_movimento(float distancia, float tempo,
float *velocidade, float *aceleracao){
    *velocidade = distancia / tempo;
    *aceleracao = *velocidade / tempo;
}

int main(){
    float dist, tempo, veloc, acele;

    printf("distancia: ");
    scanf("%f", &dist);
    float *p_veloc = &veloc;

    printf("tempo: ");
    scanf("%f", &tempo);
    float *p_acele = &acele;

    calcular_movimento(dist, tempo, p_veloc, p_acele);

    printf("aceleracao: %.2f\n", *p_acele);
    printf("velocidade: %.2f\n", *p_veloc);
}





