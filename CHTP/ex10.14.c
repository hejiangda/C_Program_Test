#include <stdio.h>
void displayBits(unsigned value);
unsigned packCharacters(char c1,char c2);
void unpackCharacters(unsigned s);
void change(unsigned);
int main(){
  char c1;
  char c2;
  unsigned c;
  printf("%s\n","char1:" );
  scanf("%c",&c1 );
  // displayBits(c1);
  printf("%s\n","char2:" );
  scanf(" %c",&c2 );
  // displayBits(c2);
  c=packCharacters(c1,c2);
  printf("\n****************\n");
  unpackCharacters(c);
}

unsigned packCharacters(char c1,char c2){
  unsigned pack;
  pack=c1;
  pack<<=8;
  pack|=c2;
  displayBits(pack);
  return pack;
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

void unpackCharacters(unsigned s){
  unsigned tmp;
  char c1;
  char c2;
  tmp=s&65280;
  tmp>>=8;
  c1=tmp;
  displayBits(c1);
  tmp=s&255;
  c2=tmp;
  displayBits(c2);
}
