#include "mage.h"

void mTalk();
void mTower();
void mLookAround();
void mCave();
// m = mage

void mage(char name[20], int action) {
    printf("%s é um mago do reino de Eruthe, sua missão de acordo com o Rei Yeoman Renoldus é exterminar um bando de minotauros em uma torre perto do reino.\n", name);
    while(1) {
        puts("O que deseja fazer?");
        puts("1 - Falar com o Rei");
        puts("2 - Seguir para a torre");
        puts("3 - Olhar ao seu redor");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            mTalk();
            continue;
        } else if(action == 2) {
            mTower();
            break;
        } else {
            mLookAround();
            continue;
        }
    }
}

void mTalk() {
    puts("Você pergunta ao Rei o que precisa fazer, ele diz que a sua tarefa é exterminar um bando de minotauros perto dali");
}

void mTower() {
    puts("Você segue para a torre, no caminho encontra uma caverna, com uma voz no profundo escuro da caverna exclamando por ajuda.");
    mCave();
}

void mLookAround() {
    puts("Você está no palácio do Rei Yeoman Renoldus.");
}

void mCave() {
    while(1) {
        puts("1 - Entrar na escura caverna");
        puts("2 - Evitar a caverna e ir para a torre");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            puts("Você entra na caverna, por um momento a voz pedindo por socorro desaparece. Você se vê ali no escuro sem saber o que fazer...");
            puts("Até que você ouve uma voz baixinho, em um canto sombrio, por um momento pensa que aquela voz era a que estava pedindo por ajuda.");
            break;
        } else {
            puts("Você segue para a torre e encontra o bando de minotauros, você extermina todos, com excessão de um, o chefão.");
            break;
        }
    }
}
