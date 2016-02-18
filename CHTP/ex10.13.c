#include <stdio.h>
void displayBits(unsigned value);
void packCharacters(char,char);
int main(){
  char c1;
  char c2;
  printf("%s\n","char1:" );
  scanf("%c",&c1 );
  // displayBits(c1);
  printf("%s\n","char2:" );
  scanf(" %c",&c2 );
  // displayBits(c2);
  packCharacters(c1,c2);
}

void packCharacters(char c1,char c2){
  unsigned pack;
  pack=c1;
  pack<<=8;
  pack|=c2;
  displayBits(pack);
}

void displayBits(unsigned value) {
  unsigned c;
  unsigned displayMask=1<<31;
  printf("%u = ",value);
  for(c=1;c<=32;c++){
    putchar(value & displayMask?'1':'0');
    value<<=1;
    if(c%8==0){
      putchar(' ');
    }
  }
  putchar('\n');
}
