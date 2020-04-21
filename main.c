#include <stdio.h>

// TODO
/*
input validation
name char limit
help menu
more classes
race implementation
monster battle
pt-br, english support
-------------------
weapon selection
knight: sword, axe, shield
mage: wand, staff
-------------------
inventory
history generator
-------------------
continuar, esquerda, direita, voltar
continue, left, right, back
-------------------
bestiary
kingdoms
merchants
health points for knights and citizens and mana points for mages
ability tree
-------------------
map displaying position

__________  x . y ascii (generated square)
|--------|  a = you are here
|--------|
|---a----|
|--------|
‾‾‾‾‾‾‾‾‾‾
-------------------
*/
void knight();
void mage();
void citizen();
char nome[20];
int action;

int main() {
    puts("Bem-vindo ao text adventure game feito em C");
    puts("Qual é o nome de seu personagem?");
    printf("> ");
    scanf("%s", nome);
    puts("Escolha uma classe:");
    puts("1 - Cavaleiro");
    puts("2 - Mago");
    puts("3 - Cidadão");
    printf("> ");
    scanf("%d", &action);
    switch(action) {
        case 1:
            knight();
            break;
        case 2:
            mage();
            break;
        case 3:
            citizen();
            break;
    }
    return 0;
}

void knight() {
    printf("%s é um cavaleiro do reino de Eruthe, sua missão de acordo com o Rei Yeoman Renoldus é matar um orc que está se escondendo na floresta.\n", nome);
    while(1) {
        puts("O que deseja fazer?");
        puts("1 - Falar com o Rei");
        puts("2 - Ir para floresta");
        puts("3 - Olhar ao redor");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            puts("Você pergunta ao Rei o que precisa fazer, ele diz que a sua tarefa é matar um orc escondido na floresta em troca de uma recompensa.");
            continue;
        } else if(action == 2) {
            puts("Você vai para a floresta procurando pelo orc, você se depara com um cachorro com a pata presa em uma armadilha de urso, o que você faz?");
            break;
        } else {
            puts("Vocẽ está no palácio do Rei Yeoman Renoldus.");
            continue;
        }
    }
    while(1) {
        puts("1 - Libertar o cachorro da armadilha");
        puts("2 - Seguir o seu caminho e esquecer o cachorro");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            puts("Você libertou o cachorro da armadilha de urso, ele se lembrará disso.");
            puts("Depois de libertar o cachorro, você segue o seu caminho e se depara com o orc.");
            break;
        } else {
            puts("Você seguiu o seu caminho sem ajudar o cachorro, ele se lembrará disso.");
            puts("Após seguir sem ajudar o cachorro, você se depara com o orc.");
            break;
        }
    }
}

void mage() {
    printf("%s é um mago do reino de Eruthe", nome);
}

void citizen() {
    printf("%s é um cidadão morador do reino de Eruthe", nome);
}
