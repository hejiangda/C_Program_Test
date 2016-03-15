#include <stdio.h>

// a)a/b
// b)a%b

/*
  temp=num%10
  num/=10
  nixu+=temp*10

*/

void main(void){
  int num,temp,nixu=0;
  scanf("%d",&num);
  while(0!=num/10 || 0!=num%10){
    temp=num%10;
    num/=10;
    nixu=nixu*10+temp;

  }
// printf("%d\n",nixu);
  while(0!=nixu/10 || 0!=nixu%10){
    temp=nixu%10;
    nixu/=10;
    printf("%d ",temp);
  }
  printf("\n");
}
