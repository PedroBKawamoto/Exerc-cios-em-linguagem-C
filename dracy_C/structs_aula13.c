//=======STRUCT COMO PARAMETRO DE FUNÇÕES=================
/*Crie uma struct para armazenar a base e a altura e um retângulo. depois, crie
uma função que receba uma variável do tipo struct retângulo e retorne a área
*/

#include <stdio.h>
#include <stdbool.h>


struct retangulo {
    float base;
    float altura;
};

float calcular_area(struct retangulo r){    //r é uma variavel temporaria que vai representar o retangulo
    float area;
    area = r.base * r.altura;
    return area;
}

int main(){
    // s é a struct ORIGINAL que guarda os dados principais na memória
    struct retangulo s = {5, 3};    
    float area;
    
    // Passa uma CÓPIA (clone) de "s" para a função. 
    // A função vai receber esse clone e dar o nome de "r" para ele.
    area = calcular_area(s);        
    
    printf("a base e %f\n", s.base);
    printf("a altura e %f\n", s.altura);
    printf("a area e %f\n", area);
}


//====== STRUCT COMO RETORNO DE FUNÇÕES =========
/*Crie uma struct para armazenar a base e a altura de um retangulo. Implemente uma
função que leia esses valores e retorne a struct preenchida.
*/
struct retangulo{
    float base;
    float altura;
};

float calculo_area(struct retangulo r){  
    float area;
    area = r.base * r.altura;
    return area;
}

struct retangulo ler_retangulo(){
    struct retangulo r; //cria struct local temporaria
    printf("base: ");
    scanf("%f", &r.base);
    printf("altura: ");
    scanf("%f", &r.altura);
    return r;   //retorna a struct local preenchida
}

int main(){
    struct retangulo s;
    float area;

    s = ler_retangulo();    //chama função de leitura e salva struct r retornada em "s"
    area = calculo_area(s); //calcula area usando struct s

    printf("Area: %f\n", area); //imprime a area calculada por meio dos dados da struct "s"
}

//===========TYPEDEF===============
//da um apelido para o tipo de uma variavel
typedef float meu_float;    //cria-se um apelido para o tipo float
int main(){
    meu_float numero = 0.5;
    printf("Valor do numero: %.2f\n", numero);
    return 0;
}


//pode ser usado para abreviar e apoiar a construção de structs
typedef struct pessoa{
    char nome[50];
    int idade;
} pessoa;   //apelido para o tipo "struct pessoa", o apelido aogra é pessoa

int main(){
    pessoa p = {"darcy", 30};
    printf("nome: %s\n", p.nome);
    printf("idade: %d\n", p.idade);
}


//definindo o nome do tipo e o apelido iguais 
typedef struct pessoa{
    char nome[50];
    int idade;
} pessoa;
//declarando variaveis
pessoa pessoa1;
struct pessoa pessoa2;


//definido o nome do tipo e o apelido diferentes
typedef struct dadospessoa{
    char nome[50];
    int idade;
} dados;
//declarando variaveis
dados pessoa1;
struct dadospessoa pessoa2;


//definindo apenas o apelido
typedef struct{
    char nome[50];
    int idade;
} apelido;
//declarando variaveis
apelido pessoa1;

/*crie uma struct capaz de armazenar o nome, massa e volume de uma substância química.
em seguida, implemente uma função que receba essa struct e calcule a densidade da substancia*/
typedef struct {
    char nome[50];
    float massa;
    float volume;
} substancia; //apelido da struct é substancia -> declarando definindo apenas o apelido

float calcular_densidade(substancia s){
    float densidade;
    densidade = s.massa / s.volume;
    return densidade;
}

int main(){
    substancia r;
    float densidade;

    printf("qual o nome?");
    scanf("%49s", r.nome);

    printf("qual a massa?");
    scanf("%49s", r.nome);

    printf("qual o nome?");
    scanf("%49s", r.volume);

    densidade = calcular_densidade(r);

    printf("a densidade e de %f", densidade);

}



//============STRUCTS DENTRO DE STRUCTS =============
/*crie um programa que utilize uma struct para representar um personagem de jogo (nome,
nivel e atributos). atributos deve ser outra struct que armazena forca e defesa do personagem
*/
struct atributos {
    int forca;
    int defesa;
};

struct personagem{
    char nome [50];
    int nivel;
    struct atributos a;
};

int main(){
    struct personagem p = {"Darcy", 10, {15, 8}};
    printf("nome: %s", p.nome);
    printf("nivel: %d", p.nivel);
    printf("forca: %d", p.a.forca); //acessa do mais geral pro mais especifico (personagens, atributos)
    printf("defesa: %d", p.a.defesa);
}

/*considere um cadastro de 5 lojas, em que cada loja possui:
nome, quantidade vendida, preço unitário , endereço (rua, numero, cidade, estado), vetor 
com 4 códigps de produtos.
implemente as funções: 
1- media_faturamewnto() -> retorna a media das lojas, considerando faturmaneto = q_vend * p_unit
2- teste_codigo(int vet[4]) -> retorna 1 se houver uma loja com o mesmo vetor de codigos passados,
ou 0 caso contrário
3- num_lojas_estado(char estado[3]) -> retorna quantas lojas estão localizadas no estado informado
*/
struct endereco{
    char rua [50];
    int numero;
    char cidade [30];
    char estado [30];
};
struct loja {
    char nome [50];
    int quantidade_vendida;
    float preco_unitario;
    struct endereco e;
    int codigos[4];
}

lojas[5] = { 
    {"Loja Azul", 16, 15.56, {"Rua das Flores", 100, "Campinas", "SP"}, {10, 20, 30, 40}}, 
    {"Loja Verde", 25, 8.00, {"Av. Central", 200, "Joao Pessoa", "PB"}, {5, 15, 25, 35}}, 
    {"Loja Sol", 8, 22.30, {"Rua Bahia", 50, "Campina Grande", "PB"}, {11, 22, 33, 44}}, 
    {"Loja Estrela", 30, 12.00, {"Rua A", 98, "Manaus", "AM"}, {7, 14, 21, 28}}, 
    {"Loja Lua", 18, 9.50, {"Rua B", 120, "Pipa", "RN"}, {2, 4, 6, 8}} 
};

media_faturamento(){
    float faturamento = 0;
    float media;
    for (int i = 0; i < 5; i++){
        faturamento += lojas[i].quantidade_vendida * lojas[i].preco_unitario;
    };
    media = faturamento / 5;
    return media;
}


teste_codigo(int vet[4]){
    int iguais = 1;
    for (int i = 0; i < 5; i++){    //acessa lojas[5]
        for (int j = 0; j < 4; j++){    //acessa codigos[4], dentro de cada loja
            if (lojas[i].codigos[j] != vet[j]){    //compara o codigo da posicao j com o codigo do vetor j
                iguais = 0;       //se for diferente, "iguais" reseta (vira 0), se torna falso
            }
        }
        if (iguais == 1){       //se houver uma loja igual, retorna 1
            return 1;
        }
    }
    return 0;       //se nanhuma for igual, retorna 0
}


#include <string.h>
int num_lojas_estado(char estado[3])
{
    int i, cont = 0;
    for (i = 0; i < 5; i++) {
        if (strcmp(lojas[i].e.estado, estado) == 0) {   //compara, vê se lojas[i].e.estado é igual a estado, mas lê-se assim:
            cont++;                                     //se a diferença de um pra outro for 0, aumenta o contador em uma unidade
        } 
    }
    return cont;
}