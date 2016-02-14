#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char s1[10],s2[10];
  int cmp;
  printf("Please input the first string:");
  scanf("%10s",s1);
  printf("Please input the second string:");
  scanf("%10s",s2);

  cmp=strcmp(s1,s2);
  printf("%d\n",cmp );

  return 0;
}
