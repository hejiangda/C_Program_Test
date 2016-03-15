#include <stdio.h>

int multiple(int n1,int n2);
void main(void){
  int n1,n2;
  scanf("%d %d",&n1,&n2);
  printf("%d",multiple(n1,n2));

}
int multiple(int n1,int n2){
  int ret;
  if(0==n1%n2){
    ret=1;
  }else ret=0;
  return ret;
}
