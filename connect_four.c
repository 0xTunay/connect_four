#include <stdio.h>

#define HIGHT 6// ROWS
#define WEGHT 7 // COLS

void print_matrix(char matrix[HIGHT][WEGHT]) {
  for (int i = 0; i < HIGHT; i++) {
    for (int j = 0; j < WEGHT; j++) {
      printf("%c ", matrix[i][j]);
    }
    printf("\n");
  }
}

void initialize_matrix(char matrix[HIGHT][WEGHT]) {
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
}

int main() {
  char matrix[HIGHT][WEGHT];
  initialize_matrix(matrix);
  print_matrix(matrix);
  return 0;
}
