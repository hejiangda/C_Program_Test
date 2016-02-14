#include <stdio.h>
#include <string.h>

int main(){
  char s1[20],s2[20];
  int cmp;
  int num;
  printf("Please input the first string:");
  scanf("%20s",s1);
  printf("Please input the second string:");
  scanf("%20s",s2);
  printf("Please input the compare number:");
  scanf("%d",&num);

  cmp=strncmp(s1,s2,num);
  printf("%d\n",cmp );

  return 0;
}
