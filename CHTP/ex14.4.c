#include <stdio.h>
#include <stdlib.h>
void ascend(int *arrayPtr,int num);
void descend(int *arrayPtr,int num);
int main(int argc, char const *argv[])
{
  void (*order[2])(int *arrayPtr,int num )={ascend,descend};
  int array[]={1,5,2,3,7,6,8,4};
  int i;
  printf("%s\n","The origin array:" );
  for(i=0;i<sizeof(array)/sizeof(array[0]);i++)
  {
    printf("%d\t",array[i] );
  }
  putchar('\n');
  if(argc!=2||argv[1][1]!='a'&&argv[1][1]!='d')
  {
    printf("%s\n","Error!" );
    exit(EXIT_FAILURE);
  }
  else
  {
    if(argv[1][1] == 'a')
    {
      order[0](array,sizeof(array)/sizeof(array[0]));
    }
    else if(argv[1][1] == 'd')
    {
      order[1](array,sizeof(array)/sizeof(array[0]));
    }

  }
  printf("%s\n","The array after ordered:" );
  for(i=0;i<sizeof(array)/sizeof(array[0]);i++)
  {
    printf("%d\t",array[i] );
  }
  putchar('\n');
  return 0;
}
void ascend(int *arrayPtr,int num)
{
  int i,j;
  int temp;
  for(i=0;i<num;i++)
  {
    for(j=i;j<num;j++)
    {
      temp=arrayPtr[i];
      if(temp>=arrayPtr[j])
      {
        arrayPtr[i]=arrayPtr[j];
        arrayPtr[j]=temp;
      }
    }
  }
}
void descend(int *arrayPtr,int num)
{
  int i,j;
  int temp;
  for(i=0;i<num;i++)
  {
    for(j=i;j<num;j++)
    {
      temp=arrayPtr[i];
      if(temp<=arrayPtr[j])
      {
        arrayPtr[i]=arrayPtr[j];
        arrayPtr[j]=temp;
      }
    }
  }
}
