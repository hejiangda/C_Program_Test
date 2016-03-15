#include <stdio.h>

void main(void){
  int num,temp,nixu=0;
  scanf("%d",&num);
  while(0!=num/10 || 0!=num%10){
    temp=num%10;
    num/=10;
    nixu=nixu*10+temp;

  }
  printf("%d\n",nixu);
}
