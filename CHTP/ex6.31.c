#include <stdio.h>

enum status{NO,YES};

int testPalindrome(char* string);

int main(int argc, char const *argv[]) {
  char str[30]="";
  scanf("%s",str );
  printf("**%d\n",testPalindrome(str));
  return 0;
}

int testPalindrome(char* string){
  char head,tail,temp;
  int i=0;
  int j=0;
  int rets=1;
  enum status ret;
  temp=string[i];
  while(temp!='\0'){
    temp=string[i];
    i++;
  }
  if(i>=2){
    head=string[0];
    tail=string[i-2];
    string[i-2]='\0';
  }


  if(rets==0){
    return 0;
  }
  if(head==tail){
    return 1;

  }else {
    return 0;
  }
}
