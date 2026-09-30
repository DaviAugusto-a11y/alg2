#ifndef CADASTRO_H
#define CADASTRO_H

typedef struct//strcut que vai ser guardado as info de cadastro dos jogadores
{
    int id;
    char nome[50];
    Raca raca;
    Classe classe;
    int nivel;
    int vidamax;
    int vida;
    int ataque;
    int defesa;
    int iniciativa;
    int poder;

}Cadastro;

typedef enum {//ele pediu isso aqui pra ser enum
    GUERREIRO,      
    MAGO,           
    PALADINO,
    CLERIGO,       
    NUM_CLASSES     
} Classe;

typedef enum {
    HUMANO,
    ELFO,
    ANAO,
    HALFLING,
    NUM_RACAS
} Raca;

#endif