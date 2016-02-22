#include <stdio.h>

int main(void){
  int account ;
  char name[30];
  double balance;

  FILE *cfPtr;

  if((cfPtr=fopen("clients.dat","r"))==NULL){
    printf("File could not be opened\n");
  }else{
    printf("%-10s%-13s%s\n","account","name","balance");
    fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
    while(!feof(cfPtr)){
      printf("%-10d%-13s%7.2f\n",account,name,balance);
      fscanf(cfPtr,"%d%s%lf",&account,name,&balance);
    }
    fclose(cfPtr);
  }
}
