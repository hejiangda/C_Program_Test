#include <stdio.h>

int main(int argc, char const *argv[])
{
  int account;
  char name[30];
  double balance;
  double amount;
  FILE *ofPtr;
  FILE *tfPtr;

  ofPtr = fopen("oldmast.dat","w");
  tfPtr = fopen("trans.dat","w");

  printf("Sample data for file oldmast.dat:\n");
  printf("Enter account,name,and balance (EOF to end):" );

  while (scanf("%d%[^0-9-]%lf",&account,name,
        &balance)!=EOF) {
    fprintf(ofPtr, "%d %s %.2f\n",account,name,balance );
    printf("Enter account,name,and balance (EOF to end):" );
  }

  fclose(ofPtr);

  printf("\nSample data for file trans.dat:\n" );
  printf("Enter account,name,and balance (EOF to end):" );

  while (scanf("%d%lf",&account,&amount)!=EOF) {
    fprintf(tfPtr, "%d %.2f\n",account,amount );
    printf("Enter account,name,and balance (EOF to end):" );
  }
  fclose(tfPtr);
  return 0;
}
