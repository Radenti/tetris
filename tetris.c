
/*
Jogo interativo tetris implementado em linguagem C para uso no controle (terminal de comando)

Para executar:
    >start programa.exe

Autor: Fabiola Gisel Garcia Radenti
Data: 28/08/2019

*/
#include "tetris.h"

/*
    Inicializa a matriz principal com "espaços vazios"
*/
void init(char matrix[ROWS][COLUMNS]){
    int i,j;

    for(i=0; i<ROWS; i++){
        for(j=0; j<COLUMNS; j++){
            matrix[i][j] = ' ';
        }
    }
    }

/*
    Mostra o conteúdo da matrix principal na tela
*/
void printMatrix(char matrix[ROWS][COLUMNS]){
    int i,j;

    for(i=0; i<ROWS; i++){
        for(j=0; j<COLUMNS; j++){
            printf("%c", matrix[i][j]);
        }

        printf("\n");
    }
}
