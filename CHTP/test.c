#define SIZE 10
float numbers[SIZE]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
float *nPtr;
for (i=1;i<=SIZE;i++){
  printf("%.1f\n",numbers[i] );
}
nPtr=&numbers;
nPtr=numbers;
for(i=1;i<=10;i++){
  printf("%.f\n",*nPtr++);
}
for(i=1;i<=10;i++){
  printf("%.f\n",numbers++);
}
for(i=1;i<=10;i++){
  printf("%.f\n",nPtr[i]);
}
numbers[4];
numbers+4;
nPtr[4];
nPtr+4;
&numbers[8];1002500+8*4;
numbers[1];1002500+4;

float *fPtr;
fPtr=&number1;
printf("%f",*fPtr );
printf("%f",number2 );
printf("%p",&number1 );
printf("%p",fPtr );

void exchange(float *x,float *y){
  float temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int evaluate(int x,int *poly()){

}
