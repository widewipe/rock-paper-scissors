#include<stdio.h>
#include<stdlib.h>

int main() {
  int userChoice;
  int computerChoice;

  while(1) {
    printf("\n\n1. Rock   2. Paper   3. Scissors   4. Exit");
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &userChoice);

    if(userChoice == 4) {
      break;
    }

    computerChoice = (rand() % 3) + 1;

    if(computerChoice == 1) {
      printf("\nComputer plays Rock.\n");
      
      if(userChoice==1) {
        printf("\nDraw\n");
      } else if (userChoice==2) {
        printf("\nUser wins!");
      } else if (userChoice==3) {
        printf("\nComputer wins!");
      }
    } else if(computerChoice == 2) {
      printf("\nComputer plays Paper.\n");
    } else if(computerChoice == 3) {
      printf("\nComputer plays Scissors.\n");
    }
  }
  
  return 0;
}
