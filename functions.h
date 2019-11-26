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
    char question[300];
    char answer[150];
    int exist;
    int character;
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

    strcpy(a.array[0][1].question, "O padre parece estar de mau humor, mesmo assim decide aborda-lo, o que dizer a ele?");
    strcpy(a.array[0][1].answer, "Conversar com um padre aparentemente autoritario...");
    a.array[0][1].exist = 1;

    strcpy(a.array[0][2].question, "Voce chega a casa de uma dona de casa aparentemente cansada, ela parece amigavel, o que dizer a ela?");
    strcpy(a.array[0][2].answer, "Conversar com uma dona de casa cansada...");
    a.array[0][2].exist = 1;

    strcpy(a.array[0][3].question, "Voce chega proximo ao acampamento do exercito da sua nova cidade e ve de longe que o general e um aliado conhecido, o que fazer?");
    strcpy(a.array[0][3].answer, "Procurar entrar em um novo exercito...");
    a.array[0][3].exist = 1;

    strcpy(a.array[0][4].question, "Você chega a taverna da cidade e bebe ate sentir que pode fazer qualquer coisa, o que fazer agora?");
    strcpy(a.array[0][4].answer, "Entrar em uma taverna e beber muito...");
    a.array[0][4].exist = 1;

    strcpy(a.array[1][5].question, "Voce pede orientacao ao padre, que te recomenda ir ate o exercito, o que dizer a ele?");
    strcpy(a.array[1][5].answer, "Pedir orientacao...");
    a.array[1][5].exist = 1;

    strcpy(a.array[1][6].question, "Voce oferece seus servicos a igreja, o padre aceita desde que voce se abdique de sua vida mundana, o que dizer a ele?");
    strcpy(a.array[1][6].answer, "Oferecer seus servicos a igreja...");
    a.array[1][6].exist = 1;

    strcpy(a.array[1][7].question, "Voce pede ao padre que perdoe seus pecados e se abdica de sua vida anterior, voce serve a igreja por um bom tempo, mas ainda existe conflito em voce, deseja seguir este caminho ate fim?");
    strcpy(a.array[1][7].answer, "Buscar salvacao e se abdicar de sua vida anterior...");
    a.array[1][7].exist = 1;

    strcpy(a.array[1][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[1][0].answer, "Desistir e retornar...");
    a.array[1][0].exist = 1;

    strcpy(a.array[2][8].question, "Que ajuda pedir a dona de casa aparentemente cansada?");
    strcpy(a.array[2][8].answer, "Pedir ajuda...");
    a.array[2][8].exist = 1;

    strcpy(a.array[2][10].question, "A dona de casa aparentemente cansada acha que voce e um maniaco e ri da sua cara, toda a cidade zomba de voce, sua vergona o leva a tirar a propria vida...");
    strcpy(a.array[2][10].answer, "A dona de casa aparentemente cansada esconde uma beleza que nao e deste mundo, e mesmo nao a conhecendo voce decide pedir ela em casamento...");
    a.array[2][10].exist = 1;

    strcpy(a.array[2][17].question, "Voce assassinou a dona de casa aparentemente cansada, voce descobre em seus pertences que, apesar da aparencia amigavel, ela era uma assassina em desfarce, mas a populacao da cidade nao acredita em voce e te condena a queimar na fogueira...");
    strcpy(a.array[2][17].answer, "Sua intuicao diz que ela nao e confiavel, assassinar a dona de casa...");
    a.array[2][17].exist = 1;

    strcpy(a.array[2][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[2][0].answer, "Desistir e retornar...");
    a.array[2][0].exist = 1;

    strcpy(a.array[3][11].question, "O recrutador lhe oferece uma oportunidade de trabalhar por dinheiro, o que fazer?");
    strcpy(a.array[3][11].answer, "Conversar com o recrutador...");
    a.array[3][11].exist = 1;

    strcpy(a.array[3][12].question, "Voce percebe que o general e um velho conhecido de infancia e corre em desespero ate ele, chegando ao seu encontro voce diz...");
    strcpy(a.array[3][12].answer, "Conversar diretamente com o general...");
    a.array[3][12].exist = 1;

    strcpy(a.array[3][13].question, "O auxilio oferecido pelo general nao chegou nem perto do esperado, o que fazer?");
    strcpy(a.array[3][13].answer, "Pedir auxilio ao general para reerguer sua vida...");
    a.array[3][13].exist = 1;

    strcpy(a.array[3][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[3][0].answer, "Desistir e retornar...");
    a.array[3][0].exist = 1;

    strcpy(a.array[4][14].question, "A mulher misteriosa se revela uma bruxa, ela esta vestida totalmente de preto e tem um rosto levemente desagradavel, ela precisa de uma cobaia para um experimento e lhe oferece dinheiro...");
    strcpy(a.array[4][14].answer, "Conversar com uma mulher estranha no fundo da caverna...");
    a.array[4][14].exist = 1;

    strcpy(a.array[4][15].question, "Voce conversa com o taverneiro que comenta alguns rumores que ouviu: uma assassina sob o desfarce de dona de casa e o exercito em uma missao secreta em busca de um tesouro antigo...");
    strcpy(a.array[4][15].answer, "Conversar com taverneiro...");
    a.array[4][15].exist = 1;

    strcpy(a.array[4][16].question, "A bebida lhe da coragem a coragem para fazer qualquer coisa, talvez seja o necessario para confrontar o cara chato que te encomodou quando entrou na taverna...");
    strcpy(a.array[4][16].answer, "Provocar um cidadao aleatorio...");
    a.array[4][16].exist = 1;

    strcpy(a.array[4][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[4][0].answer, "Desistir e retornar...");
    a.array[4][0].exist = 1;

    strcpy(a.array[5][11].question, "O recrutador lhe oferece uma oportunidade de trabalhar por dinheiro, o que fazer?");
    strcpy(a.array[5][11].answer, "Seguir o conselho do padre e ir ate o recrutador...");
    a.array[5][11].exist = 1;

    strcpy(a.array[5][1].question, "O padre parece estar de mau humor, mesmo assim decide aborda-lo, o que dizer a ele");
    strcpy(a.array[5][1].answer, "Trabalhar para o exercito lhe traz antigos traumas da guerra e voce pede outros servicos ao padre...");
    a.array[5][1].exist = 1;

    strcpy(a.array[5][17].question, "Suas acoes causam a revolta da igreja e do povo que lhe acusam de ser um demonio e iniciam uma cassada pela sua cabeca que te leva a uma morte lenta e dolorosa...");
    strcpy(a.array[5][17].answer, "O padre nao parece confiavel e voce decide dar um fim a vida dele...");
    a.array[5][17].exist = 1;

    strcpy(a.array[5][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[5][0].answer, "O padre nao parece confiavel, desistir e tentar outra coisa...");
    a.array[5][0].exist = 1;

    strcpy(a.array[6][10].question, "Suas acoes causam a revolta da igreja e do povo que lhe acusam de ser um demonio e iniciam uma cassada pela sua cabeca que te leva a uma morte lenta e dolorosa...");
    strcpy(a.array[6][10].answer, "Roubar a igreja e fugir...");
    a.array[6][10].exist = 1;

    strcpy(a.array[6][7].question, "Voce pede ao padre que perdoe seus pecados e se abdica de sua vida anterior, voce serve a igreja por um bom tempo, mas ainda existe conflito em voce, deseja seguir este caminho ate fim?");
    strcpy(a.array[6][7].answer, "Seguir o conselho do padre...");
    a.array[6][7].exist = 1;

    strcpy(a.array[6][17].question, "Suas acoes causam a revolta da igreja e do povo que lhe acusam de ser um demonio e iniciam uma cassada pela sua cabeca que te leva a uma morte lenta e dolorosa...");
    strcpy(a.array[6][17].answer, "O padre fala demais e isso te incomoda, voce decide matar ele...");
    a.array[6][17].exist = 1;

    strcpy(a.array[6][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[6][0].answer, "O padre nao parece confiavel, desistir e tentar outra coisa...");
    a.array[6][0].exist = 1;

    strcpy(a.array[7][18].question, "Suas acoes causam a revolta da igreja e do povo que lhe acusam de ser um demonio e iniciam uma cassada pela sua cabeca que te leva a uma morte lenta e dolorosa...");
    strcpy(a.array[7][18].answer, "Roubar a igreja e fugir...");
    a.array[7][18].exist = 1;

    strcpy(a.array[7][17].question, "Com o tempo, voce pega gosto pelos costumes clerigos e decide continuar esse caminho, e permanece dessa forma ate o ultimo de seus dias...");
    strcpy(a.array[7][17].answer, "Seguir este caminho ate o fim, e o seu destino...");
    a.array[7][17].exist = 1;

    strcpy(a.array[7][10].question, "Voce vai embora da cidade e chega em outro vilarejo onde suas decisoes destrutivas te levam a morrer miseravel e sozinho...");
    strcpy(a.array[7][10].answer, "Desistir da igreja e ir embora para sempre...");
    a.array[7][10].exist = 1;

    strcpy(a.array[7][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[7][0].answer, "O padre nao parece confiavel, desistir e tentar outra coisa...");
    a.array[7][0].exist = 1;

    strcpy(a.array[8][9].question, "A dona de casa e muito pobre e nao tem dinheiro para pagar pelos seus servicos, o que deseja fazer?");
    strcpy(a.array[8][9].answer, "Oferecer servicos de limpeza em troca de dinheiro...");
    a.array[8][9].exist = 1;

    strcpy(a.array[8][17].question, "A dona de casa aparentemente cansada era somente um desfarce uma para uma assassina sanguinaria e cruel, voce e morto durante a noite e sua carne se torna a refeicao para o proximo tolo que pede ajuda a perversa mulher aparentemente amigavel...");
    strcpy(a.array[8][17].answer, "Pedir um prato de comida e um lugar para passar a noite...");
    a.array[8][17].exist = 1;

    strcpy(a.array[8][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[8][0].answer, "Voce percebe que a dona de casa aparentemente cansada e muito pobre e decide que e melhor nao incomodar...");
    a.array[8][0].exist = 1;

    strcpy(a.array[8][2].question, "Voce chega a casa de uma dona de casa aparentemente cansada, ela parece amigavel, o que dizer a ela?");
    strcpy(a.array[8][2].answer, "Desistir e tentar outra coisa...");
    a.array[8][2].exist = 1;

    strcpy(a.array[9][17].question, "A dona de casa aparentemente cansada se revela como uma assassina sangnaria, juntos voces se tornam um casal de assassinos de aluguel e acumulam uma fortuna que os deixam viver bem ate o fim de suas vidas...");
    strcpy(a.array[9][17].answer, "Dizer a dona de casa aparentemente cansadas que ouviu rumores sobre ela, e que pode ser um aliado util...");
    a.array[9][17].exist = 1;

    strcpy(a.array[9][10].question, "A dona de casa aparentemente cansada, com medo, lhe oferece comida e moradia, mas a noite se revela uma assassina sanguinaria e cruel, voce e morto durante a noite e sua carne se torna a refeicao para o proximo tolo que pede ajuda a perversa mulher aparentemente inocente...");
    strcpy(a.array[9][10].answer, "Ameacar a dona de casa aparentemente cansada que ou ela lhe oferece a ajuda necessaria ou voces terao problemas...");
    a.array[9][17].exist = 1;

    strcpy(a.array[9][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[9][0].answer, "Voce percebe que a dona de casa aparentemente cansada e muito pobre e decide que e melhor nao incomodar...");
    a.array[9][0].exist = 1;

    strcpy(a.array[9][2].question, "Voce chega a casa de uma dona de casa aparentemente cansada, ela parece amigavel, o que dizer a ela?");
    strcpy(a.array[9][2].answer, "Desistir e tentar outra coisa...");
    a.array[9][2].exist = 1;

    strcpy(a.array[11][17].question, "Ameacar o recrutador do exercito acaba se tornando uma pessima ideia e voce e morto...");
    strcpy(a.array[11][17].answer, "Dizer que voce so quer o dinheiro e o ameacar de morte...");
    a.array[11][17].exist = 1;

    strcpy(a.array[11][10].question, "Voce se junta ao exercito, mas em sua primeira missao um grupo de bandidos arma uma emboscada e voce acaba morto... Boa sorte na proxima vida...");
    strcpy(a.array[11][10].answer, "Aceitar proposta e se juntar ao exercito...");
    a.array[11][10].exist = 1;

    strcpy(a.array[11][3].question, "Voce chega proximo ao acampamento do exercito da sua nova cidade e ve de longe que o general e um aliado conhecido, o que fazer?");
    strcpy(a.array[11][3].answer, "Tentar outra coisa...");
    a.array[11][3].exist = 1;

    strcpy(a.array[11][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[11][0].answer, "Desistir e retornar...");
    a.array[11][0].exist = 1;

    strcpy(a.array[12][19].question, "A missao que o general lhe passou te levou a uma ruina antiga que possuia um cogumelo rarissimo, ao come-lo voce acorda com seus amigos alienigenas te perguntando como foi a viagem e voce percebe que tudo foi uma alucinacao, ou sera que esta realidade e a verdadeira alucinacao???");
    strcpy(a.array[12][19].answer, "Pedir ajuda para entrar no exercito...");
    a.array[12][19].exist = 1;

    strcpy(a.array[12][13].question, "O auxilio oferecido pelo general nao chegou nem perto do esperado, o que fazer?");
    strcpy(a.array[12][13].answer, "Apenas coversar sobre a vida e pedir ajuda financeira...");
    a.array[12][13].exist = 1;

    strcpy(a.array[12][3].question, "Voce chega proximo ao acampamento do exercito da sua nova cidade e ve de longe que o general e um aliado conhecido, o que fazer?");
    strcpy(a.array[12][3].answer, "Tentar outra coisa...");
    a.array[12][3].exist = 1;

    strcpy(a.array[12][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[12][0].answer, "Desistir e retornar...");
    a.array[12][0].exist = 1;

    strcpy(a.array[13][19].question, "A missao que o general lhe passou te levou a uma ruina antiga que possuia um cogumelo rarissimo, ao come-lo voce acorda com seus amigos alienigenas te perguntando como foi a viagem e voce percebe que tudo foi uma alucinacao, ou sera que esta realidade e a verdadeira alucinacao???");
    strcpy(a.array[13][19].answer, "Talvez pedir ajuda para entrar no exercito nao seja uma ma ideia...");
    a.array[13][19].exist = 1;

    strcpy(a.array[13][4].question, "Voce se junta ao exercito, mas em sua primeira missao um grupo de bandidos arma uma emboscada e voce acaba morto... Boa sorte na proxima vida...");
    strcpy(a.array[13][4].answer, "Ir para a taverna e beber...");
    a.array[13][4].exist = 1;

    strcpy(a.array[13][10].question, "Voce mata seu amigo e se torna insano, as pessoas tem medo das suas acoes e voce se aproveita disso para tomar o posto do general e toma o controle da cidade para si. Voce vive como um ditador cruel ate o fim de sua vida e deixa filhos e netos mais crueis ainda em uma dinastia que dura geracoes...");
    strcpy(a.array[13][10].answer, "Ficar nervoso, ter um surto psicotico e matar seu amigo general...");
    a.array[13][10].exist = 1;

    strcpy(a.array[13][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[13][0].answer, "Desistir e retornar...");
    a.array[13][0].exist = 1;

    strcpy(a.array[14][20].question, "Por mais inicente que fosse sua escolha, ela te levou a uma situacao em que a sorte nao podera te ajudar...");
    strcpy(a.array[14][20].answer, "Aceitar a proposta da bruxa, o que poderia dar de errado?");
    a.array[14][20].exist = 1;

    strcpy(a.array[14][10].question, "A bruxa fazia varios servicos medicinais para a populacao, que fica enfurecida, entretanto a igreja lhe recompensa por suas acoes e voce vive como um cacador de bruxa por anos ate ser assassinado por alguem misterioso...");
    strcpy(a.array[14][10].answer, "E claro que voce nao aceita a proposta e decide assassinar a bruxa...");
    a.array[14][10].exist = 1;

    strcpy(a.array[14][4].question, "Você chega a taverna da cidade e bebe ate sentir que pode fazer qualquer coisa, o que fazer agora?");
    strcpy(a.array[14][4].answer, "Melhor nao aceitar a proposta...");
    a.array[14][4].exist = 1;

    strcpy(a.array[14][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[14][0].answer, "Desistir e retornar...");
    a.array[14][0].exist = 1;

    strcpy(a.array[15][20].question, "Voce captura o tesouro para si mesmo e se torna rico e poderoso na cidade, o exercito nao desconfia de nada e voce vive uma vida longa e feliz...");
    strcpy(a.array[15][20].answer, "Ir para as ruinas e pegar o tesouro para si mesmo...");
    a.array[15][20].exist = 1;

    strcpy(a.array[15][19].question, "A missao que o general lhe passou te levou a uma ruina antiga que possuia um cogumelo rarissimo, ao come-lo voce acorda com seus amigos alienigenas te perguntando como foi a viagem e voce percebe que tudo foi uma alucinacao, ou sera que esta realidade e a verdadeira alucinacao???");
    strcpy(a.array[15][19].answer, "Ir ate o exercito e oferecer ajuda...");
    a.array[15][19].exist = 1;

    strcpy(a.array[15][17].question, "Voce vai atraz da dona de casa aparentemente cansada e a mata sobre a suspeita de ser a assassina, mas a populacao te condena a morte...");
    strcpy(a.array[15][17].answer, "Voce vai atraz da dona de casa aparentemente cansada e a mata sobre a suspeita de ser a assassina...");
    a.array[15][17].exist = 1;

    strcpy(a.array[15][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[15][0].answer, "Desistir e retornar...");
    a.array[15][0].exist = 1;

    strcpy(a.array[16][20].question, "Por mais inicente que fosse sua escolha, ela te levou a uma situacao em que a sorte nao podera te ajudar...");
    strcpy(a.array[16][20].answer, "Confrontar cidadao inconveniente...");
    a.array[16][20].exist = 1;

    strcpy(a.array[16][19].question, "Voce mata o cara chato que te incomodou, mas agora todos querem sua cabeca, ele era amante da bruxa que te joga uma maldicao terrivel... Mais sorte da proxima vez...");
    strcpy(a.array[16][19].answer, "Matar cidadao inconveniente...");
    a.array[16][19].exist = 1;

    strcpy(a.array[16][0].question, "Este e o seu comeco, ou pelo menos voce foi azarado o suficiente para voltar ate aqui, escolha algo que possa lhe ajudar");
    strcpy(a.array[16][0].answer, "Desistir e retornar...");
    a.array[16][0].exist = 1;

    strcpy(a.array[16][4].question, "Você chega a taverna da cidade e bebe ate sentir que pode fazer qualquer coisa, o que fazer agora?");
    strcpy(a.array[16][4].answer, "Melhor nao fazer nada...");
    a.array[16][4].exist = 1;

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
    printf("  |                                     VvVvVvVvVvVvVvVvVvVvVvVvVvVvVv                                     |\n");
    printf("  |                                    vV    _                  _    vV                                    |\n");
    printf("  |                                   Vv    |O|                |O|    Vv                                   |\n");
    printf("  |                                  vV      -                  -      vV                                  |\n");
    printf("  |                                 |        _       (..)       _        |                                 |\n");
    printf("  |                                 |         |                |         |                                 |\n");
    printf("  |                                 |         |    (______)    |         |                                 |\n");
    printf("  |                                 |         |________________|         |                                 |\n");
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