#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 25

struct listNode
{
  int data;
  struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode* ListNodePtr;

void insert(ListNodePtr *sPtr,int value);
char delete(ListNodePtr *sPtr,int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);
void concatenate(ListNodePtr firstPtr,ListNodePtr secondPtr);
void insert1(ListNodePtr secondPtr,ListNodePtr firstPtr);
int sumOfAll(ListNodePtr currentPtr);
float averageOfAll(ListNodePtr currentPtr);

int main(int argc, char const *argv[])
{
  ListNodePtr startPtr1=NULL;
  ListNodePtr startPtr2=NULL;
  srand(time(NULL));

  int item,i;
  int n1;
  int n2;
  for(i=0;i<NUM;i++)
  {
    item=(int)(rand()%101);
    insert(&startPtr1,item);
  }
  printList(startPtr1);
  printf("%d\n",sumOfAll(startPtr1) );
  printf("%f\n",averageOfAll(startPtr1));
  return 0;
}


void concatenate(ListNodePtr firstPtr,ListNodePtr secondPtr)
{
  ListNodePtr currentPtr;
  currentPtr=firstPtr;
  while(currentPtr->nextPtr!=NULL)
  {
    currentPtr=currentPtr->nextPtr;
  }
  currentPtr->nextPtr=secondPtr;
}
void insert1(ListNodePtr secondPtr,ListNodePtr firstPtr)
{
  ListNodePtr currentPtr;
  currentPtr=secondPtr;
  int i,temp,num;
  do
  {
    insert(&firstPtr,currentPtr->data);
    currentPtr=currentPtr->nextPtr;
  }while(currentPtr->nextPtr!=NULL);
  insert(&firstPtr,currentPtr->data);

}
void insert(ListNodePtr *sPtr,int value){
  ListNodePtr newPtr;
  ListNodePtr previousPtr;
  ListNodePtr currentPtr;

  newPtr=malloc(sizeof(ListNode));

  if(newPtr!=NULL){
    newPtr->data=value;
    newPtr->nextPtr=NULL;

    previousPtr=NULL;
    currentPtr=*sPtr;

    while(currentPtr!=NULL&&currentPtr->data<newPtr->data){
      previousPtr=currentPtr;
      currentPtr=currentPtr->nextPtr;
    }

    if(previousPtr==NULL){
      newPtr->nextPtr=*sPtr;
      *sPtr=newPtr;
    }else{
      previousPtr->nextPtr=newPtr;
      newPtr->nextPtr=currentPtr;
    }
  }else{
    printf("%c not inserted. No memory available.\n",value);
  }
}

char delete(ListNodePtr *sPtr,int value){
  ListNodePtr previousPtr;
  ListNodePtr currentPtr;
  ListNodePtr tempPtr;

  if(value==(*sPtr)->data){
    tempPtr=*sPtr;
    *sPtr=(*sPtr)->nextPtr;
    free(tempPtr);
    return value;
  }else{
    previousPtr=*sPtr;
    currentPtr=(*sPtr)->nextPtr;
    while(currentPtr!=NULL&&currentPtr->data!=value){
      previousPtr=currentPtr;
      currentPtr=currentPtr->nextPtr;
    }
    if(currentPtr!=NULL){
      tempPtr=currentPtr;
      previousPtr->nextPtr=currentPtr->nextPtr;
      free(tempPtr);
      return value;
    }
  }
  return'\0';
}

int isEmpty(ListNodePtr sPtr){
  return sPtr==NULL;
}

void printList(ListNodePtr currentPtr){
  int i=0;
  if(currentPtr==NULL){
    printf("List is empty.\n");
  }else{
    printf("The list is:\n");
    while(currentPtr!=NULL){
      // printf("%c -->",currentPtr->data);
      printf("%d\t",currentPtr->data );
      currentPtr=currentPtr->nextPtr;
      i++;
      if(!(i%5)){
        putchar('\n');
      }
    }
    puts("");
    // printf("NULL\n\n");
  }
}


int sumOfAll(ListNodePtr currentPtr){
  auto int sum=0;
  if(currentPtr==NULL){
    printf("List is empty.\n");
  }else{
    while(currentPtr!=NULL){
      sum+=currentPtr->data;
      currentPtr=currentPtr->nextPtr;
    }
  }
  return sum;
}

float averageOfAll(ListNodePtr currentPtr)
{
  auto int sum = sumOfAll(currentPtr);
  auto int i=0;
  while(currentPtr!=NULL){
    currentPtr=currentPtr->nextPtr;
    i++;
  }
  // printf("%s%d\n","*****,",i );
  return sum*1.0/i;
}
