#include <stdio.h>
#include <string.h>

#define line 100

int main(){
	char s1[line]={"hello"};
	char s2;
	char *searchPtr=NULL;
	char *tmpPtr=NULL;
	int i=0;


	printf("Please input the text:\n\t");
	fgets(s1,line,stdin);
	tmpPtr=strchr(s1,'\n');
	*tmpPtr='\0';
	printf("Please input the char you are finding:\n\t");
  scanf("%c",&s2 );

	if(strchr(s1,s2)!=NULL){
		searchPtr=strchr(s1,s2);
		++i;
	//	printf("***%s***\n",searchPtr);//debug
		while(strchr(searchPtr+1,s2)!=NULL){
			searchPtr=strchr(searchPtr+1,s2);
	//		printf("***%s***\n",searchPtr);//debug
			++i;
		}
	}
	printf("The numbers of the char you found is :%d\n",i);


	return 0;
}
