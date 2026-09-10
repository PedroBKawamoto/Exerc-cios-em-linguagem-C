#include <stdio.h>

//1
int main(){
    int energia, estabilidade, codigo;
    printf("qual a energia: ");
    scanf("%d", &energia);

    printf("qual a estabilidade: ");
    scanf("%d", &estabilidade);

    printf("qual o codigo: ");
    scanf("%d", &codigo);

    if ((energia >= 70 && energia <= 120) && (estabilidade > 80) && (codigo == 1 || codigo == 11)){
        printf("PORTAL ABERTO");
        }
    else{
        printf("PORTAL FECHADO");
        }
}


//2
int main(){
    int v[5] = {2, 4, 6, 8, 10};
    int soma = 0;
    int bonus = 0;
    for (int i = 0; i<5; i++){      //o erro estava no i<=5, que deveria ser i<5
        if (v[i] % 4 == 0){
            soma+=v[i];
            bonus += 2;
        }
    }
    int placar = soma + bonus;

    printf("%d %d %d\n", soma, bonus, placar);
    return 0;
}

//A --> o erro esta no for, ao inves de i<=5, era pra ser i<5
//o vetor v tem 5 elementos, 0 ate 4. se usar <=, o loop acontecera 6 vezes
//pode dar erro, pois uma sexta iteração nao existe no vetor v[5]

//B --> placar seria 12 + 4 = bonus


//3
int main(){
    int energia = 100;
    int eventos[12] = {1, 3, 2, 9, 1, 2, 3, 2, 1, 3, 2, 1};
    int q = 0;
    for (int i = 0; i<12; i++){     
        if (eventos[i] == 1){           //switch case tambem funcionria,
            energia -= 15;              //pois so funciona com int ou char
            q++;
        }
        else if (eventos[i] ==2){
            energia -=30;
            q++;
        }
        else if(eventos[i] == 3){
            energia +=10;
        }
        else{
            printf("evento invalido");
        }
        if (energia<=0){
            printf("o programa foi encerrado por falta de energia\n");
            break;
        }
    }
    printf("energia: %d\n", energia);
    printf("quantidade de procedimentos: %d\n", q);
    printf("o programa foi encerrado");

}
//o programa encerrará por falta de energia no indice 7.


//4
int main(){
    int setores = 50;
    int cont = 0;
    for (int i=1; i<=50; i++){
        if (i % 8 == 0){
            cont++;
        }
        if (i - cont == 20){
            printf("20 setores válidos foram confirmados, encerrando o programa...");
            break;
        }
    }
}


//5
int main(){
    int p[3][4];
    int totalmaq;
    int totalper;
    int total = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("digite a producao da maquina %d no periodo %d", i, j);
            scanf("%d", &p[i][j]);      //preenchera todos os periodos por maquina
        }
    }

    //loop para somar o total de pecas de cada maquina
    for (int i = 0; i < 3; i++){
        totalmaq = 0;    //zera antes de ir para a proxima maquina
        for (int j = 0; j < 4; j++){
            totalmaq += p[i][j];    //percorre todos os periodos da maquina, e so depois vai pra prox
        }
        printf("maquina %d: %d pecas\n", i, totalmaq);  //print fora do segundo for. print a cada vez que muda de maquina
    }

    //loop para somar o total de pecas de cada periodo
    for (int j = 0; j < 4; j++){
        totalper = 0;          //zera antes de ir pro prox periodo
        for (int i = 0; i < 3; i++){
            totalper+=p[i][j];  //percorre todas as maquinas por periodo, e depois vai pro prox
        }
            printf("periodo %d: %d pecas", j, totalper);    //print fora do segundo for. a cada vez que muda de periodo
    }

    //loop para somar o total da fabrica
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            total+=p[i][j];     //no total geral, nao zera o valor, e a soma de tudo
        }
    }
    printf("a producao total da fabrica foi de %d", total);     //print fora dos dois for, pois so tem um, nao repete

}