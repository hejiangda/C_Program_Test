#include <stdio.h>

// 1 -->blank ;
// 2 -->draw  ;
// 3 -->right ;
// 4 -->left  ;
// 5,10>step  ;
// 6 -->print ;
// 9 -->exit  ;

void print(void);
void setarray(int hua,int fangxiang,int step);
int floor1[50][50]={0};
int x=0,y=0;

int main(int argc, char const *argv[]) {
  int n=0;
  int hua=1,fangxiang=0;
  int moveStep=0;
  int cmdtemp;
  int draw=0;
  int cmd[40]={2,524,3,524,4,512,4,506,4,506,4,503,3,516,4,509,4,508,4,507,1,6,9};

  while(cmd[n]!=9){
    cmdtemp=cmd[n];

  // while(cmdtemp!=9){
    // scanf("%d",&cmdtemp);
    if(cmdtemp==1){
      hua=1;
    }else if(cmdtemp==2){
      hua=2;
    }

    if(cmdtemp==3){
      fangxiang=3;
    }else if(cmdtemp==4){
      fangxiang=4;
    }

    if(cmdtemp>499){
      draw=5;
      moveStep=cmdtemp%100;
      setarray(hua,fangxiang,moveStep);
    }
    if(cmdtemp==6){
      print();
    }

    draw=0;
    n++;
  }
  return 0;
}

void print(void){
  int n=0,i=0;
  for(i=0;i<50;i++){
    for(n=0;n<50;n++){
      if(1==floor1[n][i]){
        printf("* ");
      }else if(0==floor1[n][i]){
        printf(". ");
      }
    }
    printf("\n");
  }
}

void setarray(int hua,int fangxiang,int step){
  int n=0,m=0,temp=0;
  static int count=0;

  if(hua==1){
    if(fangxiang==0){
      x+=step;
    }else if(fangxiang==3){
      count++;
      if(count==0){
        x+=step;
      }else if(count==1){
        y+=step;
      }else if(count==2){
        x-=step;
      }else if(count==3){
        y-=step;
      }
    }else if(fangxiang==4){
      count--;
      if(count==0){
        x+=step;
      }else if(count==1){
        y+=step;
      }else if(count==2){
        x-=step;
      }else if(count==3){
        y-=step;
      }
    }
  }else if(hua==2){
    if(fangxiang==0){
      for(n=0;n<step;n++){
        floor1[x+n][y]=1;
      }
      x+=step;
      }else if(fangxiang==3){

        count++;//0 右，1 下，2 左，3 上
        count%=4;
        if(count==0){
          for(n=0;n<step;n++){
            floor1[x+n][y]=1;
          }
          x+=step;
        }else if(count==1){
          for(n=0;n<step;n++){
            floor1[x][y+n]=1;
          }
          y+=step;
        }else if(count==2){
          for(n=0;n<step;n++){
            floor1[x-n][y]=1;
          }
          x-=step;
        }else if(count==3){
          for(n=0;n<step;n++){
            floor1[x][y-n]=1;
          }
          y-=step;
        }
      }else if(fangxiang==4){

        count--;//0 右，1 下，2 左，3 上
        count%=4;
        if(count<0){
          count=3;
        }
        if(count==0){
          for(n=0;n<step;n++){
            floor1[x+n][y]=1;
          }
          x+=step;
        }else if(count==1){
          for(n=0;n<step;n++){
            floor1[x][y+n]=1;
          }
          y+=step;
        }else if(count==2){
          for(n=0;n<step;n++){
            floor1[x-n][y]=1;
          }
          x-=step;
        }else if(count==3){
          for(n=0;n<step;n++){
            floor1[x][y-n]=1;
          }
          y-=step;
      }
    }
  }
}
