#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct queueNode
{
  int data;
  struct queueNode *nextPtr;
}

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue( QueueNodePtr currentPtr);                              //ok
int isEmpty( QueueNodePtr headPtr );                                    //ok
int dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr );            //ok
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value );//ok


int main(int argc, char const *argv[])
{
  QueueNodePtr headPtr=NULL;
  QueueNodePtr tailPtr=NULL;
  int customerArriveTime;
  int serviceTime;
  srand(time(NULL));
//1
  customerArriveTime = rand()%4+1;
//2
  serviceTime = rand()%4+1;
  customerArriveTime += rand()%4+1 + serviceTime;
//3



  return 0;
}

void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, int value )
{

  QueueNodePtr newPtr;

  newPtr = malloc( sizeof( QueueNode ));
  if(newPtr != NULL)
  {
    newPtr -> data = value;
    newPtr -> nextPtr = NULL;

    if( isEmpty( *headPtr ))
    {
      *headPtr = newPtr;
    }
    else
    {
      ( *tailPtr )->nextPtr = newPtr;
    }

    *tailPtr = newPtr;
  }
  else
  {
    printf("%d not inserted. No memary available.\n",value );
  }
}

int dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr )
{
  int value;
  QueueNodePtr tempPtr;

  value = ( *headPtr )->data;
  tempPtr = *headPtr;
  *headPtr = ( *headPtr )->nextPtr;

  if( *headPtr == NULL )
  {
    *tailPtr = NULL;
  }

  free( tempPtr );

  return value;
}

int isEmpty( QueueNodePtr headPtr )
{
  return headPtr==NULL;
}

void printQueue( QueueNodePtr currentPtr)
{
  if( currentPtr == NULL )
  {
    printf("Queue is empty.\n" );
  }else
  {
    printf("The queue is:\n" );

    while( currentPtr != NULL )
    {
      printf("%d\t",currentPtr->data );
      currentPtr = currentPtr->nextPtr;
    }
    printf("NULL\n" );
  }
}
