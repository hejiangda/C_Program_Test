#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n,touzi1,touzi2,sum,counts[13]={0};
  for(n=0;n<3600;n++){
    touzi1=rand()%6+1;
    touzi2=rand()%6+1;
    sum=touzi1+touzi2;
    counts[sum]++;

  }
  for(n=2;n<=12;n++){
    printf("%d:%d\n",n,counts[n]);
  }
  return 0;
}
