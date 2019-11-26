/*
    Fundamentos Matemáticos para Computação
    Grafos
    Richard de Carvalho Borges
    Thiago Fonsato Alves
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/*
    Principal função do programa.
*/
main () {
    /*
        Declaração das variaves.
    */
    int a = 0, x = 1;
    int v = 0, u = 0;
    int fim = 0;
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
    array graph;

    /*
        Inicializa a variavel graph com
        os dados na função start.
    */
    graph = start();

    /*
        Printa o menu inicial na tela e
        recebe a opção escolhida pelo
        usuario.
        Se a variavel receber 1 o jogo
        iniciara, se for 0 o programa
        fecha.
    */
    a = mMenu();
    a == 1 ? printCharacter (); : system("exit");

    /*
        Printa a pergunta inicial sobre
        o guerreiro Tom.
    */
    printf("\n Tom era um guerreiro medieval que acabara de retornar de uma guerra vencida, porem sua cidade foi destruida e sua familia foi dizimada, precisava comecar uma nova vida em uma nova cidade: O que fazer primeiro?");

    /*
        Printa as respostas da questão inicial
        e salva cada uma das 4 em variaveis
        auxiliares (v1, v2, v3 e v4).
    */
    for (v = 0; v < 30; v++) {
        if (graph.array[u][v].exist == 1) {
            printf("\n %d- %s", x, graph.array[u][v].answer);
            v1 = (x == 1) ? v : v1;
            v2 = (x == 2) ? v : v2;
            v3 = (x == 3) ? v : v3;
            v4 = (x == 4) ? v : v4;
            x++;
        }
    }

    /*
        Printa "Resposta:" e recebe a resposta
        do usuario e salva na variavel X.
    */
    printf("\n\n     Resposta: ");
    scanf("%d", &x);

    /*
        Cria um loop usando Do While que printa
        a próxima questão na tela as respostas
        que levarão até a próxima pergunta.
        A estrutura de repetição encerra quando
        a váriavel fim for diferente de 0.
    */
    do {
        printCharacter ();
        v = u;
        u = (x == 1) ? v1 : u;
        u = (x == 2) ? v2 : u;
        u = (x == 3) ? v3 : u;
        u = (x == 4) ? v4 : u;
        printf("\n %s\n", graph.array[v][u].question);
        x = 1;

        for (v = 0; v < 30; v++) {
            if (graph.array[u][v].exist == 1) {
                printf("\n %d- %s", x, graph.array[u][v].answer);
                v1 = (x == 1) ? v : v1;
                v2 = (x == 2) ? v : v2;
                v3 = (x == 3) ? v : v3;
                v4 = (x == 4) ? v : v4;
                x++;
            }
        }

        printf("\n\n     Resposta: ");
        scanf("%d", &x);

    } while (fim == 0);

    //sleep(100000);
}