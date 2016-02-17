#include <stdio.h>
#include <string.h>

int main(){
  char sentence[80];
  char *sPtr;
  printf("Enter a line of text:\n");

  fgets(sentence,80,stdin);
  printf("\nThe line printed backward is:\n");
  sPtr=strchr(sentence,'\n');
  *sPtr='\0';
  printf("%s",sentence);
  return 0;
}
