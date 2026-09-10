//leia 5 notas de 3 alunos (matriz 5x3). e mostre a media de cada aluno
int main(){
    float notas[5][3];
    for (int i = 0; i < 5; i++){
        printf("\nALUNO %d\n", i+1);
        for (int j = 0; j < 3; j++){
            printf("digite a nota %d: ",j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        float soma = 0, media;
        for (int j = 0; j < 3; j++){
            soma+=notas[i][j];       
        }
        media = soma / 3;
        printf("\na media do aluno %d e %f", i, media);
    }
}


//gere e imprima uma matriz identidade 5x5
int main(){
    int identidade[5][5];
    for (int i =0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i==j){
                identidade[i][j] = 1;
            }
            else{
                identidade[i][j] = 0;
            }
            printf("\n%d", identidade [i][j]);
        }        
    }
}


//preencha uma matriz 2x3 e conte quantos elementos nao pertence ao intervalo de 5 a 15
int main(){
    int identidade[2][3], cont = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("digite o elemento: ");
            scanf("%d", &identidade[i][j]);
            if (identidade[i][j] < 5 || identidade[i][j] > 15){
                cont++;
            }
        }
    }
    printf("o numero de elementos fora do intervalo e %d", cont);
}



//preencha 2 matrizes 3x8, calcule: a soma das duas, resultando em uma terceira matriz,
//e a diferença das duas matrizes, resultando em uma outra matriz 3x8
int main(){
    int a[3][8], b[3][8];
    int sum[3][8], dif[3][8];

    printf("MATRIZ A");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j<8; j++){
            printf("digite o elemento: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");
    printf("MATRIZ B");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 8; j++){
            printf("digite o elemento: ");
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n");
    printf("DIFRENCA");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 8; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d", sum[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    printf("SOMA");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 8; j++){
            dif[i][j] = a[i][j] - b[i][j];
            printf("%d", dif[i][j]);
            printf("\n");
        }
    }   
}