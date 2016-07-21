#include <stdio.h>
#include <stdlib.h>

struct stackNode {
   char data;
   struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;


void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );

int isHuiWen(StackNodePtr currentPtr);


int main( void )
{
   StackNodePtr stackPtr = NULL;
   char value;
   value=getchar();
   while(value!='\n')
   {
     push(&stackPtr,value);
     value=getchar();
   }
   printStack(stackPtr);
   if(1==isHuiWen(stackPtr))
   {
     printf("%s\n","huiwen" );
   }else{
     printf("%s\n","no" );
   }

   return 0;
}

void push( StackNodePtr *topPtr, int info )
{
   StackNodePtr newPtr;

   newPtr = malloc( sizeof( StackNode ) );
   if ( newPtr != NULL ) {
      newPtr->data = info;
      newPtr->nextPtr = *topPtr;
      *topPtr = newPtr;
   }
   else {
      printf( "%d not inserted. No memory available.\n", info );
   }
}

int pop( StackNodePtr *topPtr )
{
   StackNodePtr tempPtr;
   int popValue;

   tempPtr = *topPtr;
   popValue = ( *topPtr )->data;
   *topPtr = ( *topPtr )->nextPtr;
   free( tempPtr );
   return popValue;
}


void printStack( StackNodePtr currentPtr )
{

   if ( currentPtr == NULL ) {
      printf( "The stack is empty.\n\n" );
   }
   else {
      // printf( "The stack is:\n" );


      while ( currentPtr != NULL ) {
         printf( "%c", currentPtr->data );
         currentPtr = currentPtr->nextPtr;
      }
      printf( "\n" );
   }
}


int isEmpty( StackNodePtr topPtr )
{
   return topPtr == NULL;
}

int isHuiWen(StackNodePtr currentPtr)
{
  StackNodePtr stack1Ptr = NULL;
  StackNodePtr tempPtr = currentPtr;
  char value;
  int i=0,num=0;
  while ( currentPtr != NULL ) {
    value=currentPtr->data;
    currentPtr = currentPtr->nextPtr;
    push(&stack1Ptr,value);
    i++;
  }
  while ( stack1Ptr != NULL ) {
     if(tempPtr->data==stack1Ptr->data )
     {
        num++;
     }
     tempPtr=tempPtr->nextPtr;
     stack1Ptr = stack1Ptr->nextPtr;
  }
  if(num==i){
    return 1;
  }else return 0;
}
