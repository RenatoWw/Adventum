
// TODO
/*
input validation
verification name char limit
talk options ("who are you?" "what you want me to do?")
help menu
kingdom and king name generator
option for generate protagonist name
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

#include <stdio.h>
#include "knight.h"
#include "mage.h"
#include "citizen.h"

int main() {
    puts("Bem-vindo ao text adventure game feito em C");
    puts("Qual é o nome de seu personagem?");
    printf("> ");
    scanf("%s", name);
    puts("Escolha uma classe:");
    puts("1 - Cavaleiro");
    puts("2 - Mago");
    puts("3 - Cidadão");
    printf("> ");
    scanf("%d", &action);
    switch(action) {
        case 1:
            knight(name, action);
            break;
        case 2:
            mage(name, action);
            break;
        case 3:
            citizen(name, action);
            break;
    }
}
