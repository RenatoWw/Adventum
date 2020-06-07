/* TOOO
[X] input validation
[X] battles
[X] inventory
[X] bestiary
[X] kingdoms
[X] merchants
[X] health and mana points
[X] ability tree
[X] guilds
[X] generate name
[X] races
[X] english support
[X] weapons(sword, axe, mace)
*/

#include <stdio.h>
#include "knight/knight.h"

int main() {
    char action='a';
    printf("Bem-vindo ao Adventum, um simples rpg escrito em C\n\n");
    printf("A jogabilidade dele é simples, basta apertar os números do teclado para selecionar uma ação ou uma fala quando falando com NPCs.\n");
    printf("Ele está sendo escrito apenas por fins de aprendizado e porque eu amo RPGs!\n\n");
    printf("Aperte enter para continuar...");
    getchar();
    do {
        printf("Escolha uma classe\n");
        printf("1 - Cavaleiro\n");
        printf("> ");
        action = getchar();
    } while(action == 'a');
    knight();
    return 0;
}