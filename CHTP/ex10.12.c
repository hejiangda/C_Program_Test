#include<stdio.h>

void power2(int number,int pow);
void displayBits(unsigned value);
int main(int argc, char const *argv[]) {
  int number,pow;
  scanf("%d %d",&number,&pow);
  power2(number,pow);
  return 0;
}
void power2(int number,int pow){
  number<<=pow-1;
  printf("%u\n",number);
  displayBits(number);
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
