/*
Jogo interativo tetris implementado em linguagem C para uso no controle (terminal de comando)
Autor: Fabiola Gisel Garcia Radenti
*/

#include <stdio.h>
#include <stdlib.h>

//Configuração das dimensões da matrix principal do jogo
#define COLUMNS 60
#define ROWS 25

/*
    Inicializa a matriz principal com "espaços vazios"
*/
void init(char matrix[ROWS][COLUMNS]);

/*
    Mostra o conteúdo da matrix principal na tela
*/
void printMatrix(char matrix[ROWS][COLUMNS]);