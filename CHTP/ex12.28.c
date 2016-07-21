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


int main(int argc, char const *argv[])
{

  return 0;
}

struct tableEntry
{
  int symbol;
  char type;    // 'C' 'L' 'V'
  int location; //  00, to 99
}symbolTable[100];//符号表

int flags[100];//未定义的位置
int i=0;
for(i=0;i<100;i++)
  flags[i]=-1;

int sml[100];//sml数组

File *infPtr;//输入文件
File *outfPtr;//输出文件
char temp[100];//读入的字符串
char temp1;//临时变量
char *tokPtr;//字符串标号
char smlLoc=99;//变量计数器
char smlLoc1=0;//指令计数器
char branchT=0;//if分支
if((infPtr=fopen(fileName,"r"))==NULL)
{
  printf("%s\n","File could not be opened." );
  exit(0);
}else
{
  while(!feof(infPtr))
  {
    fgets(temp,100,infPtr);

    tokPtr=strtok(temp,' ');
    temp1=atoi(tokPtr);
    if(searchSymbol(temp1,symbolTable))
    {
      symbolTable[i]->symbol=temp1;
      symbolTable[i]->type='L';
      symbolTable[i]->location=smlLoc1;

    }
    do {
      tokPtr=strtok(NULL,' ');
      if(strcmp("rem",tokPtr)==0)
        break;
      if(strcmp("input"),tokPtr==0)
      {
        tokPtr=strtok(NULL,' ');
        temp1=atoi(tokPtr);
        if(searchSymbol(temp1,symbolTable))
        {
          symbolTable[i]->symbol=temp1;
          symbolTable[i]->type='V';
          symbolTable[i]->location=smlLoc;
          smlLoc--;
        }
        sml[smlLoc1]=READ*100+smlLoc;
        smlLoc1++;
      }
      if(strcmp("let",tokPtr)==0)
      {
        tokPtr=strtok(NULL,' ');
        temp1=atoi(tokPtr);
        if(searchSymbol(temp1,symbolTable))
        {
          symbolTable[i]->symbol=temp1;
          symbolTable[i]->type='V';
          symbolTable[i]->location=smlLoc;
          smlLoc--;
        }

      }
      if(strcmp("if",tokPtr)==0)
      {
        tokPtr=strtok(NULL,' ');
        temp1=atoi(tokPtr);
        if(searchSymbol(temp1,symbolTable))
        {
          symbolTable[i]->symbol=temp1;
          symbolTable[i]->type='V';
          symbolTable[i]->location=smlLoc;
          smlLoc--;
        }
        if((branchT=searchSymbolLoc(temp1,symbolTable))!=-1)
        {
          sml[smlLoc1]=symbolTable[branchT]->smlLoc+LOAD*100;
          smlLoc1++;
        }
        tokPtr=strtok(NULL,' ');
        if(strcmp("==",tokPtr)==0)
        {
          tokPtr=strtok(NULL,' ');
          temp1=atoi(tokPtr);
          if((branchT=searchSymbolLoc(temp1,symbolTable))!=-1)
          {
            sml[smlLoc1]=symbolTable[branchT]->smlLoc+BRANCHZERO*100;
            smlLoc1++;
          }else{
            sml[smlLoc1]=00+BRANCHZERO*100;
            smlLoc1++;
          }
        }
        tokPtr=strtok(NULL,' ');
        if(strcmp("goto",tokPtr)==0)
        {
          tokPtr=strtok(NULL,' ');
          temp1=atoi(tokPtr);
          if((branchT=searchSymbolLoc(temp1,symbolTable))!=-1)
          {
            sml[smlLoc1]=symbolTable[branchT]->smlLoc+SUBTRACT*100;
            smlLoc1++;
          }
        }
      }
    } while(tokPtr!=NULL);
  }
}

if((outfPtr=fopen(fileName,"w"))==NULL)
{
  printf("%s\n","File could not be opened." );
  exit(0);
}else
{

}

int searchSymbol(int val,struct tableEntry[] table)
{
  int i;
  for(i=0;i<100;i++)
    if(table[i]->symbol==val)
      return 0;
  else return 1;
}
int searchSymbolLoc(int val,struct tableEntry[] table)
{
  int i;
  for(i=0;i<100;i++)
    if(table[i]->symbol==val)
      return i;
  else return -1;
}
