#include <stdio.h>
#include "include/choice_matrix.h"
#include "include/playrs.h"

int main() {
  info *Info_Playrsl;

  int choice;
  
  printf("choice matrix\n");
  printf("1. 7x6\n 2. 8x7\n 3. 8x8\n 3. 9x7\n 4. 9x9\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    print_matrix_6x7();
    break;
  case 2: 
    print_matrix_8x7();
    break;
  case 3:
    print_matrix_8x8();
    break;
  case 4: 
    print_matrix_9x7();
    break;
  default:
    break;
  }
  name_playrs(Info_Playrsl);
  return 0;
}
