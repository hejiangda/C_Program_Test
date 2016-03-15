#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inf(int n);

void  main(void) {
  int num,guess=0,n=0;
  char status='y';
  srand(time(NULL));
  num=rand()%1000+1;
  while('y'==status){
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
    while(guess!=num){
      scanf("%d",&guess);
      ++n;
      if(guess>num){
        printf("%s\n","Too high.Try again." );
      }else if(guess<num){
        printf("%s\n","Too low.Try again." );
      }
    }
    inf(n);
    printf("%s\n","Would you like to play again (y or n)?" );
    num=rand()%1000+1;
    scanf(" %c",&status);
    printf("\n\n");
  }
}

void inf(int n){
  if(n<10){
    printf("%s\n","Either you know the secret or you got lucky!" );
  }else if(10==n){
    printf("%s\n","Ahah! You know the secret!" );
  }else if(n>10){
    printf("%s\n","You should be able to do better" );
  }
}
