#include <stdio.h>
/*
Em um projeto simples de saneamento, deseja-se calcular propriedades do fluxo de ´agua em
um reservat ´orio cil´ındrico. Fac¸a um programa em C que leia:
• o raio do reservat ´orio r, em metros;
• a altura da coluna de ´agua h, em metros.
Implemente uma ´unica fun c¸ ˜ao que calcule e atualize, por meio de par ˆametros de sa´ıda
(passagem por refer ˆencia), os seguintes valores:
• a ´area lateral do reservat ´orio Alateral;
• a press ˜ao no fundo do reservat ´orio P .
Utilize as f ´ormulas:
Alateral = 2πrh
P = ρgh
Considere:
• π = 3.14159;
• ρ = 1000 kg/m3 (densidade da ´agua);
• g = 9.81 m/s2.
Ao final, mostre a ´area lateral e a press ˜ao calculada.*/
#define PI 3.14159
#define rho 1000
#define g 9.81

void exc1(float raio, float altura, float *al, float *p){
    *al = 2* PI* raio* altura;
    *p = rho* g* altura;
}

int main(){
    float raio, altura;
    printf("raio: ");
    scanf("%f", &raio);

    printf("altura: ");
    scanf("%f", &altura);

    float al, p;

    exc1(raio, altura, &al, &p);

    printf("area lateral: %f\n", al);
    printf("pressao: %f\n", p);
}




/*
2. Cadastro de investimentos
Considere o cadastro de 4 investimentos, em que cada investimento possui:
• nome do investimento;
• valor aplicado;
• taxa de rendimento anual;
• instituic¸ ˜ao → nome e tipo;
• vetor com os valores de rendimento obtidos, em reais, nos ´ultimos 3 meses.
Considere as structs e o vetor j ´a preenchido abaixo:*/

struct tipo_instituicao {
char nome[30];
char tipo[20];
};
struct tipo_investimento {
char nome[30];
float valor_aplicado;
float taxa_rendimento;
struct tipo_instituicao instituicao;    //struct dentro de struct  
float rendimentos[3];
} investimentos[4] =
{
{"Tesouro Selic", 1500.00, 13.25, {"Banco Federal", "Banco"},
{14.50, 15.20, 14.80}},
{"CDB Premium", 3200.50, 12.10, {"InvestMais", "Corretora"},
{30.10, 31.50, 29.90}},
{"LCI Azul", 2800.75, 10.80, {"Banco Azul", "Banco"},
{22.40, 21.80, 23.10}},
{"Fundo Alpha", 5000.00, 14.50, {"Alpha Invest", "Gestora"},
{48.00, 50.25, 47.90}}
};

/*
Implemente as func¸ ˜oes:
a) media aplicacoes()
Retorna a m ´edia dos valores aplicados nos investimentos.
b) num tipo instituicao(char tipo[20])
Retorna quantos investimentos pertencem ao tipo de instituic¸ ˜ao informado.
c) conta investimentos letra(char letra)
Retorna quantos investimentos possuem o nome iniciado pela letra informada.
d) soma rendimentos(char nome[30])
Recebe o nome de um investimento e retorna a soma dos rendimentos dos ´ultimos 3
meses desse investimento.
Caso o investimento n ˜ao seja encontrado, retorne -1.*/

float media_aplicacoes(){
    float soma = 0.0;
    for (int i = 0; i < 4; i++){
        soma += investimentos[i].valor_aplicado;
    }
    float media = soma / 4;
    return media;
}

#include <string.h>

int num_tipo_instituicao(char tipo [20]){
    int cont = 0;
    for (int i = 0; i < 4; i++){
        if (strcmp(investimentos[i].instituicao.tipo, tipo) == 0){
            cont++;
        }
    }
    return cont;
}

int conta_investimentos(char letra){
    int cont = 0;
    for (int i = 0; i < 4; i++){
        if(investimentos[i].nome[0] == letra){
            cont++;
        }
    }
    return cont;
}

float soma_rendimentos(char nome [30]){
    float soma = 0;
    for(int i = 0; i < 4; i++){
        if (strcmp(investimentos[i].nome, nome) ==0){
            for(int j = 0; j<3; j++){
                soma += investimentos[i].rendimentos[j];
                }
            }return soma;
        }
    return -1;
    }
 
int main(){
    float resultado = media_aplicacoes();
    printf("media_aplicacoes: %f\n",resultado);

    char tipo[20];
    printf("tipo: ");
    scanf(" %19s", tipo);
    int resultado2 = num_tipo_instituicao(tipo);
    printf("tipo_instituicao: %d\n", resultado2);

    char letra;
    printf("letra: ");
    scanf(" %c", &letra);
    int resultado3 = conta_investimentos(letra);
    printf("conta_investimentos: %d\n", resultado3);

    char nome[30];
    printf("nome: ");
    scanf(" %29s", nome);
    float resultado4 = soma_rendimentos(nome); 
    printf("soma_rendimentos: %d\n", resultado4);
}




/*
Um drone de entrega inicia o trajeto com 100% de bateria. Considere o programa principal
abaixo:*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int bateria = 100;
int consumo;
printf("Bateria inicial: %d%%\n", bateria);
srand(time(NULL));
while (bateria > 0) {
atualizarBateria(&bateria, &consumo);
printf("Consumo no trecho: %d%%\n", consumo);
printf("Bateria: %d%%\n", bateria);
}
return 0;
}
/*
Implemente a func¸ ˜ao atualizarBateria(...) chamada no main() para simular o consumo
de bateria durante um trecho do voo. Nesta funcao:
• o consumo deve ser gerado aleatoriamente entre 10 e 35;
• O valor da bateria do drone deve ser atualizado;
• caso a bateria fique negativa, ela deve ser ajustada para 0.*/

void atualizarBateria(int *bateria, int *consumo){
    *consumo = (rand()%26) + 10; //(rand() % B - A + 1) + A
    *bateria = *bateria - *consumo;
    if (*bateria < 0) {
        *bateria = 0;
    }
}




//Considere o programa abaixo:
#include <stdio.h>
int main() {
int energia = 40;
int bonus = 10;
int *p = &energia;
int *q = &bonus;
*p = *p + *q;   //energia = 50
q = p;  //q passa a pontar para energia
*q = *q - 15;   //energia = 35
bonus = bonus + 5;  //bonus = 15
printf("energia = %d\n", energia);
printf("bonus = %d\n", bonus);
return 0;
}
/*Responda, utilizando um teste de mesa, qual e o valor impresso para energia e para bonus?
O que fica armazenado nos ponteiros p e q ao final do programa?*/
//bonus = 15
//energia = 35
//p -> &energia
//q -> &energia




//Considere o c ´odigo:
#include <stdio.h>
void alterar(int *x) {
*x = *x + 10;   //conteudo apontado por x soma + 10
}
int main() {
int a = 5;
alterar(a); //faltou &
printf("%d\n", a);
return 0;
}
/*
O valor impresso ser ´a:
A) o programa executa normalmente, mas o valor de a permanece igual a 5.
B) o valor de 15
C) enderec¸o de a
D) erro de compilac¸ ˜ao   
E) o valor apontado pelo ponteiro x deslocado em 10*4 bytes.

//CORRETA: D-> erro de compilação -> a funcao pede um endereco ou ponteiro como  atributo
*/




//6. Considere o c ´odigo:
#include <stdio.h>
int main() {
int x = 10;
int *p = &x;    //ponteiro p aponta para endereco de x
*p = *p + 5;    //conteudo do endereco = 15
printf("%p\n", &x); //sera impresso o endereco de x
return 0;
}
/*
O valor impresso sera:
A) enderec¸o de p
B) erro de compilacao
C) 15
D) enderec¸o armazenado em p    
E) o valor apontado pelo ponteiro p deslocado em 5*4 bytes.

//CORRETA: D-> enderec¸o armazenado em p 
*/




/*
7. Sobre ponteiros em C, ´e incorreto afirmar que:
A) Uma func¸ ˜ao pode alterar o valor de uma vari ´avel externa a ela se receber o enderec¸ o dessa
vari ´avel.
B) Ponteiros podem ser usados com vari ´aveis de qualquer tipo.
C) Um ponteiro armazena um enderec¸o de mem ´oria, que pode ser obtido com o operador &.
D) Ponteiros podem ser modificados para apontar para diferentes enderec¸os.
E) Ao utilizar um vetor como par ˆametro de uma fun c¸ ˜ao, ´e disponibilizada `a func¸ ˜ao uma c ´opia
do seu primeiro elemento.

INCORRETA: E -> vetor é convertido automaticamente em um ponteiro que aponta para o endereço de memória do primeiro elemento (&vetor[0])
*/




//8. Considere o c ´odigo:
#include <stdio.h>
typedef struct {
char nome[20];
float nota1;
float nota2;
} Aluno;

float calcularMedia(Aluno a) {
return (a.nota1 + a.nota2) / 2.0;
}

int main() {
Aluno turma[3] = {
{"Ana", 10.0, 5.0},
{"Bruno", 6.0, 5.0},
{"Carla", 9.0, 8.0}
};
int maior = 0;
for (int i = 1; i < 3; i++) {
if (calcularMedia(turma[i]) >
calcularMedia(turma[maior])) {
maior = i;
}
}
printf("%s %.1f\n",
turma[maior].nome,
calcularMedia(turma[maior]));
return 0;
}
/*
O programa:
A) imprimir ´a ”Ana 7.5”
B) imprimir ´a ”Ana 10.0”
C) Apresentar ´a erro de compilac¸ ˜ao
D) imprimir ´a ”Carla 8.5”
E) imprimir ´a ”Carla 9.0”

//CORRETA: D -> imprimir "Carla 8.5"*/