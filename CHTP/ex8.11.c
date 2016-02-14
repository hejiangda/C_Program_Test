#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  const char *article[]={"the","a","one","some","any"};
  const char *noun[]={"boy","girl","dog","town","car"};
  const char *verb[]={"drove","jumped","ran","walked","skipped"};
  const char *preposition[]={"to","from","over","under","on"};

  const char **p[]={article,noun,verb,preposition,article,noun};
  char new[100]={0};
  int i;

  srand(time(NULL));

  for(i=0;i<6;i++){
    strcat(new,p[i][rand()%5]);
    strcat(new," ");
  }
  printf("%s\n",new);
  return 0;
}
