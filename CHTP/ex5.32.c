#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  main(void) {
  int num,guess=0;
  char status='y';
  srand(time(NULL));
  num=rand()%1000+1;
  while('y'==status){
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
    while(guess!=num){
      scanf("%d",&guess);
      if(guess>num){
        printf("%s\n","Too high.Try again." );
      }else if(guess<num){
        printf("%s\n","Too low.Try again." );
      }
    }
    printf("%s\n%s\n","Excellent! You guessed the number!","Would you like to play again (y or n)?" );
    scanf(" %c",&status);
    printf("\n\n");
  }
}
