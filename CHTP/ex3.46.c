#include <stdio.h>
//a

// void main(void){
//   int n,i,power;
//   scanf("%d",&n);
//   i=1;
//   power=1;
//   while(i<=n){
//     power*=i;
//     i++;
//   }
//   printf("%d",power);
// }

//b
// int jiecheng(int n);
//
// void main(void){
//   int i,j;
//   double e=1;
//   scanf("%d",&i);
//   for(j=1;j<=i;j++){
//     e+=(1.0/jiecheng(j));
//   }
//   printf("%f",e);
// }
//
//
//
// int jiecheng(int n){
//   int i,power;
//   i=1;
//   power=1;
//   while(i<=n){
//     power*=i;
//     i++;
//   }
//   return power;
// }

//c
int jiecheng(int n);
int zicheng(int x,int n);

void main(void){
  int i,j,x;
  double ex=1;
  scanf("%d %d",&i,&x);
  for(j=1;j<=i;j++){
    ex+=(zicheng(x,j)*1.0/jiecheng(j));
  }
  printf("%.20f",ex);
}

int zicheng(int x,int n){
  int i;
  for(i=1;i<=n;i++){
    x*=x;
  }
  return x;
}

int jiecheng(int n){
  int i,power;
  i=1;
  power=1;
  while(i<=n){
    power*=i;
    i++;
  }
  return power;
}
