#include <stdio.h>

void stringReverse(char *str);

int main(int argc, char const *argv[]) {
  char *str="hello dada";\
  printf("%s\n",str);
  stringReverse(str);
  printf("\n" );
  return 0;
}

void stringReverse(char *str){
  if(*str!='\0'){
    stringReverse(str+1);
    printf("%c",*str);
  }else {
    return;
  }
}
