#include <stdio.h>

void hanoi(int n,int a,int b,int c);


void main(void){
  int num;
  scanf("%d",&num);
  hanoi(num,1,3,2);
}

void hanoi(int n,int a,int b,int c){
  int i,tmp;
  int start,focus,temp;
  for(i=n;i>0;i--){

	printf("%d->%d\n",start,focus);
	tmp=start;
	start=temp;
	temp=tmp;
  }
}


/*#include <stdio.h>
void hanoi(int n,int start,int focus,int temp);
void main(void){
  hanoi(3,1,3,2);
}

void hanoi(int n,int start,int focus,int temp){
  if(0==n){
    return;
  }else{
    hanoi(n-1,start,temp,focus);
    printf("%d->%d\n",start,focus );
    hanoi(n-1,temp,focus,start);
  }
}
*/
//
// 3132
// 2123
// 1132
// // 0123
// 1132*
// // 0231
// 1132/
// 2123*
// 1321
// // 0312
// 1321*
// // 0123
// 1321/
// 2123/
// 3132*
// 2231
// 1213
// // 0231
// 1213*
// // 0312
// 1213/
// 2231*
// 1132
// // 0123
// 1132*
// // 0231
// 1132/
// 2231/
// 3132/
