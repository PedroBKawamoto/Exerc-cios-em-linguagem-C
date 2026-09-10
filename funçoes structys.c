/*RAND - Geração de números aleatórios
    .#include <stdlib.h> --> biblioteca necessária
    .rand() --> função necessária
    .algoritmo interno que gera uma sequência de números inteiros
    .semente --> valor inicial que determina sequência dos números aleatórios
*/

/*TIME - Tempo atual do computador
    #include <time.h> --> biblioteca necessária
    .time(NULL) --> função que retorna quantos seg passaram desde 01/01/1970
    .srand(time(NULL)) --> usa op tempo atual como semente de geração dos num aleatórios
        -chamar apenas uma vez no início do programa   
*/

/*Como limitar intervalos de nppumeros geradores
    .rand()%N --> gera valores de 0 até N-1
    .rand()%6+1 --> gerar numeros de 1 a 6
        - gera tudo de gera até 5, depois adiciona +1 em tudo
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Simule o lançamento de um dado de 6 faces
int main(){
    int dado;
    srand(time(NULL));
    dado = rand() % 6 + 1;
    printf("Valor do dado = %d\n", dado);
}

/*Crie uma função que simule o lançamento de dois dados,
retorne a soma dos dois e imprima a soma no main*/
int somar_dois_dados(){
    int dado1, dado2, soma;
    dado1 = rand() % 6 + 1;
    printf("o valor do dado1 e %d\n", dado1);
    dado2 = rand() % 6 + 1;
    printf("o valor do dado2 e %d\n", dado2);
    soma = dado1 + dado2;
    return soma;
}

int main(){
    srand(time(NULL));
    int soma_dados;
    soma_dados = somar_dois_dados();
    printf("O valor da dsoma é %d\n", soma_dados);
}

/*STRUCTS
    .Tipo de variável que permite agrupar dados diferentes em uma unica variavel
    .struct nome_struct {
        tipo campo1;
        tipo campo2;
        };
*/

//definindo uma struct chamada livro

struct livro{
    char titulo[50];
    char autor[50];
    int isbn;
    int edicao;
};



//criacao da variavel do tipo struct
//struct nome_da struct nome_da_variavel;

struct livro{   //livro e o nome da struct que esta sendo criada
    char titulo[50];
    char autor[50];
    int isbn;
    int edicao;
}livro1;    //livro1 e uma variavel do tipo struct livro




//struct define um tipo reutilizavel: basta usá-lo para 
//criar novas variáveis. O tipo completo é definido uma
//unica vez no inicio

struct livro{
    char titulo[50];
    char autor[50];
    int isbn;
    int edicao;
}livro1; livro2; livro3;   //pode colocar assim ou assim: 
                                                            

struct livro{
    char titulo[50];
    char autor[50];
    int isbn;
    int edicao;
};
struct livro livro1;
struct livro livro2;
struct livro livro3;




//declarando e atribuindo valor/ acessando os campos
struct caderno{
    char titulo[50];
    char autor[50];
    int isbn;
    int edicao;
};
//criado e declarado fora do main - variavel global
struct caderno caderno1 = {"O Hobbit", "J.R.R. Tolkien", 987654321, 2};

int main(){
//criado e declarado dentro do main
struct caderno caderno2;
caderno2.isbn = 123456789;
caderno2.edicao = 1;
strcpy(caderno2.titulo, "O Senhor dos Anéis");  //sempre quando mexer com strings, usar strcpy
strcpy(caderno2.autor, "J.R.R. Tolkien");

caderno1.isbn = 111222333;  //se eu quiser mudar algum valor de caderno1 (fora do main), 
}                       //tem que ser dentro de alguma função, mas nao necessariamente na main



//leitura por scanf
struct caderno caderno3;    //posso criar caderno3  fora do main, mas na hora                 
int main(){                  //de preencher, preciso colocar dentro de alguma função
printf("qual o titulo do caderno 3:");
scanf("%49s", caderno3.titulo);}



//2 formas de declaração
//fora do main, pode ser usada por: main, outras funções, o programa todo, (VARIAVEL GLOBAL)
struct aluno{
    char nome[50];
    int idade;
};

int main(){
    struct aluno a;
    a.idade = 20;   //idade do aluno a
    printf("%d\n", a.idade);
}

//dentro do main: só existe dentro do main
int main(){         //está especificado "main", mas funciona para qualquer função
    struct aluno {
        char nome[50];
        int idade;
    };

    struct aluno a;
    a.idade = 20;
    printf("%d\n", a.idade);
}



//vetor de structs
struct usuario{         //cada usuario cadastrado terá um molde com 3 informações
    char userID[20];
    char senha[20];
    int num_acessos;
} usuario1;             //cria-se uma variavel isolada "usuario1" que segue tal molde

struct usuario tabelausuario[20];   //20 usuarios (0 até19) com as infos dentro dessa tabela
int main(){
    printf("user id: ");
    scanf("%s", tabelausuario[10].userID);
    printf("senha: ");
    scanf("%s", tabelausuario[10].senha);
    tabelausuario[10].num_acessos = 0;
}



/*utilize uma struct para representar um aluno, cada aluno deve possuir nome e nota.
crie um vetor de 3 alunos, leia e armazene seus dados (nome e nota) na struct. Depoi da
leitura, mostre a lista de alunos, exibindo nome e nota de cada um.
*/
struct Aluno{
    char nome[30];
    float nota;
};

int main(){
    struct Aluno turma [3]; //cria-se vetor chamado turma com 3 posiç., cada uma tem nome e nota (struct Aluno)
    for (int i = 0; i < 3; i++){
        printf("digite o nome do aluno %d: ", i+1);
        scanf("%29s", turma[i].nome);   //string (nao tem &), o .nome acessa o nome do aluno i

        printf("digite a nota do aluno %d: ", i+1);
        scanf("%f", &turma[i].nota);    //float (tem &), o .nota acessa a nota do aluno i
    }

    printf("\n--- Turma ---\n");
    for (int i = 0; i < 3; i++){    
        printf("%s - %.1f\n", turma[i].nome, turma[i].nota);
    }   //%s para printar o nome (so precisa limitar na hora de escanear, nesse caso), e %.1f para printar a turma
}


/*defina uma struct para armazenar os dados de um aluno: nome, ra, nota 1 e 2, e situaç. do aluno.
crie uma função que calcule a media de um aluno.
no main, decvlare um vetor com 5 alunos (vetor de structs), leia os dados de cada aluno,
calcule a media usando a função, imprima a situação (aprovado se media >= 5, reprovado caso contrário)
*/
#include <stdbool.h>
#define tam 5
struct aluno{
    char nome [50];
    int ra;
    float n1;
    float n2;
    bool situacao;
};

float calcularmedia (float nota1, float nota2){
    float media;
    media = (nota1 + nota2) / 2;
    return media;
}

int main(){
    struct aluno dados [tam];
    float media;
    for (int i = 0; i < tam; i++){
        printf("nome do aluno %d: ", i+1);
        scanf("%49s", dados[i].nome);

        printf("ra do aluno %d: ", i+1);
        scanf("%d", &dados[i].ra);

        printf("nota 1 do aluno %d: ", i+1);
        scanf("%f", &dados[i].n1);

        printf("nota 2 do aluno %d: ", i+1);
        scanf("%f", &dados[i].n2);

        media = calcularmedia(dados[i].n1, dados[i].n2);
        if (media>=5){
            dados[i].situacao = true;
        }
        else{
            dados[i].situacao = false;
        }
    }
    printf("\n--- Dados da turma ---");
    for (int i = 0; i < tam; i++){
        printf("\naluno %d", i+1);
        printf("Nome: %s\n", dados[i].nome);
        printf("RA: %d\n", dados[i].ra);
        printf("Nota 1: %.2f\n", dados[i].n1);
        printf("Nota 2: %.2f\n", dados[i].n2);
        if (dados[i].situacao == true){
            printf("situacao: aprovado\n");
        }
        else{
            printf("situacao: reprovado");
        }
    }
}









