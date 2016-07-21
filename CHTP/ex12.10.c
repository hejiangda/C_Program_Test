/* Fig. 12.8: fig12_08.c
   dynamic stack program */
#include <stdio.h>
#include <stdlib.h>

/* self-referential structure */
struct stackNode {
   int data; /* define data as an int */
   struct stackNode *nextPtr; /* stackNode pointer */
}; /* end structure stackNode */

typedef struct stackNode StackNode; /* synonym for struct stackNode */
typedef StackNode *StackNodePtr; /* synonym for StackNode* */

/* prototypes */
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions( void );

/* function main begins program execution */
int main( void )
{
   StackNodePtr stackPtr = NULL; /* points to stack top */
   char value; /* int input by user */
   value=getchar();
   while(value!='\n')
   {
     push(&stackPtr,value);
     value=getchar();
   }
   printStack(stackPtr);


   return 0; /* indicates successful termination */
} /* end main */

/* display program instructions to user */
void instructions( void )
{
   printf( "Enter choice:\n"
      "1 to push a value on the stack\n"
      "2 to pop a value off the stack\n"
      "3 to end program\n" );
} /* end function instructions */

/* Insert a node at the stack top */
void push( StackNodePtr *topPtr, int info )
{
   StackNodePtr newPtr; /* pointer to new node */

   newPtr = malloc( sizeof( StackNode ) );

   /* insert the node at stack top */
   if ( newPtr != NULL ) {
      newPtr->data = info;
      newPtr->nextPtr = *topPtr;
      *topPtr = newPtr;
   } /* end if */
   else { /* no space available */
      printf( "%d not inserted. No memory available.\n", info );
   } /* end else */
} /* end function push */

/* Remove a node from the stack top */
int pop( StackNodePtr *topPtr )
{
   StackNodePtr tempPtr; /* temporary node pointer */
   int popValue; /* node value */

   tempPtr = *topPtr;
   popValue = ( *topPtr )->data;
   *topPtr = ( *topPtr )->nextPtr;
   free( tempPtr );
   return popValue;
} /* end function pop */

/* Print the stack */
void printStack( StackNodePtr currentPtr )
{
   /* if stack is empty */
   if ( currentPtr == NULL ) {
      printf( "The stack is empty.\n\n" );
   } /* end if */
   else {
      printf( "The stack is:\n" );

      /* while not the end of the stack */
      while ( currentPtr != NULL ) {
         printf( "%c", currentPtr->data );
         currentPtr = currentPtr->nextPtr;
      } /* end while */
      printf( "\n" );
   } /* end else */
} /* end function printList */

/* Return 1 if the stack is empty, 0 otherwise */
int isEmpty( StackNodePtr topPtr )
{
   return topPtr == NULL;
} /* end function isEmpty */



/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
