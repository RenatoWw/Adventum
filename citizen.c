#include "citizen.h"

void screamed();
void look();
void explore();

void citizen(char name[20], int action) {
    printf("%s é um cidadão morador do reino de Eruthe.\n", name);
    printf("Em uma noite, você estava comemorando o seu aniversário em um bar no reino com os amigos. Até que acabou dormindo depois de muita bebedeira. ");
    printf("No outro dia quando você acorda, se vê em uma caverna escura, sons de água pingando e correntezas tomam conta do local. ");
    while(1) {
        puts("O que você faz?");
        puts("1 - Gritar por ajuda");
        puts("2 - Olhar ao redor");
        puts("3 - Seguir o som da correnteza");
        printf("> ");
        scanf("%d", &action);
        if(action == 1) {
            screamed();
            break;
        } else if(action == 2) {
            look();
            break;
        } else if(action == 3){
            explore();
            break;
        } else {
            continue;
        }
    }
}

void screamed() {
    printf("Você grita o mais alto que pode, a sua voz ecoa pelas profundezas da caverna. Depois de um tempo gritando, uma porta se abre e um homem aparece. ");
    printf("Ele tem a aparência de um velho e parece que conhecia o local, ele estava com uma vela e uma ferramenta na mão.");
    puts("\n- \"Quem é você? Onde estou?\" - você pergunta desesperado.");
    puts("- \"Eu sou Dejfo e esta é a minha casa.\" - responde o velho, curioso sobre sua aparência naquele local.");
}

void look() {
    printf("Você ve que tem uma lanterna ao seu lado, você a pega e olha ao redor. A lanterna parece falhar muito, a bateria estava fraca, mas você consegue ver alguma coisa. ");
    printf("Você ve uma porta de metal, uma mesa e uma cadeira de pedra bem simples. ");
    printf("Você abre a porta e encontra o que menos esperava, uma pessoa. ");
    printf("Ele tinha a aparência de um velho, parecia que morava naquele local.");
    puts("\n- \"Quem é você? Onde estou?\" - você pergunta a ele.");
    puts("- \"Meu nome é Dejfo e eu moro nesse local.\" - Disse ele, com um tom bem calmo.");
}

void explore() {
    printf("No escuro você segue o som das correntezas até que cai em um buraco, você ouve sons de aranhas por todo o lado, aquele lugar era um cativeiro de aranhas. ");
    puts("Você sente picadas por todos os lados e sente veneno correndo nas suas veias, você acaba desmaiando e morre.");
    puts("GAME OVER.");
}
