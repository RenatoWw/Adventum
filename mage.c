#include "mage.h"

void mTalk();
void mTower();
void mLookAround();
void mCave();
int mTask();
// m = mage

void mage(char name[20], int action) {
    printf("%s é um mago do reino de Eruthe.\n", name);
    while(1) {
        puts("O que deseja fazer?");
        puts("1 - Falar com o Rei");
        puts("2 - Pedir uma tarefa ao rei");
        puts("3 - Olhar ao seu redor");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            mTalk();
            continue;
        } else if(action == 2) {
            if(mTask() == 1) {
                continue;
            } else {
                break;
            }
        } else {
            mLookAround();
            continue;
        }
    }
}

int mTask() {
    printf("A sua tarefa é simples. Tudo que precisas fazer é exterminar um bando de minotauros perto daqui, eles estão nos causando problemas. Poderia me fazer esse favor, %s?\n", name);
    puts("1 - Sim");
    puts("2 - Não");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        mTower();
        return 0;
    } else {
        return 1;
    }
}

void mTalk() {
    puts("1 - Quem é você?");
    puts("2 - Qual é a história do reino Eruthe?");
    puts("3 - Onde estou?");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        puts("Eu sou Yeoman Renoldus, rei deste reino chamado Eruthe.");
    } else if(action == 2) {
        puts("A história desse reino é bem interessante, boa pergunta. Começou com meus antepassados..."); // TODO
    } else {
        puts("Você está no reino Eruthe. O reino onde eu, Yeoman Renoldus, sou o rei.");
    }
}

void mTower() {
    puts("Você segue para a torre, no caminho encontra uma caverna, com uma voz no profundo escuro da caverna exclamando por ajuda.");
    puts("1 - Entrar na escura caverna");
    puts("2 - Evitar a caverna e ir para a torre");
    printf("> ");
    scanf("%d", &action);
    if(action == 1) {
        puts("Você entra na caverna, por um momento a voz pedindo por socorro desaparece. Você se vê ali no escuro sem saber o que fazer...");
        puts("Até que você ouve uma voz baixinho, em um canto sombrio, por um momento pensa que aquela voz era a que estava pedindo por ajuda.");
    } else {
        puts("Você segue para a torre e encontra o bando de minotauros, você extermina todos, com excessão de um, o chefão.");
    }
}

void mLookAround() {
    puts("Você está no palácio do Rei Yeoman Renoldus.");
}
