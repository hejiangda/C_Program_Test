#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  char s1[30]={"hello world"};
  scanf("%[^\n]",s1 );
  char *tokenPtr;
  char tmp[10];
  char s2[30];
  tokenPtr=strtok(s1," ");
  while (tokenPtr!=NULL) {
    sscanf(tokenPtr,"%1s",tmp);
    strcat(s2,tokenPtr+1);
    strcat(s2,tmp);
    strcat(s2,"ay ");
    tokenPtr=strtok(NULL," ");
  }
  printf("%s\n",s2 );
  return 0;
}
