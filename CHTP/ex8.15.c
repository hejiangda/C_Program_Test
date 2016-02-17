#include <stdio.h>
#include <string.h>

int main(){
	char s1[30];
	char *temp;
	char *s2[30]={0};
	int i=0;
	
	scanf("%[^\n]",s1);
	
	temp=strtok(s1," ");
	while(temp!='\0'){
		s2[i]=temp;
		i++;
		temp=strtok(NULL," ");
	}
//	printf("\n**%d**\n",i);
	--i;
	for (;i>=0;i--){
		printf("%s ",s2[i]);
	}
	return 0;
}
