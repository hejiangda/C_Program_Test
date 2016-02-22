#include <stdio.h>

int mystery(unsigned bits);
void displayBits(unsigned value) ;

int main(void){
  unsigned x;

  printf("Enter an integer: ");
  scanf("%u",&x);

  printf("The result is %d\n",mystery(x));
  return 0;
}

int mystery(unsigned bits){
  unsigned i;
  unsigned mask=1<<31;
  unsigned total=0;
// printf("****%u**\n",mask);
  for (i=1;i<=32;i++,bits<<=1){
    if ((bits&mask)==mask){
      total ++;
    }
    // printf("mask");
    // displayBits(mask);
    // printf("bits");
    // displayBits(bits);
    // printf("\n****%u**\n",total);
  }
  return !(total%2)?1:0;
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
