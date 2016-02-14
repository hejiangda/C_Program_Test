// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//float all = 0;
//int number
int _tmain(int argc, _TCHAR* argv[])
{
	/*	int sum, x, n;
		x = 1;
		sum = 0;
		for (n = 0; n < 10; n++){
		sum = x + sum;
		++x;
		}
		printf("The sum is：%d", sum);
		getchar();
		*/
	/*	int c, product;
		while (c <= 5)
		{
		product *= c;
		++c;
		}

		float value;
		scanf("%f", &value);

		char gender;
		if (gender == 1){
		printf("woman\n");
		}
		else printf("Man\n");
		*/

	/*	int z = 100;
		int sum = 0;
		while (z >= 0){
		sum += z;
		z--;
		}
		printf("%d", sum);
		*/


	/*	if (age >= 65)
			printf("Age is greater than or equal to 65\n");
			else
			printf("Age is less than 65\n");
			*/
	/*	int x = 1, total=0;
		while (x <= 10){
		total += x;
		++x;
		}
		printf("%d", total);
		*/

	/*	int total = 0, x = 1;
		while (x <= 100){
		total += x;
		++x;
		}

		while (y > 0){
		printf("%d\n", y);
		--y;
		}
		*/


	//int x = 1, total = 0, y;
	//while (x<=10)
	//{
	//	y = x*x;
	//	printf("%d\n", y);
	//	total += y;
	//	++x;
	//}
	//printf("Total is %d\n", total);

	/*print "Enter two numbers";
	p = x + y + z;
	if m is twice greater than v
		do this
	else
	do this
	input s, r, t;*/


	//input the first number;
	//input the second number;
	//add the two numbers;
	//output sum;

	//input the first number;
	//input the second number; 
	//if a is greater than b
	//	printf a;
	//else if b is greater than a
	//	print b;
	//else print they are equal;

	/*int x;

	for (x = 1; x <= 13; x += 2){
		printf("%d\n", x);
	}
*/

	/*int x;
	for (x = 12; x >= 2; x -= 3){
		printf("%d\n", x);
	}*/
	
	/*int x;
	for (x = 19; x <= 51; x+=8){
		printf("%d,",x);
	}*/
//
//
//int x, y, i, j;
//printf("Enter two integers in the range 1-20: ");
//scanf_s("%d%d", &x, &y);
//for (i = 1; i <= y; i++){
//	for (j = 1; j <= x; j++){
//		printf("@");
//	}
//	printf("\n");
//}


/*	计算整数和；
	定义变量；

	
	输入；


	输出；
	*/

	//int x,i, y,sum;
	//x=sum = y = 0;
	//scanf_s("%d", &x);
	//for (i = 1; i <= x; i++){
	//	scanf_s("%d", &y);
	//	sum += y;
	//}
	//printf("%d", sum);

/*计算平均值
	
	*/

	//int x = 0;
	//int sum = 0;
	//int i = 0;
	////define 标记值为9999
	//scanf_s("%d", &x);
	//while (x != 9999){
	//	sum += x;
	//	scanf_s("%d", &x);
	//	++i;
	//}
	//printf("%d\n", sum/i);

/*	找最小；
	定义初始化变量
	总共个数 每个数 循环计数 最小数
	输入总共个数
	循环输入每个数
	
	找出最小
	输入的每个数两两对比找出最小
	*/	

	//int x,i,n,min;
	//x = n = i = min = 0;
	//scanf_s("%d", &n);
	//for (i = 1; i <= n; i++){
	//	scanf_s("%d", &x);
	//	if (i == 1){ min = x; }
	//	min >= x ? min = x:min=min;
	//}
	//printf("%d", min);

/*	计算偶整数的和
	定义初始化变量
	x,sum
	求和 sum+=x
	输出
	*/	
	/*int x, sum;
	x = sum = 0;
	for (x = 1; x <= 15; x += 2){
		sum += x;
	}
	printf("%d\n", sum);*/
	
/*计算阶乘
	定义初始化变量
	x,i,product
	计算
	循环i次每次i+1
	product=x!=1*...*x
	输出
	
	*/
	//double x, i,j, product;
	//x = i = j=product = 1;
	//for (i = 1; i <= 20; i++){
	//	for (j = 1; j <= x; ++j){
	//		product *= j;
	//		//printf("%d ", product);
	//	}
	//	printf("x=%.0lf x!=%.0lf\n", x, product);
	//	x++;
	//	product = 1;
	//}
	

	//double amount=0;
	//double principal = 1000.0;
	//double rate = .05;
	//int i = 1;
	//int year;
	//printf("%4s%21s\n", "Year", "Amount on deposit");
	//for (i = 1; i <= 10; i++){
	//	for (year = 1; year <= 10; year++){
	//		amount = principal*pow(1.0 + rate, year);
	//		printf("%4d%21.2f\n", year, amount);
	//	}
	//	rate += .01;
	//}
	//int i = 1;
	//int x = 1;
	//int j = 1;
	//for (i = 1; i <= 10; i++){
	//	for (j = 10; j >= i; j--){
	//		printf(" ");
	//	}
	//	for (x = 1; x <= i; x++){ 
	//		printf("*");
	//		}
	//	printf("\n");
	//}

/*		  */	

	//int  x,j, k,a1,a2,a3,a4,a5;
	//x=j = k=a1=a2=a3=a4=a5=0;
	//scanf_s("%d%d%d%d%d%d", &a1,&a2,&a3,&a4,&a5);
	//for (j = 1; j <= 5; j++){
	//	for (x = 1; x <= a1; x++)printf("*"); printf("\n");
	//	for (x = 1; x <= a2; x++)printf("*"); printf("\n");
	//	for (x = 1; x <= a3; x++)printf("*"); printf("\n");
	//	for (x = 1; x <= a4; x++)printf("*"); printf("\n");
	//	for (x = 1; x <= a5; x++)printf("*"); printf("\n");

	//}

/*	打印柱状图
	定义初始化变量
	n,a1，a2，a3，a4，a5
	读入5个整数
	打印
	循环打印
	*/	
	
	//int  n, a1, a2, a3, a4, a5;
	//scanf_s("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
	//for (n = 1; n <= a1; n++){ printf("*"); }printf("\n");
	//for (n = 1; n <= a2; n++){ printf("*"); }printf("\n");
	//for (n = 1; n <= a3; n++){ printf("*"); }printf("\n");
	//for (n = 1; n <= a4; n++){ printf("*"); }printf("\n");
	//for (n = 1; n <= a5; n++){ printf("*"); }printf("\n");

	
/*  零售店
	定义初始化变量

	输入产品号和销售量


	输出所有商品总销售额*/
	//int x = 0;
	//double  y,sum;
	//sum =y= 0;
	//scanf_s("%d", &x);
	//while (x != 6){
	//	switch(x){
	//	case 1:y = 2.98; break;
	//	case 2:y = 4.50; break;
	//	case 3:y = 9.98; break;
	//	case 4:y = 4.49; break;
	//	case 5:y = 6.87; break;
	//	}
	//	sum += y;
	//	scanf_s("%d", &x);
	//}
	//printf("sum=%lf", sum);
	//getchar();

	//int i = 1;
	//int j = 2;
	//int k = 3;
	//int m = 3;

	//printf("%d", i == 1);//1010100011
	//printf("%d", j == 3);
	//printf("%d", i >= 1 && j < 4);
	//printf("%d", m <= 99 && k < m);
	//printf("%d", j >= i || k == m);
	//printf("%d", k + m < j || 3 - j >= k);
	//printf("%d", !m);
	//printf("%d", !(j - m));
	//printf("%d", !(k > m));
	//printf("%d", !(j > k));

	//int n, ex;
	//n = ex = 0;
	//printf("%8s%8s%8s%8s\n", "十进制", "十六进制","八进制","二进制");
	//
	//for (n = 0; n <= 255; n++){
	//	printf("%8d%8x%85o%8b\n", n, n,n,n);
	//}

	//double pi,i;
	//long int n,m,k,j;
	//
	//pi = i = n =j=k= m=0;

	//pi = 0;
	//i = 1;
	//scanf_s("%d", &m);
	//	for (n = 0; n <= m; n++){
	//		if (n % 2 == 0){ k = 1; }
	//		else k = -1;
	//		pi += k*4.0 / i;
	//		i += 2.0;
	//
	//	}
	//	printf("%.10lf\n", pi);

	//int n,x, y, z,x1;
	//n = x = y = z = x1=0;
	//for (x = 1; x <= 500; x++){
	//	for (y = 1; y <= 500; y++){
	//		for (z = 1; z <= 500; z++){
	//			if (x*x + y*y == z*z){
	//				
	//				if (x <= y <= z&&x1 != x){ printf("x=%4d y=%4d z=%4d\n", x, y, z); x++; }
	//				 }
	//		}
	//	}
	//}

	

	//int space, star, n,line;
	//space = star = n = line = 0;
	//scanf_s("%d", &line);
	//for (n = 1; n <=line; n++){
	//	for (space =line-n; space > 0; space--){
	//		printf(" ");
	//	}
	//	for (star = 1 + 2 * (n-1); star >0 ; star--){ 
	//		printf("*"); 
	//	}
	//	printf("\n");
	//}
	//for (n = 1; n <= line; n++){
	//	for (space = n; space > 0; space--){
	//		printf(" ");
	//	}
	//	for (star = 2*line - 2 * (n)-1; star > 0; star--){
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	/*printf("sqrt=%lf\n", sqrt(25.0));
	printf("exp=%lf\n", exp(25.0));
	printf("log=%lf\n", log(25.0));
	printf("log10=%lf\n", log10(25.0));
	printf("fabs=%lf\n", fabs(-25.0));
	printf("ceil=%lf\n", ceil(25.5));
	printf("floor=%lf\n", floor(25.5));
	printf("pow=%lf\n", pow(25.0,25.0));
	printf("fmod=%lf\n", fmod(25.0,3));
*/


	//double hypotenuse(double side1, double side2);
	//int smalleast(int x, int y, int z);
	//void instructions(void);
	//float intToFloat(int number);

//register int count = 0;
//static float lastVal;
//double x;
//x = fabs(7.5);
//printf("%f\n", x);
//x = floor(7.5);
//printf("%f\n", x);
//x = fabs(0.0);
//printf("%f\n", x);
//x = ceil(0.0);
//printf("%f\n", x);
//x = fabs(-6.4);
//printf("%f\n", x);
//x = ceil(-6.4);
//printf("%f\n", x);
//x = ceil(-fabs(-8 + floor(-5.5)));
//printf("%f\n", x);


/*
	停车收费
	时间<=3 max=2
	时间>3  +0.5/h less 1h=1h
	时间=24 max=10

	*/
//float cus1, cus2, cus3,charge;
//cus1 = cus2 = cus3 = charge  = 0;
//printf("Please input the first customer's hours:");
//scanf_s("%f", &cus1);
//printf("Please input the second customer's hours:");
//scanf_s("%f", &cus2);
//printf("Please input the third customer's hours:");
//scanf_s("%f", &cus3);
//
//void calculateCharges(float cus);
//printf("%s%10s%10s\n", "Car", "Hours", "Charge");
//calculateCharges(cus1);
//calculateCharges(cus2);
//calculateCharges(cus3);
//printf("%s%10.1f%10.1f\n", "TOTAL", cus1 + cus2 + cus3, all);



//double x, y;
//x = y = 0;
//scanf_s("%lf", &x);
//y = floor(x + 0.5);
//printf("%f*%f", x, y);
//
//
//double x, y;
//x = y = 0;
//double roundToHundreths(double number);
//
//
//int  n;
//srand(time(NULL));
//n = -3+ rand() % 14;
//printf("%d", n);

//int n = 0;
//int x = 0;
//srand(time(NULL));
//n = 1 + rand() % 5;
//switch(n){
//	case 1:x = 2; break;
//	case 2:x = 4; break;
//	case 3:x = 6; break;
//	case 4:x = 8; break;
//	case 5:x = 10; break;
//}
//printf("x=%d", x);


/*
	integerPower(base,exponent);
	exponent>=0;base int; for

	*/

//int integerPower(int base, int exponent);
//printf("%d|%d---%d", 5, 4, integerPower(5, 4));
//
//
//int x;
//scanf_s("%d", &x);
//int multiple(int);
//printf("%d",multiple(x));
//
//
//void display(int side,char fillCharacter);
//display(20,'|');

/*
a/b
a%b


*/

//int time(int h, int m, int s);
//printf("%d", time(5, 6, 7) - time(4, 5, 6));
//
//int x;
//scanf_s("%d", &x);
//



/*
	被自已整除是素数
	i/23456789...

	*/

//int sushu(int x);
//int a,i;
//for (i = 1; i <= 10000; i++){
//	if (sushu(i) != 0){
//		a = sushu(i);
//		printf("%d\t", a);
//	}
//}



//long int x, n,y,z,q;
//x = n = z=q=0;
//z = 1;
//y = 1;
////scanf_s("%d", &x);
//while (z>0){
//	printf("%d ", z);
//	q = y;
//	y += z;
//	z = q;
//}

//double fibonacci(double);
//double b;
//int a;
//a = b = 0;
//scanf_s("%d", &a);
//b=fibonacci(a);
//printf("%lf", b);


//static int count = 1;
//printf("%d\n", count);
//count++;
//_tmain();





		return 0;
}
//
//double fibonacci(double x){
//	if (x==1)
//	{
//		return 0;
//	}
//	else if (x == 2){
//		return 1;
//	}
//	if (x > 2){
//		return fibonacci(x - 1) + fibonacci(x - 2);
//	}
//}
//

//int sushu(int x)
//{
//	int i, n;
//	i = n = 0;
//	for (i = 1; i <= x; i++){
//		if (x%i == 0){
//			n++;
//		}
//	}
//	if (n == 2 || x == 1){
//		return x;
//	}
//	else return 0;
//	
//}

//int change(int x){
//	int n,a, b, c, d, e;
//	n=a = b = c = d = e = 0;
//	a = x % 10;
//	x = x / 10;
//	b = x % 10;
//	x = x / 10;
//	c = x % 10;
//	x = x / 10;
//	d = x % 10;
//	x = x / 10;
//	e = x % 10;
//	
//
//}
//


//int time(int h, int m, int s){
//	int sum = 60 * 60 * h + 60 * m + s;
//	return sum;
//}


//void display(int side,char fillCharacter){
//	int n,i;
//	for (n = 1; n <= side; n++){
//		for (i = 1; i <= side; i++){
//			printf("%c",fillCharacter);
//		}printf("\n");
//	}
//}


//int multiple(int x){
//	if (x%2 == 0){
//		return 1;
//	}
//	else return 0;
//}

//int integerPower(int base, int exponent){
//	int y=1;
//	int n = 1;
//	for (; n <= exponent; n++){
//		y *= base;
//	}
//	return y;
//}


//
//double roundToHundreths(double number){
//	double z;
//	z = floor(number * 100 + .5) / 100;
//}

//void calculateCharges(float cus){
//	float result;
//	static int car=1;
//	if (cus <= 3){
//		result = 2;
//	}
//	else if (cus > 3&&cus<24){
//		result = 2 + 0.5*ceil(cus-3);
//	}
//	else if (cus >= 24){
//		result = 10;
//	}
//	printf("%-d%10.1f%10.1f\n", car, cus, result);
//	car++;
//	all += result;
//	
//}