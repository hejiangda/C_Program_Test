#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[8][8]={0};
int horizontal[8];
int vertical[8];
int currentRow;//行
int currentColumn;//列
// int moveNumber;//0~7
int counter=0;//1~64
int accessibility[8][8]={2,3,4,4,4,4,3,2,3,4,6,6,6,6,4,3,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,3,4,6,6,6,6,4,3,2,3,4,4,4,4,3,2};

int access();
void init();
void print(void);
int setArray(int moveNumber);

int main(int argc, char const *argv[]) {
  init();
  srand(time(NULL));
  int stateAccess=1,state=0;
  int m,q,t,i;
  for(m=0;m<8;m++){
    for(q=0;q<8;q++){
      currentRow=q;
      currentColumn=m;
      board[currentRow][currentColumn]=1;
      print();
      printf("\n");
      while(stateAccess!=0){
        stateAccess=access();
        ++counter;
        printf("\n");
        print();
      }

      // print();
      printf("Counter:%d\n",counter );
      getchar();
      counter=0;
      stateAccess=1;
      for(t=0;t<8;t++){
        for(i=0;i<8;i++){
          board[t][i]=0;
        }
      }
    }
  }

  return 0;
}

void print(void){
  int n=0,i=0;
  for(i=0;i<8;i++){
    for(n=0;n<8;n++){
      if(1==board[n][i]){
        printf("# ");
        board[n][i]++;
      }else if(0==board[n][i]){
        printf(". ");
      }else if(2==board[n][i]){
        printf("* ");
      }
    }
    printf("\n");
  }
}

int access(void){
  int tempRow,tempColumn,ret=1,num,i;
  int tempAccess[8]={0};
  for(i=0;i<8;i++){
    tempAccess[i]=10;
  }
  for(num=0;num<8;num++){
    tempRow=currentRow+vertical[num];
    tempColumn=currentColumn+horizontal[num];

    if(tempRow<=7 && tempRow>=0 && tempColumn<=7 && tempColumn>=0){
      if(2==board[tempColumn][tempRow]){

      }else{
        tempAccess[num]=accessibility[tempColumn][tempRow];
      }
    }
  }//ok
  int min=10,temp=10;
  for(num=0;num<8;num++){
    temp=tempAccess[num];
    if(temp<=min){
      min=temp;
    }
  }
  if(10==min){
    ret=0;
  }else{
    int tempMin[8]={0},n=0;
    for(num=0;num<8;num++){
      if(tempAccess[num]==min){
        tempMin[n]=num;
        n++;
      }
    }
    num=tempMin[rand()%n];
    setArray(num);

  }
  return ret;
}

int setArray(int moveNumber){
  int tempRow,tempColumn,ret;
  tempRow=currentRow+vertical[moveNumber];
  tempColumn=currentColumn+horizontal[moveNumber];
  if(tempRow<=7 && tempRow>=0 && tempColumn<=7 && tempColumn>=0){
    if(2==board[tempColumn][tempRow]){
      ret=0;
    }else{
      ret=1;
      currentRow+=vertical[moveNumber];
      currentColumn+=horizontal[moveNumber];
      board[currentColumn][currentRow]=1;
    }
  }else ret=0;

  return ret;
}

void init(){
  horizontal[0]=2;
  horizontal[1]=1;
  horizontal[2]=-1;
  horizontal[3]=-2;
  horizontal[4]=-2;
  horizontal[5]=-1;
  horizontal[6]=1;
  horizontal[7]=2;

  vertical[0]=-1;
  vertical[1]=-2;
  vertical[2]=-2;
  vertical[3]=-1;
  vertical[4]=1;
  vertical[5]=2;
  vertical[6]=2;
  vertical[7]=1;

}
