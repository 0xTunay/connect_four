#include <stdio.h>
#include "../include/playrs.h"
void print_matrix(int height, int width) {

    info *playrs; 
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            playrs->matrix[i][j] = ' ';
        }
    }
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf(" %c ", playrs->matrix[i][j]);
            if (j < width - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < height - 1) {
            for (j = 0; j < width; j++) {
                printf("---");
                if (j < width - 1) {
                    printf("+");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

void print_matrix_6x7() {
    print_matrix(6, 7);
}

void print_matrix_8x7() {
    print_matrix(8, 7);
}

void print_matrix_8x8() {
    print_matrix(8, 8);
}

void print_matrix_9x7() {
    print_matrix(9, 7);
}

void print_matrix_9x9() {
    print_matrix(9, 9);
}
