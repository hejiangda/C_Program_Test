#include <stdio.h>

#define p1 "yi"
#define p2 "er"
#define p3 "san"
#define p4 "si"
#define p5 "wu"
#define p6 "liu"
#define p7 "qi"
#define p8 "ba"
#define p9 "jiu"
#define p0 "ling"
#define pf "fu"
void pinyin(int p);
int main()
{
	int a,b,p;
	int c,n;
	int s[7];
	c=1;
	n=0;
	printf("Please input a:");
	scanf("%d",&a);
	b=a;
	if(a<0){
	a=(-a);
	}
	while(a>0){
		s[c]=a%10;
		a=a/10;
		c++;
		n++;		
//		printf("n:%d",n);
	}
		
//	printf("%d",n);
	if(b<0)
		{
			printf(pf);
			printf(" ");
		}
//			printf("n:%d",n);
			while(n>0){
				pinyin(s[n]);
				if(n!=1){
				printf(" ");
				}
				
				n--;
			}
	
	
	return 0;
}

void pinyin(p){
	if(p==1){printf(p1);
	}else if (p==2){printf(p2);
	}else if (p==3){printf(p3);
	}else if (p==4){printf(p4);
	}else if (p==5){printf(p5);
	}else if (p==6){printf(p6);
	}else if (p==7){printf(p7);
	}else if (p==8){printf(p8);
	}else if (p==9){printf(p9);
	}else if (p==0){printf(p0);}
	
}

