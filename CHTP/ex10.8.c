#include <stdio.h>

union integer{
  char c;
  short s;
  int i;
  long b;

};
union integer value;

void print(void);
int main(int argc, char const *argv[]) {
  printf("char:\n");
  scanf("%c",&value.c);
  print();
  printf("short:\n");
  scanf("%hd",&value.s);
  print();
  printf("int:\n");
  scanf("%d",&value.i );
  print();
  printf("long:\n");
  scanf("%ld",&value.b);
  print();
  return 0;
}
void print(void){
  printf("char%-15c\n",value.c);
  printf("short%-15hd\n",value.s);
  printf("int%-15d\n",value.i);
  printf("long%-15ld\n",value.b);

}
