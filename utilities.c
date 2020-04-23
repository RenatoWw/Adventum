#include "utilities.h"

int action;

void battle(int health, int monsterHealth, int attack, int monsterAttack, char monsterName[20]) {
    while(1) {
        printf("Sua vida: %d\n", health);
        printf("Vida do %s: %d\n", monsterName, monsterHealth);
        puts("O que deseja fazer?");
        puts("1 - Atacar com sua espada");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            sleep(1);
            printf("Você atacou o %s, você tirou %d de vida\n", monsterName, attack);
            monsterHealth -= 2;
            sleep(2);
            printf("O %s te atacou, tirou %d de vida.\n", monsterName, monsterAttack);
            sleep(1);
            health -= 1;
            if(monsterHealth > 0) {
                continue;
            } else {
                puts("Parabéns! Você completou a sua tarefa com sucesso.");
                // todo: revistar corpo, voltar ao rei
                break;
            }
        }
    }
}
