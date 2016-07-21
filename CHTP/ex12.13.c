#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
struct stackNode
{
  int data;
  struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void convertToPostfix(char infix[],char postfix[]); //ok
int isOperator(char c);                             //ok
int precedence(char operator1,char operator2);      //ok
void push(StackNodePtr *topPtr,int value);         //ok
int pop(StackNodePtr *topPtr);                     //ok
char stackTop(StackNodePtr topPtr);                 //ok
int isEmpty(StackNodePtr topPtr);                   //ok
void printStack(StackNodePtr topPtr);               //ok

int evaluatePostfixExpression( char *expr );
int calculate( int op1, int op2, char operator );


int main(int argc, char const *argv[])
{
  char infix[40]="(6+2)*5-8/4";
  scanf("%s",infix );
  char postfix[40]="";
  char c;
  int result;
  convertToPostfix(infix,postfix);
  printf("%s\n",postfix );
  // printf("%s\n","***" );

  result = evaluatePostfixExpression( postfix );
  // printf("%s\n",postfix );
  printf("%s%d\n", "result=", result );
  return 0;
}
void printStack(StackNodePtr topPtr)
{
  while(topPtr!=NULL)
  {
    printf("%c",topPtr->data );
    topPtr=topPtr->nextPtr;
  }
  printf("\n" );
}

void push(StackNodePtr *topPtr,int value)
{
  StackNodePtr newPtr;
  newPtr=malloc(sizeof(StackNode));
  if(newPtr!=NULL)
  {
    newPtr->data=value;
    newPtr->nextPtr=*topPtr;
    *topPtr=newPtr;
  }
}

int pop(StackNodePtr *topPtr)
{
  StackNodePtr tempPtr;
  int ret;
  if(*topPtr!=NULL)
  {
    ret=(*topPtr)->data;
    tempPtr=*topPtr;
    *topPtr=(*topPtr)->nextPtr;
    free(tempPtr);
  }
  return ret;
}

int isOperator(char c)
{
  int ret;
  switch (c)
  {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
    case '%':ret=1;break;
    default :ret=0;
  }
  return ret;
}

int precedence(char operator1,char operator2)
{
  int ret;
  int prec1=0;
  int prec2=0;
  switch (operator1)
  {
    case '+':
    case '-':prec1=1;break;
    case '*':
    case '/':
    case '^':
    case '%':prec1=2;break;
  }
  switch (operator2)
  {
    case '+':
    case '-':prec2=1;break;
    case '*':
    case '/':
    case '^':
    case '%':prec2=2;break;
  }
  if(prec1>prec2)
  {
    ret=1;
  }else if(prec1==prec2)
  {
    ret=0;
  }else if(prec1<prec2)
  {
    ret=-1;
  }
  return ret;
}

int isEmpty(StackNodePtr topPtr)
{
  auto int ret,i=0;
  StackNodePtr tempPtr=topPtr;
  while (tempPtr!=NULL)
  {
    tempPtr=(tempPtr->nextPtr);
    // printf("%p\n",tempPtr );
    // getchar();
    i++;
  }
  // printf("%d\n",i );
  if(i!=0)
  {
    ret=0;
  }else
  {
    ret=1;
  }
  return ret;
}

char stackTop(StackNodePtr topPtr)
{
  char ret=0;
  ret=topPtr->data;
  return ret;
}

void convertToPostfix(char infix[],char postfix[])
{
  // StackNode temp;
  StackNodePtr tempPtr;
  char *tempInfix=infix;
  char *tempPostfix=postfix;
  char c,i=0;
  // temp.nextPtr=NULL;
  // tempPtr=&temp;
  // temp.data='(';
  push(&tempPtr,'(');
  tempPtr->nextPtr=NULL;
  while(*tempInfix!='\0')
  {
    ++tempInfix;
  }
  *tempInfix=')';
  *(++tempInfix)='\0';
  // printf("%s\n",infix );ok
  while(!isEmpty(tempPtr))
  {
    // printf("%s\n",postfix );
    // printStack(tempPtr);
    // printf("**\n" );
    if(*infix>='0'&&*infix<='9')
    {
      *tempPostfix=*infix;
      tempPostfix++;
      *tempPostfix=' ';
      tempPostfix++;
    }else if(*infix=='(')
    {
      push(&tempPtr,*infix);
    }else if(isOperator(*infix))
    {
      c=stackTop(tempPtr);
      if(isOperator(c))
      {
        // printf("***%c\n",c );
        if(precedence(c,*infix)>=0)
        {
          *tempPostfix=pop(&tempPtr);
          push(&tempPtr,*infix);
          tempPostfix++;
          *tempPostfix=' ';
          tempPostfix++;
        }else{
          push(&tempPtr,*infix);

        }

      }else
      push(&tempPtr,*infix);

    }else if(*infix==')')
    {
      c=pop(&tempPtr);
      while(c!='(')
      {
        *tempPostfix=c;
        c=pop(&tempPtr);
        tempPostfix++;

        *tempPostfix=' ';
        tempPostfix++;

      }
      // pop(&tempPtr);
    }
    infix++;
    i++;
    // printf("++++%d\n",i );
  }
}
int evaluatePostfixExpression( char *expr )
{
  StackNodePtr tempPtr;
  push( &tempPtr, 0);
  // printf("%s\n","***" );
  tempPtr -> nextPtr = NULL;
  char c;
  int x, y, temp1, ret;
  while( *expr != '\0' )
  {
    c = *expr;
    if( isdigit(c) )
    {
      push( &tempPtr, c-'0' );
    }else if( isOperator( c ) )
    {
      x = pop( &tempPtr );
      y = pop( &tempPtr );
      // printf("**%d**\n",x );
      temp1 = calculate( x, y, c);
      push( &tempPtr, temp1 );
    }
    expr++;
  }
  ret = pop( &tempPtr );
  // printf("---%d\n",ret );
  return ret;
}
int calculate( int op1, int op2, char operator)
{
  int temp,ret;
  switch ( operator ) {
    case '+':ret = op1 + op2;break;
    case '-':
    {
      if( op2 > op1 )
      {
        temp = op2;
        op2 = op1;
        op1 = temp;
      }
      ret = op1 - op2;break;
    }
    case '*':ret = op1 * op2;break;
    case '/':
    {
      if( op2 > op1 )
      {
        temp = op2;
        op2 = op1;
        op1 = temp;
      }
      ret = op1 / op2;break;
    }
    case '^':ret = (int)pow( op2, op1);break;
    case '%':ret = op1 % op2;break;
  }
  // printf("**** %c %d**\n",operator,ret );
  return ret;
}
