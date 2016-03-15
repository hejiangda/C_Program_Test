#include <stdio.h>

FILE *ofPtr;
FILE *tfPtr;
FILE *nfPtr;

int accountNum;
char *name;
float currentBalance;
float dollarAmount;

ofPtr=fopen("oldmast.dat","r");
fscanf(ofPtr,"%d%s%f",&accountNum,name,&currentBalance)
fclose(ofPtr);

tfPtr=fopen("trans.dat","r");
fscanf(tfPtr,"%d%f",&accountNum,&dollarAmount);
fclose(tfptr);
  3
nfPtr=fopen("newmast.dat","w");
fprintf(nfptr,"%d%s%f",accountNum,name,currentBalance);
fclose(nfPtr);
