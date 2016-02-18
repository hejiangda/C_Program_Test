#include <stdio.h>

void displayBits(unsigned value);


int main(){
  unsigned value;
  scanf("%u",&value);
  value>>=4;
  displayBits(value);
  return 0;
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
