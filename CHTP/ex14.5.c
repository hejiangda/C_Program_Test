#include <stdio.h>
int main(int argc, char const *argv[])
{
  FILE *filePtr;
  FILE *tempPtr;
  int c;
  int temp;
  if((filePtr=fopen(argv[1],"r+"))!=NULL)
  {
    if((tempPtr=tmpfile())!=NULL)
    {
      while ((c=getc(filePtr))!=EOF)
      {
        putchar(c);
        putc(c,tempPtr);
        putc(' ',tempPtr);
      }

      rewind(tempPtr);
      rewind(filePtr);
      printf("%s\n","New:" );

      while ((c=getc(tempPtr))!=EOF)
      {
        putchar(c);
        putc(c,filePtr);
      }
    }
  }
  return 0;
}
