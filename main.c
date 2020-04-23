
// TODO
/*
input validation
verification name char limit
talk options ("who are you?" "what you want me to do?")
guilds
unlock new phrases from conversations with npcs (continue the dialogue based on the previous question)
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
#include <unistd.h>
#include "knight.h"
#include "mage.h"
#include "citizen.h"

void playGame();
void showHelp();

int main() {
    char help;
    puts("Bem-vindo ao text adventure game feito em C");
    puts("Aperte h para mostrar o menu de ajuda e sobre.");
    puts("Aperte qualquer tecla para começar o jogo.");
    help = getchar();
    if(help == 'h') {
        showHelp();
    } else {
        playGame();
    }
}

void playGame() {
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

void showHelp() {
    printf("Adventum é um text adventure game escrito principalmente em C e foi desenvolvido para aprendizado e revisão de conceitos básicos. ");
    printf("A jogabilidade dele é simples, basta apertar os números do teclado para selecionar uma ação ou uma fala quando falando com NPCs. ");
    printf("Em breve irá ter implementação de lutas com bosses, monstros, lojas para comprar poções e equipamentos especiais, e uma história bem mais trabalhada. ");
    printf("Como todo projeto \"grande\" não surge de um dia para o outro, vai demorar um pouco para tudo isso ser implementado, mas de pouco em pouco será finalizado. ");
    printf("O código deste jogo pode ser modificado e distribuido livremente, não tem objetivos comerciais, apenas para aprendizado como mencionado anteriormente.\n");
    puts("\nIniciando jogo...");
    sleep(3);
    playGame();
}
