#include <stdio.h>
#include <math.h>
//a
// unsigned int fibonacci(unsigned int n);
//
// void main(void){
//   unsigned int n=1,k=1,m=0;
//   while(k<UINT_MAX){
//
//     k=fibonacci(n);
//     if(m>k){
//       break;
//     }
//     m=k;
//     printf("%u\n",k);
//     n++;
//
//   }
// }
// // 0 1 1 2 3 5 8 13 21
// unsigned int fibonacci(unsigned int n){
//   unsigned int m,i=0,j=1,k=0;
//   if(1==n){
//     k=0;
//   }else if(2==n){
//     k=1;
//   }else{
//     for(m=2;m<n;m++){
//       k=i+j;
//       i=j;
//       j=k;
//     }
//   }
//   return k;
// }
//b

double fibonacci(double n);

void main(void){
  double n=1,k=1;
  while(1){
    k=fibonacci(n);
    if(isinf(k)){
      break;
    }
    printf("%.0lf\n\n",k);
    n++;
  }
}
// 0 1 1 2 3 5 8 13 21
double fibonacci(double n){
  double m,i=0,j=1,k=0;
  if(1==n){
    k=0;
  }else if(2==n){
    k=1;
  }else{
    for(m=2;m<n;m++){
      k=i+j;
      i=j;
      j=k;
    }
  }
  return k;
}
