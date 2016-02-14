#include <stdio.h>
#include <ctype.h>
int main(){
  char c[100];
  char ch;
  short i=0;
  scanf("%s",c );
  while(c[i]!='\0'){
    printf("%c",toupper(c[i]));
    i++;

  }
  printf("\n");
  i=0;
  while(c[i]!='\0'){
    printf("%c",tolower(c[i]));
    i++;

  }
  printf("\n");
}
