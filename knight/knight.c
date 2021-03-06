#include <stdio.h>
#include "knight.h"

void kTalk();
void kForest();
void kLookAround();
void kDog();
int kTask();
// k = knight

char name[20];
int action;

void knight() {
    /* para limpar o buffer */
    getchar();
    printf("Qual vai ser o nome de seu personagem?\n");
    printf("> ");
    scanf("%s", name);
    printf("%s é um cavaleiro do reino de Eruthe.\n", name);
    printf("o resto está sendo arrumado\n");
    exit(1);
    while(1) {
        puts("Você está no palácio do rei Yeoman Renoldus.");

        puts("O que deseja fazer?");
        puts("1 - Falar com o rei");
        puts("2 - Pedir uma tarefa ao rei");
        puts("3 - Olhar ao redor");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            kTalk();
            continue;
        } else if(action == 2) {
            if(kTask() == 1) {
                continue;
            } else {
                break;
            }
        } else {
            kLookAround();
            continue;
        }
    }
}

int kTask() {
    printf("Eu tenho uma tarefa simples para você. Tudo que você precisa fazer é matar um orc que está se escondendo nas florestas perto do reino. Ele está assustando meus cidadãos. Poderia me fazer esse favor, %s?\n", name);
    puts("1 - Sim");
    puts("2 - Não");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        kForest();
        return 0;
    } else {
        return 1;
    }
}

void kTalk() {
    puts("1 - Quem é você?");
    puts("2 - Qual é a história do reino Eruthe?");
    puts("3 - Onde estou?");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        puts("Eu sou Yeoman Renoldus, rei deste reino chamado Eruthe.");
    } else if(action == 2) {
        puts("A história desse reino é bem interessante, boa pergunta. Começou com meus antepassados... TODO"); // TODO
    } else {
        puts("Você está no reino Eruthe. O reino onde eu, Yeoman Renoldus, sou o rei.");
    }
}

void kForest() {
    int health = 20;
    int monsterHealth = 10;
    puts("Você vai para a floresta procurando pelo orc, você se depara com um cachorro com a pata presa em uma armadilha de urso, o que você faz?");
    puts("1 - Libertar o cachorro da armadilha");
    puts("2 - Seguir o seu caminho e esquecer o cachorro");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        puts("Você libertou o cachorro da armadilha de urso, ele se lembrará disso.");

        puts("Depois de libertar o cachorro, ele corre desesperado para o meio das árvores, você segue o seu caminho procurando o orc. Depois de entrar em uma mata fechada você se depara com o orc.");
        printf("%d %d", health, monsterHealth);
        //battle(health, monsterHealth, 2, 1, "orc");
    } else {
        puts("Você seguiu o seu caminho sem ajudar o cachorro, ele se lembrará disso.");
        puts("Após seguir sem ajudar o cachorro, você se depara com o orc.");
        //battle(health, monsterHealth, 2, 1, "orc");
    }
}

void kLookAround() {
    puts("Vocẽ está no palácio do rei Yeoman Renoldus.");
}
