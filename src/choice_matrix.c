#include <stdio.h>
#include "../include/choice_matrix.h"

void print_matrix(int height, int width) {
    char matrix[height][width];

    int count = 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
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

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
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
