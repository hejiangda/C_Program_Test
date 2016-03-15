#include <stdio.h>

int board[8][8]={0};
int horizontal[8];
int vertical[8];
int currentRow;//行
int currentColumn;//列
int moveNumber;//0~7
int counter=0;;//1~64


void init();
void print(void);
int setArray(int moveNumber);

int main(int argc, char const *argv[]) {
  init();
  int cmd=8,state=0;
  currentRow=4;
  currentColumn=4;
  board[currentRow][currentColumn]=1;
  print();
  while(cmd!=9){
    scanf("%d",&cmd);
    if(cmd!=9){
      state=setArray(cmd);
      if(state==1){
        ++counter;
        print();
      }else printf("Error!\n");
    }
  }

  print();
  printf("Counter:%d\n",counter );
  return 0;
}

void print(void){
  int n=0,i=0;
  for(i=0;i<8;i++){
    for(n=0;n<8;n++){
      if(1==board[n][i]){
        printf("* ");
        board[n][i]++;
      }else if(0==board[n][i]){
        printf(". ");
      }else if(2==board[n][i]){
        printf("# ");
      }
    }
    printf("\n");
  }
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
