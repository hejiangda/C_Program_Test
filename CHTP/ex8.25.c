#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  unsigned char c;
  c=getchar();
  putchar(c);
  for(c=0;c<255;c++)
  {
    putchar(c);
    putchar('\t');
    if(!(c%5))
    {
      putchar('\n');
    }
  }
  return 0;
}
