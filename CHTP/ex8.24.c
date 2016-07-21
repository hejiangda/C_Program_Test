#include <stdio.h>
#include <string.h>
#define SIZE 7
int main(int argc, char const *argv[])
{
  int i;
  const char *string[7]=
  {
    "hello","hi","played","chips","lovely","ted","enjoyed"
  };
  for (i=0;i<7;i++)
  {
    if(strstr(string[i],"ed")!=NULL)
    {
      printf("%s\n",string[i] );
    }
  }
  return 0;
}
