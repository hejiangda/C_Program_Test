#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[8][8]={0};
int horizontal[8];
int vertical[8];
int currentRow;//行
int currentColumn;//列
int moveNumber;//0~7
int counter=1;;//1~64
int numbersi=0;

int numbers[10000000]={0};


void init();
void print(void);
int setArray(int moveNumber);

int main(int argc, char const *argv[]) {
  init();
  srand(time(NULL));
  int cmd=8,state=0,currentRowtemp,currentColumntemp;
  // printf("Please input x,y:");
  // scanf("%d %d",&currentRowtemp,&currentColumntemp);
  print();

  int tempRow,tempColumn,count=0,num,i;
  int tempAccess[8]={0};
  while(counter!=64){
    counter=1;
    int k,h;
    for(k=0;k<8;k++){
      for(h=0;h<8;h++){
        board[k][h]=0;
      }
    }
    currentRowtemp=0;//rand()%8;
    currentColumntemp=0;//rand()%8;

    currentRow=currentRowtemp;
    currentColumn=currentColumntemp;
    board[currentRowtemp][currentColumntemp]=1;
  do {
    count=0;
    for(i=0;i<8;i++){
      tempAccess[i]=10;
    }
    for(num=0;num<8;num++){
      tempRow=currentRow+vertical[num];
      tempColumn=currentColumn+horizontal[num];

      if(tempRow<=7 && tempRow>=0 && tempColumn<=7 && tempColumn>=0){
        if(2==board[tempColumn][tempRow]){

        }else{
          tempAccess[count]=num;
          count++;
        }
      }
    }
    if(count!=0){
      state=setArray(tempAccess[rand()%count]);
        ++counter;
        print();
        printf("\n" );


    }
  } while(count!=0);

print();
numbers[numbersi]=counter;
numbersi++;
printf("Counter:%d\n",counter );
printf("x=%d y=%d\n",currentRowtemp,currentColumntemp);
// getchar();

  count=0;
  }
  while(numbers[numbersi]!=0){
    printf("--%d++%d**\t",numbersi,numbers[numbersi]);
  }
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
