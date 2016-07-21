#include <stdio.h>

int main(){
  FILE *fPtr;
  int i;
  char *s1[15]={"char","unsigned char","short int","unsigned short int","int",\
  "unsigned int","long int","unsigned long int","float","double","long double"};

  if((fPtr=fopen("datasize.dat","w"))==NULL){
    printf("File could not be opened\n");

  }else{
    fprintf(fPtr,"%-20s%5s\n","Data type","Size");
    fprintf(fPtr,"%-20s%5lu\n",s1[0],sizeof(char));
    fprintf(fPtr,"%-20s%5lu\n",s1[1],sizeof(unsigned char));
    fprintf(fPtr,"%-20s%5lu\n",s1[2],sizeof(short int));
    fprintf(fPtr,"%-20s%5lu\n",s1[3],sizeof(unsigned short int));
    fprintf(fPtr,"%-20s%5lu\n",s1[4],sizeof(int));
    fprintf(fPtr,"%-20s%5lu\n",s1[5],sizeof(unsigned int));
    fprintf(fPtr,"%-20s%5lu\n",s1[6],sizeof(long int));
    fprintf(fPtr,"%-20s%5lu\n",s1[7],sizeof(unsigned long int));
    fprintf(fPtr,"%-20s%5lu\n",s1[8],sizeof(float));
    fprintf(fPtr,"%-20s%5lu\n",s1[9],sizeof(double));
    fprintf(fPtr,"%-20s%5lu\n",s1[10],sizeof(long double));
    fprintf(fPtr, "%c",EOF );

  }
  // rewind(fPtr);
  fprintf(fPtr, "%s\n","hello rewind" );
  fclose(fPtr);

}
