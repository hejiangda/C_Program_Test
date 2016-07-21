#include <stdio.h>
#include <stdlib.h>

// ofPtr = fopen("oldmast.dat","r");
// tfPtr = fopen("trans.dat","r");
// nfPtr = fopen("newmast.dat","r");
// fscanf( ofPtr, "%d%s%f",&accountNum,name,&currentBalance);
// fscanf( tfPtr, "%d%f",&accountNum,&dollarAmount);
// fprintf(nfPtr, "%d %s %.2f", accountNum,name,currentBalance );

int main(int argc, char const *argv[]) {
  int masterAccount;
  int transactionAccount;
  double masterBalance;
  double transactionBalance;
  char masterName[30];

  FILE *ofPtr;
  FILE *tfPtr;
  FILE *nfPtr;

  if((ofPtr = fopen("oldmast.dat","r"))==NULL)
  {
    printf("Unable to open oldmast.dat\n" );
    exit(1);
  }

  if((tfPtr = fopen("trans.dat","r"))==NULL)
  {
    printf("Unable to open trans.dat\n" );
    exit(1);
  }

  if((nfPtr = fopen("newmast.dat","w"))==NULL)
  {
    printf("Unable to open newmast.dat\n" );
    exit(1);
  }

  printf("processing....\n" );
  fscanf( tfPtr, "%d%lf",&transactionAccount,&transactionBalance);

  while (!feof(tfPtr))
  {
    fscanf(ofPtr,"%d%[^0-9-]%lf",&masterAccount,masterName,
      &masterBalance);

    while(masterAccount < transactionAccount && !feof(ofPtr))
    {
      fprintf(nfPtr, "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);
      printf( "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);

      fscanf(ofPtr,"%d%[^0-9-]%lf",&masterAccount,
            masterName,&masterBalance);
    }
// /*
    if(masterAccount == transactionAccount)
    {
      masterBalance += transactionBalancbg
      fprintf(nfPtr, "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);
      printf( "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);
    }else if (masterAccount > transactionAccount)
    {
      printf("Unmatched transaction record for account %d\n",
            transactionAccount);
      fprintf(nfPtr, "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);
      printf( "%d %s %.2f\n",masterAccount,masterName,
        masterBalance);
    }else
    {
      printf("Unmatched transaction record for account %d\n",
            transactionAccount);
    }
    fscanf( tfPtr, "%d%lf",&transactionAccount,&transactionBalance);
  }

  while(!feof(ofPtr))
  {
    fscanf(ofPtr,"%d%[^0-9-]%lf",&masterAccount,
          masterName,&masterBalance);
    fprintf(nfPtr, "%d %s %.2f\n",masterAccount,masterName,
      masterBalance);
    printf( "%d %s %.2f\n",masterAccount,masterName,
      masterBalance);
  }

  fclose(ofPtr);
  fclose(tfPtr);
  fclose(nfPtr);

  return 0;

}
