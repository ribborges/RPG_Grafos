#include <stdio.h>
#include <stdlib.h>

int MainMenu ();
int teste ();
int ExitGraph ();

int MainMenu ()
{
    int x;
    system("cls");
    system("COLOR 0F");
    printf("   ______________________________________________________________________________\n");
    printf("   |                                                                            |\n");
    printf("   |                       TRABALHO DE TEORIA DOS GRAFOS!                       |\n");
    printf("   |          Alunos: Richard de Carvalho Borges, Thiago Fonsato Alves          |\n");
    printf("   |                                                                            |\n");
    printf("   |                                                                            |\n");
    printf("   |  Escolha uma opcao?                                                        |\n");
    printf("   |  1- Jogar                                                                  |\n");
    printf("   |  2- Sair                                                                   |\n");
    printf("   |____________________________________________________________________________|\n");
    printf("    Resposta: ");
    scanf("%d", &x);
    printf("\n    Aguarde");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    return x;
}

int teste ()
{
    system("cls");
    system("COLOR 1F");
    printf ("OK");
}