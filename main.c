#include <stdio.h>

// TODO
/*
input validation
name char limit
pt-br, english support
help menu
more classes
race implementation
monster battle
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

int main() {
    int personagem;
    puts("Bem-vindo ao text adventure game feito em C");
    puts("Qual é o nome de seu personagem?");
    printf("> ");
    scanf("%s", nome);
    puts("Escolha uma classe:");
    puts("1 - Knight");
    puts("2 - Mage");
    puts("3 - Citizen");
    printf("> ");
    scanf("%d", &personagem);
    switch(personagem) {
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
    printf("%s é um knight do reino de Eruthe", nome);
}

void mage() {
    printf("%s é um mage do reino de Eruthe", nome);
}

void citizen() {
    printf("%s é um citizen morador do reino de Eruthe", nome);
}
