#include <stdio.h>
/*
  1h=60'=3600"



*/

int clock(int h,int m,int s);

void main(void){
  int h1,m1,s1;
  int h2,m2,s2;
  printf("The first time:\n");
  scanf("%d %d %d",&h1,&m1,&s1);
  printf("The second time:\n");
  scanf("%d %d %d",&h2,&m2,&s2);
  printf("%d\n",clock(h1,m1,s1)-clock(h2,m2,s2)>0?clock(h1,m1,s1)-clock(h2,m2,s2):clock(h2,m2,s2)-clock(h1,m1,s1));
}

int clock(int h,int m,int s){
  return s+60*m+3600*h;
}
