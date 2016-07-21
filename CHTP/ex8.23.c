#include <stdio.h>
#include <string.h>
#define SIZE 4

int strB(const char *s,int c);
int main(){
  int i;
  const char *words[SIZE]=
  {
    "Hello world",
    "yeB-bye!",
    "Are you ok?",
    "Beyond!",
  };
  for(i=0;i<SIZE;i++)
  {
    if(strB(words[i],'B')!=0)
    {
      printf("%s\n",words[i] );
    }
  }
  return 0;
}

int strB(const char *s,int c)
{
  int ret;
  if(c==s[0])
  {
    ret=1;
  }
  else
  {
    ret=0;
  }
  return ret;
}
