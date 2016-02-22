#include <stdio.h>
void displayBits(unsigned value);
void reverseBits(unsigned value);
int main(){
  unsigned u1;
  scanf("%u",&u1);
  displayBits(u1);

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

void reverseBits(unsigned value){

}
