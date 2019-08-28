/*
Jogo interativo tetris implementado em linguagem C para uso no controle (terminal de comando)

Para executar:
    >start programa.exe

Autor: Fabiola Gisel Garcia Radenti
Data: 28/08/2019

*/


#include "tetris.h"

int main(){
    char matrix[ROWS][COLUMNS];
    int posI, posJ;

    //posicao inicial do personagem
    posI = ROWS/2;
    posJ = COLUMNS/2;
    //inicializando matriz
    init(matrix);

    while(1){
        system("cls");

        matrix[posI][posJ] = '@';

        printMatrix(matrix);

        matrix[posI][posJ] = ' ';
        
     
        if(posJ < COLUMNS) posJ++;
    }

    system("pause");

    

    return 0;
}

