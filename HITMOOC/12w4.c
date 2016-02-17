#include <stdio.h>

int CommonFactors(int a,int b);

int main(int argc, char const *argv[]) {
  /* code */
  int a,b,n,ret,max,min,min2;
  printf("%s\n","Input a and b:");
  scanf("%d %d",&a,&b);
  max=a>=b?a:b;
  min=a>=b?b:a;
  // n=0;
  // ret=CommonFactors(max,min);
  // while(-1!=ret){
  //   ++n;
  //   printf("%s%d%s%d\n","Common factor ",n," is ",ret);
  //   ret=CommonFactors(min1,ret);
  // }
  printf("%d\n",CommonFactors(max,min) );
  return 0;
}

int CommonFactors(int max,int min){
  int r;
  if(1==max%min && max==min){
    return -1;
  }else if(0==max%min){
    return min;
  }else if(0!=max%min){
    r=max%min;
    CommonFactors(min,r);
  }
}
