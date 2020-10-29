#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct inventario
{
    char item[100];
    struct inventario *prox;
};

struct ataques
{
    char nome[100];
    char descricao[1000];
    struct ataques *prox;
};

struct stats
{
    int numero;
    int modificador;
};

typedef struct inventario Inventario;

typedef struct ataques Ataques;

struct personagem
{
    char nome[100];
    char raca[50];
    char classe[50];
    char antecedente[50];
    char alinhamento[50];
    char caracteristicas[1000];
    char talentos[100];
    char ideais[1000];
    char vinculos[1000];
    char defeitos[1000];
    char personalidade[1000];
    char proficiencia[500];
    char idiomas[500];
    Inventario * itens;
    Ataques * atkspell;
    struct stats forca;
    struct stats destreza;
    struct stats constituicao;
    struct stats inteligencia;
    struct stats sabedoria;
    struct stats carisma;
    int level;
    int xp;
};

int main()
{
    struct personagem ficha;

    char input[1000];

    printf("Digite o nome do personagem\n");
    fgets(ficha.nome,100,stdin);
    printf("%s",ficha.nome);

    printf("Digite a raca do personagem\n");
    fgets(ficha.raca,100,stdin);
    printf("%s",ficha.raca);

    printf("Digite a classe do personagem\n");
    fgets(ficha.classe,100,stdin);
    printf("%s",ficha.classe);

    printf("Digite o antecedente do personagem\n");
    fgets(ficha.antecedente,100,stdin);
    printf("%s",ficha.antecedente);

    printf("Digite o alinhamento do personagem\n");
    fgets(ficha.alinhamento,100,stdin);
    printf("%s",ficha.alinhamento);

    printf("Digite as caracteristicas do personagem\n");
    fgets(ficha.caracteristicas,100,stdin);
    printf("%s",ficha.caracteristicas);

    printf("Digite os talentos do personagem\n");
    fgets(ficha.talentos,100,stdin);
    printf("%s",ficha.talentos);

    printf("Digite os ideais do personagem\n");
    fgets(ficha.ideais,100,stdin);
    printf("%s",ficha.ideais);

    printf("Digite os vinculos do personagem\n");
    fgets(ficha.vinculos,100,stdin);
    printf("%s",ficha.vinculos);

    printf("Digite os defeitos do personagem\n");
    fgets(ficha.defeitos,100,stdin);
    printf("%s",ficha.defeitos);

    printf("Digite a personalidade do personagem\n");
    fgets(ficha.personalidade,100,stdin);
    printf("%s",ficha.personalidade);

    printf("Digite a proficiencia do personagem\n");
    fgets(ficha.proficiencia,100,stdin);
    printf("%s",ficha.proficiencia);

    printf("Digite os idiomas do personagem\n");
    fgets(ficha.idiomas,100,stdin);
    printf("%s",ficha.idiomas);

    return 0;
}

