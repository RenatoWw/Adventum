#include <stdio.h>

void knight(char name[20], int action) {
    printf("%s é um cavaleiro do reino de Eruthe, sua missão de acordo com o Rei Yeoman Renoldus é matar um orc que está se escondendo na floresta.\n", name);
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
