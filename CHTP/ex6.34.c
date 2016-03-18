#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[8][8]={0};
int accessibility[8][8]={0};

void setBoard(int x,int y);

void print(void);

void access(void);

int min(void);

int counter();

void clear();

int queenDigui();

int main(int argc, char const *argv[]) {
  int x,y,m,i,count=0;
  srand(time(NULL));
  while(count!=7){
    clear();
    setBoard(rand()%8,rand()%8);
    count=0;
    count=queenDigui();
  }
  print();
  printf("\n");
  return 0;
}

int queenDigui(){
  int m;
  static int count=0;
  if(count>8){
    count=0;
  }
  if(counter()!=0){
    access();
    m=min();
    setBoard(m/10,m%10);
    queenDigui();
    count++;
  }
  if(count>7){
    return 0;
  }
  return count;
}


void clear(){
  int x,y;
  for(x=0;x<8;x++){
    for(y=0;y<8;y++){
      board[x][y]=0;
    }
  }
}

int counter(){
  int xi,yi,count=0;
  for(xi=0;xi<8;xi++){
    for(yi=0;yi<8;yi++){
      if(board[xi][yi]==0){
        count++;
      }
    }
  }
  return count;
}

void print(void){
  int n=0,i=0;
  for(i=0;i<8;i++){
    for(n=0;n<8;n++){
      if(100==board[n][i]){
        printf("Q ");
      }else if(0==board[n][i]){
        printf(". ");
      }else if(200==board[n][i]){
        printf("* ");
      }
    }
    printf("\n");
  }
}

void setBoard(int x,int y){
  int xi,yi;
  for(xi=0;xi<8;xi++){  //行
    board[xi][y]=200;
  }
  for(yi=0;yi<8;yi++){  //列
    board[x][yi]=200;
  }//ok
  yi=y;
  xi=x;
  while(yi<7){  //右下
    yi++;
    if(xi<8){
      xi++;
      if(board[xi][yi]!=100){
        board[xi][yi]=200;
      }
    }
  }
  yi=y;
  xi=x;
  while(yi>0){  //左上
    yi--;
    if(xi>=0){
      xi--;
      if(board[xi][yi]!=100){
        board[xi][yi]=200;
      }
    }
  }
  yi=y;
  xi=x;
  while(yi>0){  //右上
    yi--;
    if(xi<8){
      xi++;
      if(board[xi][yi]!=100){
        board[xi][yi]=200;
      }
    }
  }
  yi=y;
  xi=x;
  while(yi<7){  //左下
    yi++;
    if(xi>=0){
      xi--;
      if(board[xi][yi]!=100){
        board[xi][yi]=200;
      }
    }
  }
  board[x][y]=100;
}

void access(void){
  int xi,yi,xn,yn,count=0;
  for(xi=0;xi<8;xi++){
    for(yi=0;yi<8;yi++){
      accessibility[xi][yi]=board[xi][yi];
    }
  }
  for(xi=0;xi<8;xi++){
    for(yi=0;yi<8;yi++){
      if(accessibility[xi][yi]==0){

        for(xn=0;xn<8;xn++){  //行
          if(accessibility[xn][yi]!=100&&accessibility[xn][yi]!=200){
            count++;
          }
        }
        for(yn=0;yn<8;yn++){  //列
          if(accessibility[xi][yn]!=100&&accessibility[xi][yn]!=200){
            count++;
          }
        }

        //
        yn=yi;
        xn=xi;
        while(yn<7){  //右下
          yn++;
          if(xn<8){
            xn++;
            if(accessibility[xn][yn]!=100&&accessibility[xn][yn]!=200){
              count++;
            }
          }
        }
        yn=yi;
        xn=xi;
        while(yn>0){  //左上
          yn--;
          if(xn>=0){
            xn--;
            if(accessibility[xn][yn]!=100&&accessibility[xn][yn]!=200){
              count++;
            }
          }
        }
        yn=yi;
        xn=xi;
        while(yn>0){  //右上
          yn--;
          if(xn<8){
            xn++;
            if(accessibility[xn][yn]!=100&&accessibility[xn][yn]!=200){
              count++;
            }
          }
        }
        yn=yi;
        xn=xi;
        while(yn<7){  //左下
          yn++;
          if(xn>=0){
            xn--;
            if(accessibility[xn][yn]!=100&&accessibility[xn][yn]!=200){
              count++;
            }
          }
        }
        //
        accessibility[xi][yi]=count-3;
        count=0;
      }
    }
  }

}

int min(void){
  int tempRank[30][20]={0};
  int xi,yi,num=0,n=0,i=0;
  for(xi=0;xi<8;xi++){
    for(yi=0;yi<8;yi++){
      if(accessibility[xi][yi]<100){
        while(tempRank[accessibility[xi][yi]][n]!=0){
          n++;
        }
        tempRank[accessibility[xi][yi]][n]=xi*10+yi;
        n=0;
      }
    }
  }
  n=0;//ok
  while(tempRank[n][0]==0){
    n++;
  }
  while(tempRank[n][i]!=0){
    i++;
  }
  return tempRank[n][rand()%i];
}
