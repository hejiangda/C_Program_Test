#include <stdio.h>
void hanoi(int n,int start,int focus,int temp);
void main(void){
  hanoi(3,1,3,2);
}

void hanoi(int n,int start,int focus,int temp){
  if(0==n){
    return;
  }else{
    hanoi(n-1,start,temp,focus);
    printf("%d.%d->%d\n",n,start,focus );
    hanoi(n-1,temp,focus,start); 
  }
}

//
// hanoi(n,a,c,b);
// -->hanoi(n-1,a,b,c);
// ----->hanoi(n,a,c,b);
// ------->hanoi(n-1,b,c,a)
