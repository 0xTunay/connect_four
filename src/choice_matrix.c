#include <stdio.h>
#include <string.h>
#include "../include/choice_matrix.h"

void print_matrix_6x7(){

    char matrix[HIGHT][WEGHT];

    int count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            if (i == 0 || i == HIGHT - 1 || j == 0 || j == WEGHT - 1) {
                matrix[i][j] = '0' + count;
                count++;
                if (count > 9) {
                    count = 1;
                }
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_matrix_8x7(){
    char matrix[HIGHT][WEGHT];

    int count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            if (i == 0 || i == HIGHT - 1 || j == 0 || j == WEGHT - 1) {
                matrix[i][j] = '0' + count;
                count++;
                if (count > 9) {
                    count = 1;
                }
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_matrix_8x8(){
    char matrix[HIGHT][WEGHT];

    int count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            if (i == 0 || i == HIGHT - 1 || j == 0 || j == WEGHT - 1) {
                matrix[i][j] = '0' + count;
                count++;
                if (count > 9) {
                    count = 1;
                }
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_matrix_9x7(){
    char matrix[HIGHT][WEGHT];

    int count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            if (i == 0 || i == HIGHT - 1 || j == 0 || j == WEGHT - 1) {
                matrix[i][j] = '0' + count;
                count++;
                if (count > 9) {
                    count = 1;
                }
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_matrix_9x9(){
    char matrix[HIGHT][WEGHT];

    int count = 1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            if (i == 0 || i == HIGHT - 1 || j == 0 || j == WEGHT - 1) {
                matrix[i][j] = '0' + count;
                count++;
                if (count > 9) {
                    count = 1;
                }
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WEGHT; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}
