#include <stdio.h>

int main(){
  int num,sum,count;
  num=1;sum=0;count=0;
  while(num!=0){
    printf("Input a number:\n");
    scanf("%d",&num);
    if(num>0){
      sum+=num;
      ++count;
    }
  }
  printf("%s%d,%s%d\n","sum=",sum,"count=",count);
}
