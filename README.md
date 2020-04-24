# Adventum

Adventum é um text adventure game escrito em C.

Como jogar:

### Linux e OSX

Requisitos: [git](https://git-scm.com/) e [gcc](https://gcc.gnu.org/)

Você pode instalar-los a partir do seu package manager da distribuição ou na loja de aplicativos.
Não vou entrar muito nisto aqui.

Para jogar é necessário clonar o repositório com o git clone:
`git clone https://github.com/RenatoWw/Adventum`

Agora, entre no diretório com `cd Adventum` e compile e execute com os comandos a seguir.


gcc main.c knight.c mage.c citizen.c utilities.c

./a.out

### Windows

No Windows é um pouco mais trabalhoso.

Primeiro, faça download do repositório clicando em **Clone or Download**. Baixe em zip, e extraia.

Vai ser preciso instalar o [MinGW](http://www.mingw.org/) para compilar o jogo.

Na própria Wiki deles tem um passo-a-passo bem elaborado, clique [aqui](http://www.mingw.org/wiki/Getting_Started) para ver mais.

Agora, entre na pasta do repositório com `cd pasta/onde/esta/localizado/Adventum`

Por fim, compile e execute com os comandos a seguir no diretório do projeto.

gcc main.c knight.c mage.c citizen.c utilities.c

a.exe
