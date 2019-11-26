/*
    Fundamentos Matemáticos para Computação.
    Grafos.
    Richard de Carvalho Borges.
    Thiago Fonsato Alves.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Define um tipo por meido da struct onde é
    armazenado um pergunta e a resposta que
    levara a essa pergunta, e uma variavel
    auxiliar para verificar se existe na
    matriz.
*/
typedef struct {
    char question[100];
    char answer[150];
    int exist;
} quest;

/*
    Define um tipo por meio da struct que
    armazena a matriz.
*/
typedef struct {
    quest array[30][30];
} array;

/*
    Declara as funções.
*/
int mMenu ();
array start ();
void printCharacter ();
void randColor ();

/*
    Função menu que printa o menu inicial
    na tela e as opções 1 e 2 (Começar e
    Sair) e retorna a opção do usuario
    para o Main.
*/
int mMenu () {
    int x;
    system("COLOR 0F");
    printf("   ________________________________________________________________________________________________________ \n");
    printf("  |                                                                                                        |\n");
    printf("  |                                     TRABALHO DE TEORIA DOS GRAFOS!                                     |\n");
    printf("  |                        Alunos: Richard de Carvalho Borges, Thiago Fonsato Alves                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |                                                                                                        |\n");
    printf("  |  Escolha uma opcao:                                                                                    |\n");
    printf("  |  1- Jogar                                                                                              |\n");
    printf("  |  2- Sair                                                                                               |\n");
    printf("  |________________________________________________________________________________________________________|\n");
    do {
        printf("   Resposta: ");
        scanf("%d", &x);
        (x == 1 || x == 2) ? printf("\n   Aguarde") : printf("Resposta invalida\n");
    } while (x != 1 & x != 2);
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    system("cls");
    return x;
}

/*
    Função start que inicializa a matriz
    com as perguntas e as respostas que
    levam a essas perguntas e retorna a
    matriz para o Main.
*/
array start () {
    array a;

    strcpy(a.array[0][1].question, "Voce aborda o padre, o que dizer a ele?");
    strcpy(a.array[0][1].answer, "Conversar com um padre aparentemente autoritario...");
    a.array[0][1].exist = 1;

    strcpy(a.array[0][2].question, "Voce chega a casa de uma dona de casa aparentemente cansada, o que dizer a ela?");
    strcpy(a.array[0][2].answer, "Conversar com uma dona de casa cansada...");
    a.array[0][2].exist = 1;

    strcpy(a.array[0][3].question, "Voce chega proximo ao batalhao do exercito da cidade, o que fazer?");
    strcpy(a.array[0][3].answer, "Procurar entrar em um novo exercito...");
    a.array[0][3].exist = 1;

    strcpy(a.array[0][4].question, "Você chega a taverna da cidade, o que fazer?");
    strcpy(a.array[0][4].answer, "Entrar em uma taverna e beber muito...");
    a.array[0][4].exist = 1;

    strcpy(a.array[1][5].question, "Pergunta 5");
    strcpy(a.array[1][5].answer, "Resposta que vai para pergunta 5");
    a.array[1][5].exist = 1;

    strcpy(a.array[1][6].question, "Pergunta 6");
    strcpy(a.array[1][6].answer, "Resposta que vai para pergunta 6");
    a.array[1][6].exist = 1;

    strcpy(a.array[1][7].question, "Pergunta 7");
    strcpy(a.array[1][7].answer, "Resposta que vai para pergunta 7");
    a.array[1][7].exist = 1;

    strcpy(a.array[1][8].question, "Pergunta 8");
    strcpy(a.array[1][8].answer, "Resposta que vai para pergunta 8");
    a.array[1][8].exist = 1;

    strcpy(a.array[2][9].question, "Pergunta 9");
    strcpy(a.array[2][9].answer, "Resposta que vai para pergunta 9");
    a.array[2][9].exist = 1;

    strcpy(a.array[2][10].question, "Pergunta 10");
    strcpy(a.array[2][10].answer, "Resposta que vai para pergunta 10");
    a.array[2][10].exist = 1;

    strcpy(a.array[2][3].question, "Pergunta 3");
    strcpy(a.array[2][3].answer, "Resposta que vai para pergunta 3");
    a.array[2][3].exist = 1;

    strcpy(a.array[2][11].question, "Pergunta 11");
    strcpy(a.array[2][11].answer, "Resposta que vai para pergunta 11");
    a.array[2][11].exist = 1;

    strcpy(a.array[3][1].question, "Pergunta 1");
    strcpy(a.array[3][1].answer, "Resposta que vai para pergunta 1");
    a.array[3][1].exist = 1;

    strcpy(a.array[3][12].question, "Pergunta 12");
    strcpy(a.array[3][12].answer, "Resposta que vai para pergunta 12");
    a.array[3][12].exist = 1;

    strcpy(a.array[3][13].question, "Pergunta 13");
    strcpy(a.array[3][13].answer, "Resposta que vai para pergunta 13");
    a.array[3][13].exist = 1;

    strcpy(a.array[3][14].question, "Pergunta 14");
    strcpy(a.array[3][14].answer, "Resposta que vai para pergunta 14");
    a.array[3][14].exist = 1;

    return a;
}

/*
    Função printCharacter que printa
    o personagem na tela.
*/
void printCharacter () {
    system("cls");
    randColor ();
    printf("   ________________________________________________________________________________________________________ \n");
    printf("  |                                                                                                        |\n");
    printf("  |                                     ______________________________                                     |\n");
    printf("  |                                    V   _                      _   V                                    |\n");
    printf("  |                                   V   |O|                    |O|   V                                   |\n");
    printf("  |                                  V     -                      -     V                                  |\n");
    printf("  |                                 |                 ()                 |                                 |\n");
    printf("  |                                 |                                    |                                 |\n");
    printf("  |                                 |      (______________________)      |                                 |\n");
    printf("  |                                 |                                    |                                 |\n");
    printf("  |                                 |____________________________________|                                 |\n");
    printf("  |                                                                                                        |\n");
    printf("  |________________________________________________________________________________________________________|\n");
}

/*
    Função randColor que muda a cor de
    fundo e do texto de forma aleatoria.
*/
void randColor () {
    srand(time(NULL));
    int x = 0;
    x = rand() % 8;

    switch (x)
    {
        case 0:
            system("COLOR 07");
            break;
        
        case 1:
            system("COLOR 1C");
            break;

        case 2:
            system("COLOR 92");
            break;
        
        case 3:
            system("COLOR 3F");
            break;

        case 4:
            system("COLOR 5B");
            break;
        
        case 5:
            system("COLOR 86");
            break;

        case 6:
            system("COLOR 4A");
            break;

        case 7:
            system("COLOR DE");
            break;
    }
}