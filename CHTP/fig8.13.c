#include <stdio.h>

void reverse(const char * const sPtr);

int main(){
  char sentence[80];
  printf("Enter a line of text:\n");

  fgets(sentence,80,stdin);
  printf("\nThe line printed backward is:\n");
  reverse(sentence);
  return 0;
}

void reverse(const char * const sPtr){
  if('\0'==sPtr[0]){
    return;
  }else {
    reverse(&sPtr[1]);
    putchar(sPtr[0]);
  }
}
