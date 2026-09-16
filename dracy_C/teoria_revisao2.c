//==============FUNCAO RAND==============


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//gere um consumo de bateria aleatório, entre 10 e 35
int main(){
    srand(time(NULL));  //srand(time(NULL)) -> gera a semente para aleatorizar os numeros
    int consumo_bateria;
    consumo_bateria = rand()%26 + 10;   //(rand() % (B - A) + 1) + A -> no caso, A = 10 e B = 35
}



//==============STRUCTS==================


/*crie uma struct capaz de armazenar o nome, massa e volume de uma substância química.
em seguida, implemente uma função que receba essa struct e calcule a densidade da substancia*/

typedef struct {    //criar com typedef, colocando o apelido no final
    char nome[50];
    float massa;
    float volume;
} substancia; //apelido da struct é substancia -> declarando definindo apenas o apelido

float calcular_densidade(substancia s){    //parametro -> s é a variavel que recebera a copia da struct substancia
    float densidade;
    densidade = s.massa / s.volume;     //coloca o "nome da variavel"."item da struct" para acessar o valor
    return densidade;
}

int main(){
    substancia r;   //variavel r que copia substancia
    float densidade;

    printf("qual o nome?");
    scanf("%49s", r.nome);  //preenche o campo nome da struct r

    printf("qual a massa?");
    scanf("%f", &r.massa);  //preenche o campo massa

    printf("qual o volume?");
    scanf("%f", &r.volume); //preenche o campo volume

    densidade = calcular_densidade(r);  //calcula densidade com base nos dados da variavel r

    printf("a densidade e de %f", densidade);

}



/*considere um cadastro de 5 lojas, em que cada loja possui:
nome, quantidade vendida, preço unitário , endereço (rua, numero, cidade, estado), vetor 
com 4 códigps de produtos.
implemente as funções: 
1- media_faturamento() -> retorna a media das lojas, considerando faturmaneto = q_vend * p_unit
2- teste_codigo(int vet[4]) -> retorna 1 se houver uma loja com o mesmo vetor de codigos passados,
ou 0 caso contrário
3- num_lojas_estado(char estado[3]) -> retorna quantas lojas estão localizadas no estado informado
*/

struct endereco{
    char rua [30];
    int numero;
    char cidade [30];
    char estado [3];
};

struct loja{
    char nome [30];
    int q_vendida;
    float preco_unit;
    struct endereco end;
    int codigos [4];
};

struct loja lojas_declaradas[5] = {
    {"Loja Azul", 16, 15.56, {"Rua das Flores", 100, "Campinas", "SP"}, {10, 20, 30, 40}}, 
    {"Loja Verde", 25, 8.00, {"Av. Central", 200, "Joao Pessoa", "PB"}, {5, 15, 25, 35}}, 
    {"Loja Sol", 8, 22.30, {"Rua Bahia", 50, "Campina Grande", "PB"}, {11, 22, 33, 44}}, 
    {"Loja Estrela", 30, 12.00, {"Rua A", 98, "Manaus", "AM"}, {7, 14, 21, 28}}, 
    {"Loja Lua", 18, 9.50, {"Rua B", 120, "Pipa", "RN"}, {2, 4, 6, 8}} 
};

struct loja lojas[5];   //se quisesse preencher a mão, faria assim
void cadastrar_lojas(){
    for (int i = 0; i < 5; i++){
        printf("nome: ");
        scanf(" %29s", lojas[i].nome);

        printf("q_vendida: ");
        scanf("%d", &lojas[i].q_vendida);

        printf("preco unitario: ");
        scanf("%f", &lojas[i].preco_unit);

        printf("rua: ");
        scanf(" %29s", lojas[i].end.rua);

        printf("numero: ");
        scanf("%d", &lojas[i].end.numero);

        printf("cidade: ");
        scanf(" %29s", lojas[i].end.cidade);

        printf("estado: ");
        scanf(" %2s", lojas[i].end.estado);

        for (int j = 0; j < 4; j++){
            printf("codigo: ");
            scanf("%d", &lojas[i].codigos[j]);
        }
    }
}


//media_faturamento() -> retorna a media das lojas, considerando faturmaneto = q_vend * p_unit
float media_faturamento(){
    float faturamento = 0, media;
    for (int i = 0; i < 5; i++){
        faturamento += lojas_declaradas[i].q_vendida * lojas_declaradas[i].preco_unit;
    }
    media = faturamento / 5.0;
    return media;
}


//teste_codigo(int vet[4]) -> retorna 1 se houver uma loja com o mesmo vetor de codigos passados, ou 0 caso contrário
int teste_codigo(int vet[4]){
    int cont = 0;
    for(int i = 0; i < 5; i++){
        cont = 0;
        for(int j = 0; j < 4; j++){
            if(lojas_declaradas[i].codigos[j] == vet[j]){
                cont++;
            }
        }
        if (cont == 4){
            return 1;
        }
    }
    return 0;
}


//num_lojas_estado(char estado[3]) -> retorna quantas lojas estão localizadas no estado informado
int num_lojas_estado(char estado[3]){
    int cont = 0;
    for (int i = 0; i < 5; i++){
        if (strcmp(lojas_declaradas[i].end.estado, estado) ==0 ){
            cont++;
        }
    }
    return cont;
}


//===============PONTEIROS + RAND====================
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
srand(time(NULL));  //srand(time(NULL)) -> gera a semente para aleatorizar os numeros
while (bateria > 0) {
atualizarBateria(&bateria, &consumo);
printf("Consumo no trecho: %d%%\n", consumo);
printf("Bateria: %d%%\n", bateria);
}
return 0;
}
/*
Implemente a funcao atualizarBateria(...) chamada no main() para simular o consumo
de bateria durante um trecho do voo. Nesta funcao:
• o consumo deve ser gerado aleatoriamente entre 10 e 35;
• O valor da bateria do drone deve ser atualizado;
• caso a bateria fique negativa, ela deve ser ajustada para 0.*/

void atualizarBateria(int *bateria, int *consumo){
    *consumo = rand()%26 + 10; //(rand() % (B - A) + 1) + A -> no caso, A = 10 e B = 35
    *bateria = *bateria - *consumo;
    if (*bateria < 0) {
        *bateria = 0;
    }
}


