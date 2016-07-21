#include <stdio.h>
#include <stdlib.h>
#define READ 10
#define WRITE 11

#define LOAD 20
#define STORE 21

#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33

#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43


void error(int opt);
void introduce();
void init(void);
void run(void);
void dump(void);
void initProgram(char const*);

int main(int argc, char const *argv[])
{
  introduce();
  initProgram(argv[1]);
  init();
  run();
}


void introduce(void)
{
  printf("*** %s ***\n","Welcome to Simpletron" );
  printf("*** %s ***\n","Please enter your program one instruction" );
  printf("*** %s ***\n","(or data word) at a time,I will type the" );
  printf("*** %s ***\n","location number and a question mark (?)." );
  printf("*** %s ***\n","You then type the word for that location." );
  printf("*** %s ***\n","Type the sentinel -99999 to stop entering" );
  printf("*** %s ***\n","your program." );
}

int memory[100]={0};
int accumulator;
int instructionCounter;
int instructionRegister;
int operationCode;
int operand;

void init(void)
{
  accumulator = +0000;
  instructionCounter = 00;
  instructionRegister = +0000;
  operationCode = 00;
  operand = 00;
}

void dump(void)
{
  int i,j;
  printf("%s\n","REGISTERS:" );
  printf("%-20s\t%+05d\n","accumulator",accumulator );
  printf("%-20s\t   %02d\n","instructionCounter",instructionCounter );
  printf("%-20s\t%+05d\n","instructionRegister",instructionRegister );
  printf("%-20s\t   %02d\n","operationCode",operationCode );
  printf("%-20s\t   %02d\n","operand",operand );
  printf("\n%s\n","MEMORY:" );
  printf("%8d",0 );
  for(i=1;i<10;i++)
  {
    printf("%6d",i );
  }
  printf("\n" );
  for(i=0;i<10;i++)
  {
    printf("%2d",i*10 );
    for(j=0;j<10;j++)
    {
      printf(" %+05d",memory[i*10+j] );
    }
    printf("\n" );
  }
}
void initProgram(char const *fileName)
{
  FILE *fPtr;
  int i;
  if((fPtr=fopen(fileName,"r"))==NULL)
  {
    printf("%s\n","File could not be opened" );
    exit(0);
  }else
  {
    for(i=0;i<100;i++)
    {
      printf("%02d%s",i," ? " );
      fscanf(fPtr,"%d",&memory[i] );
      printf("%d\n",memory[i] );
      while(memory[i] > +9999 || memory[i] < -9999 )
      {
        if(-99999==memory[i]) break;
        printf("*** %s ***\n","please enter a number between -9999 and +9999" );
        printf("%02d%s",i," ? " );
        fscanf(fPtr,"%d",&memory[i] );
        printf("%d\n",memory[i] );
      }
      if(-99999 == memory[i])
      {
        memory[i]=0000;
        printf("*** %s ***\n","Program. loading completed" );
        printf("*** %s ***\n","Program. execution begins" );
        break;
      }
    }
  }


}
void run(void)
{
  int err=0;
  while(!err)
  {
    instructionRegister = memory[instructionCounter];
    operationCode = instructionRegister / 100;
    operand = instructionRegister % 100;
    // printf("--- %d  %d ---\n",operationCode,operand );
    switch (operationCode)
    {
      case READ:printf("(?)" );scanf("%d",&memory[operand]);break;
      case WRITE:printf("%d\n",memory[operand]);break;

      case LOAD:accumulator = memory[operand];break;
      case STORE:memory[operand] = accumulator;break;

      case ADD:accumulator += memory[operand];break;
      case SUBTRACT:accumulator -= memory[operand];break;
      case DIVIDE:if(0 == memory[operand])
                  {
                    error(0);
                    err=1;
                    break;
                  }
                  accumulator /= memory[operand];break;
      case MULTIPLY:accumulator *= memory[operand];break;

      case BRANCH:instructionCounter = operand;break;
      case BRANCHNEG:if(accumulator < 0) instructionCounter = operand-1;break;
      case BRANCHZERO:if(accumulator == 0) instructionCounter = operand-1;break;
      case HALT:printf("*** %s ***\n","Simpletron execution terminated" );instructionCounter--;err=1;break;
    }
    ++ instructionCounter;
    if(instructionCounter>99)
    {
      error(2);
      err=1;
      instructionCounter--;
    }
  }
  dump();
}
void error(int opt)
{
  switch (opt)
  {
    case 0:printf("*** %s ***\n","Attempt to divide by zero" );break;
    case 1:printf("*** %s ***\n","Accumulator overflow" );break;
    case 2:printf("*** %s ***\n","Memory overflow" );break;
  }
  printf("*** %s ***\n","Simpletron execution abnormally terminated" );
}
