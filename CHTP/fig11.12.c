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
  FILE *cfPtr;

  struct clientData client = {0,"","",0};
  if((cfPtr=fopen("credit.dat","rb+"))==NULL)
  {
    printf("%s\n","File could not be opened." );
  }
  else
  {
    printf("%s(1 to 100,0 to end input)\n","Enter account number" );
    scanf("%d",&client.accNum );

    while (client.accNum!=0)
    {
      printf("%s\n","Enter lastname,firstname,balance?" );
      fscanf(stdin,"%s%s%lf",client.lastName,client.firstName,&client.balance);
      fseek(cfPtr,(client.accNum-1)*sizeof(struct clientData),SEEK_SET);
      fwrite(&client,sizeof(struct clientData),1,cfPtr);
      printf("Enter account number\n?");
      scanf("%d",&client.accNum );
    }
    fclose(cfPtr);
  }
  return 0;
}
