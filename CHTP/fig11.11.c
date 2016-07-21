#include <stdio.h>

struct clientData
{
  int accNum;
  char lastName[15];
  char firstName[10];
  double balance;
};

int main(int argc, char const *argv[])
{
  int i;
  struct clientData blankClient = {0,"","",0};

  FILE *cfPtr;

  if((cfPtr = fopen("credit.dat","wb")) == NULL)
  {
    printf("%s\n","File could not be opened." );
  }
  else
  {
    printf("%s\n","hello" );
    for(i=1;i<=100;i++)
    {
      fwrite(&blankClient,sizeof(struct clientData),1,cfPtr);
    }
    fclose(cfPtr);
  }
  return 0;
}
