#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
  char s[4][10];
  char n=0;
  char i;
  int num[4];
  int sum=0;
  for (i=0;i<4;i++){
    scanf("%s",s[i]);
  }
  for (i=0;i<4;i++){
    num[i]=atoi(s[i]);
    sum+=num[i];
  }
  printf("%d\n",sum);
}
