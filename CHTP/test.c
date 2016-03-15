// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// struct node{
//   struct node *prePtr;
//   char data;
//   struct node *subPtr;
// };

// typedef struct node NODE;

// void setPreNode(NODE *PreNode,NODE *CurNode);
// void setSubNode(NODE *SubNode,NODE *CurNode);
// void setData(NODE *CurNode,char c);
// void addNode(NODE *CurNode,int mode);

// int main(){
//   NODE node1;
//   NODE *nodePtr;
//   NODE *nextPtr;
//   NODE *curPtr;
//   char c1;
//   nodePtr=&node1;
//   nextPtr=malloc(sizeof(NODE));
//   setPreNode(NULL,nodePtr);
//   while(c1!='0'){
//     scanf("%c",&c1);
//     setData(nodePtr,c1);
//     setSubNode(nextPtr,nodePtr);
// printf("***/%c/****",nodePtr->subPtr->data);
//     scanf("%c",&c1);
//     setData(nextPtr,c1);
//     nodePtr=nextPtr;
//     nextPtr=malloc(sizeof(NODE));

//   }
//   setSubNode(NULL,nextPtr);
//   printf("%c**",nodePtr->data);
//   curPtr=node1.subPtr;
//   while(curPtr!=NULL){
//     printf("%C",curPtr->data);
//     curPtr=curPtr->subPtr;
//   }
// }

// void setPreNode(NODE *PreNode,NODE *CurNode){
//   if(PreNode==NULL){
//     CurNode->prePtr=NULL;
//   }else{
//     CurNode->prePtr=PreNode;
//   }
// }

// void setSubNode(NODE *SubNode,NODE *CurNode){
//   if(SubNode==NULL){
//     CurNode->subPtr=NULL;
//   }else{
//     CurNode->subPtr=SubNode;
//   }
// }

// void setData(NODE *CurNode,char c){
//   CurNode->data=c;
// }

#include <stdio.h>

void main(){
  int i;
  
  for(i=0;i<80;i++){
    printf("*");
  }
  printf("\n");
  printf("\t\t\tThis is my first C program!\n");
  for(i=0;i<80;i++){
    printf("*");
  }
  printf("\n");

}










