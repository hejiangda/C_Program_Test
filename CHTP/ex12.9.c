#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

struct listNode
{
  char data;
  struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode* ListNodePtr;

void insert(ListNodePtr *sPtr,char value);
char delete(ListNodePtr *sPtr,char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);
void concatenate(ListNodePtr firstPtr,ListNodePtr secondPtr);
void insert1(ListNodePtr secondPtr,ListNodePtr firstPtr);
int sumOfAll(ListNodePtr currentPtr);
float averageOfAll(ListNodePtr currentPtr);
void reverse(const ListNodePtr startPtr1,ListNodePtr *sPtr);
char search(const ListNodePtr startPtr,int num);

int main(int argc, char const *argv[])
{
  ListNodePtr startPtr1=NULL;
  ListNodePtr startPtr2=NULL;
  srand(time(NULL));

  char  item,i;
  int n1;
  int n2;
  for(i=0;i<NUM;i++)
  {
    scanf("%c ",&item );
    insert(&startPtr1,item);
  }
  printList(startPtr1);
  reverse(startPtr1,&startPtr2);
  printList(startPtr2);
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
void insert(ListNodePtr *sPtr,char value){
  ListNodePtr newPtr;
  ListNodePtr previousPtr;
  ListNodePtr currentPtr;

  newPtr=malloc(sizeof(ListNode));

  if(newPtr!=NULL){
    newPtr->data=value;
    newPtr->nextPtr=NULL;

    previousPtr=NULL;
    currentPtr=*sPtr;

    while(currentPtr!=NULL/*&&currentPtr->data<newPtr->data*/){
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

char delete(ListNodePtr *sPtr,char value){
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
  // int i=0;
  if(currentPtr==NULL){
    printf("List is empty.\n");
  }else{
    printf("The list is:\n");
    while(currentPtr!=NULL){
      // printf("%c -->",currentPtr->data);
      printf("%c",currentPtr->data );
      currentPtr=currentPtr->nextPtr;
      // i++;
      // if(!(i%5)){
      //   putchar('\n');
      // }
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

void reverse(const ListNodePtr startPtr1,ListNodePtr *sPtr)
{
  int i=0;
  char item;
  ListNodePtr tempPtr=startPtr1;
  while(tempPtr!=NULL)
  {
    tempPtr=tempPtr->nextPtr;
    i++;
  }
  while(i)
  {
    item=search(startPtr1,i);
    // printf("*****%c\n",item );
    insert(sPtr,item);
    i--;
  }
}
char search(const ListNodePtr startPtr,int num)
{
  auto int i=1;
  auto ListNodePtr tempPtr=startPtr;
  while(i<num)
  {
    if(tempPtr!=NULL)
    {
      tempPtr=tempPtr->nextPtr;
    }
    i++;
    // printf("%c\n",tempPtr->data );
  }
  return tempPtr->data;
}
