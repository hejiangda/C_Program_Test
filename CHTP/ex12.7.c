#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char const *argv[])
{
  ListNodePtr startPtr1=NULL;
  ListNodePtr startPtr2=NULL;

  int item,i;
  int num;
  int n1;
  int n2;
  scanf("%d",&num );
  for(i=0;i<num;i++)
  {
    scanf("\n%d",&item);
    insert(&startPtr1,item);
  }
  printList(startPtr1);

  scanf("%d",&num );
  for(i=0;i<num;i++)
  {
    scanf("%d",&item);
    insert(&startPtr2,item);
  }
  printList(startPtr2);
  insert1(startPtr2,startPtr1);
  // concatenate(startPtr1,startPtr2);
  printList(startPtr1);
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
  if(currentPtr==NULL){
    printf("List is empty.\n");
  }else{
    printf("The list is:\n");
    while(currentPtr!=NULL){
      // printf("%c -->",currentPtr->data);
      printf("%d\t",currentPtr->data );
      currentPtr=currentPtr->nextPtr;
    }
    puts("");
    // printf("NULL\n\n");
  }
}
