#include <stdio.h>
#define R1 "Unreadable"
#define R2 "Barely readable, occasional words distinguishable"
#define R3 "Readable with considerable difficulty"
#define R4 "Readable with practically no difficulty"
#define R5 "Perfectly readable"
#define S1 "Faint signals, barely perceptible"
#define S2 "Very weak signals"
#define S3 "Weak signals"
#define S4 "Fair signals"
#define S5 "Fairly good signals"
#define S6 "Good signals"
#define S7 "Moderately strong signals"
#define S8 "Strong signals"
#define S9 "Extremely strong signals"

int main()
{
	int input,r,s;
	printf("请输入信号报告："); 
	scanf("%d",&input);
	
	r=input/10;
	s=input%10;
	
	switch(s){
		case 1:printf(S1",");break;
		case 2:printf(S2",");break;
		case 3:printf(S3",");break;
		case 4:printf(S4",");break;
		case 5:printf(S5",");break;
		case 6:printf(S6",");break;
		case 7:printf(S7",");break;
		case 8:printf(S8",");break;
		case 9:printf(S9",");break;
	}
	
	switch(r){
		case 1:printf(R1);break;
		case 2:printf(R2);break;
		case 3:printf(R3);break;
		case 4:printf(R4);break;
		case 5:printf(R5);break;
	}
	

	return 0;
}
