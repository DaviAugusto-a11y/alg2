#include <stdio.h>
#include <string.h>
#include "cadastro.h"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX 100
#define TAM 50
void cadastro(Cadastro *f)
{
    int c;

    while (true)
    {
        printf("Nome do personagem (1 a 49 caracteres uteis): ");
        fgets(f->nome, sizeof(f->nome), stdin);

        if (strchr(f->nome, '\n') == NULL) // nao achou o \n
        {                 
            c = getchar(); // espia o proximo
            if (c != '\n' && c != EOF)// sobrou algo de verdade
            {
                while ((c = getchar()) != '\n' && c != EOF)// limpa o resto
                    ; 
                printf("Falhou: passou de 49 caracteres.\n");
                continue; // volta a perguntar
            }
        }

        f->nome[strcspn(f->nome, "\n")] = '\0'; // tira o \n

        if (strlen(f->nome) == 0)
        {
            printf("Falhou: o nome nao pode ser vazio.\n");
            continue;
        }

        break; // deu tudo certo
    }
    while (true)//Aqui é pra colocar a Raça
    {
    int y;
    printf("Qual sua raça?(1 - Humano / 2 -  Elfo / 3 - Anão / 4 - Halfling): ");
    scanf("%d", &y);
    if (y == 1){
        f->raca = HUMANO;
        break;
    }else if(y == 2){
        f->raca = ELFO;
        break;
    }else if(y == 3){
        f->raca = ANAO;
        break;
    }else if(y == 4){
        f->raca = HALFLING;
        break;
    }else{
        printf("Escolhas são de 1 a 4");
        continue;
    }
    }
    
    
}


int id(Cadastro *f)
{
}